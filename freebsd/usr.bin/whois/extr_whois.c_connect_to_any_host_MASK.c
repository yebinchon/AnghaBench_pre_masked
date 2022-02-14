
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int fd; int events; int revents; } ;
struct addrinfo {int ai_socktype; struct addrinfo* ai_next; int ai_addrlen; int ai_addr; int ai_protocol; int ai_family; } ;
typedef size_t nfds_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct pollfd* FUNC_0 (size_t,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (struct pollfd*) ;
 int FUNC_5 (struct pollfd*,size_t,int) ;
 int FUNC_6 (int ,int,int ) ;

__attribute__((used)) static int
FUNC_7(struct addrinfo *VAR_10)
{
 struct addrinfo *VAR_11;
 nfds_t VAR_12, VAR_13;
 size_t VAR_14;
 struct pollfd *VAR_15;
 int VAR_16 = 180, VAR_17 = -1;

 for (VAR_11 = VAR_10, VAR_14 = 0; VAR_11; VAR_11 = VAR_11->ai_next)
  VAR_14++;
 VAR_15 = FUNC_0(VAR_14, sizeof(*VAR_15));
 if (VAR_15 == ((void*)0))
  FUNC_3(VAR_2, "calloc()");





 VAR_14 = VAR_12 = 0;
 for (VAR_11 = VAR_10; VAR_11 != ((void*)0); VAR_11 = VAR_11->ai_next) {
  VAR_17 = FUNC_6(VAR_11->ai_family, VAR_11->ai_socktype | VAR_8,
      VAR_11->ai_protocol);
  if (VAR_17 < 0)
   continue;
  if (FUNC_2(VAR_17, VAR_11->ai_addr, VAR_11->ai_addrlen) < 0) {
   if (VAR_9 == VAR_0) {

    VAR_15[VAR_12].fd = VAR_17;
    VAR_15[VAR_12].events = VAR_4 | VAR_5 |
      VAR_6 | VAR_7;




    VAR_17 = -1;
    VAR_14++;
    VAR_12++;
   } else {
    FUNC_1(VAR_17);
    VAR_17 = -1;






    if (VAR_14 == 0)
     continue;
   }
  } else
   goto done;





  if (VAR_11->ai_next == ((void*)0))
   VAR_16 = VAR_3;







  do {
   int VAR_18;

   VAR_18 = FUNC_5(VAR_15, VAR_12, VAR_16);
   if (VAR_18 == 0) {





    if (VAR_16 >= 3)
     VAR_16 >>= 1;

    break;
   } else if (VAR_18 < 0) {




    VAR_17 = -1;
    goto done;
   }




   for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
    if (VAR_15[VAR_13].fd == -1 || VAR_15[VAR_13].events == 0 ||
        VAR_15[VAR_13].revents == 0)
     continue;
    if (VAR_15[VAR_13].revents & ~(VAR_6 | VAR_7)) {
     FUNC_1(VAR_15[VAR_13].fd);
     VAR_15[VAR_13].fd = -1;
     VAR_15[VAR_13].events = 0;
     VAR_14--;
     continue;
    } else if (VAR_15[VAR_13].revents & (VAR_6 | VAR_7)) {

     VAR_17 = VAR_15[VAR_13].fd;
     VAR_15[VAR_13].fd = -1;

     goto done;
    }

   }
  } while (VAR_16 == VAR_3 && VAR_14 != 0);
 }


 VAR_17 = -1;
 if (VAR_14 == 0)
  VAR_9 = VAR_1;

done:

 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
  if (VAR_15[VAR_13].fd != -1)
   FUNC_1(VAR_15[VAR_13].fd);
 FUNC_4(VAR_15);
 return (VAR_17);
}
