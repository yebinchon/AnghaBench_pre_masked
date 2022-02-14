
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socketlist {int nr; int * list; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct pollfd {int events; int revents; int fd; } ;
typedef int ss ;
typedef int socklen_t ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct sockaddr*,int*) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int FUNC_3 (int,struct sockaddr*,int) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (struct pollfd*,int,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 struct pollfd* FUNC_9 (int,int) ;

__attribute__((used)) static int FUNC_10(struct socketlist *VAR_4)
{
 struct pollfd *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_9(VAR_4->nr, sizeof(struct pollfd));

 for (VAR_6 = 0; VAR_6 < VAR_4->nr; VAR_6++) {
  VAR_5[VAR_6].fd = VAR_4->list[VAR_6];
  VAR_5[VAR_6].events = VAR_0;
 }

 FUNC_6(VAR_1, VAR_2);

 for (;;) {
  int VAR_7;

  FUNC_1();

  if (FUNC_5(VAR_5, VAR_4->nr, -1) < 0) {
   if (VAR_3 != 128) {
    FUNC_4("Poll failed, resuming: %s",
          FUNC_8(VAR_3));
    FUNC_7(1);
   }
   continue;
  }

  for (VAR_7 = 0; VAR_7 < VAR_4->nr; VAR_7++) {
   if (VAR_5[VAR_7].revents & VAR_0) {
    union {
     struct sockaddr sa;
     struct sockaddr_in sai;

     struct sockaddr_in6 sai6;

    } VAR_8;
    socklen_t VAR_9 = sizeof(VAR_8);
    int VAR_10 = FUNC_0(VAR_5[VAR_7].fd, &VAR_8.sa, &VAR_9);
    if (VAR_10 < 0) {
     switch (VAR_3) {
     case 130:
     case 128:
     case 129:
      continue;
     default:
      FUNC_2("accept returned");
     }
    }
    FUNC_3(VAR_10, &VAR_8.sa, VAR_9);
   }
  }
 }
}
