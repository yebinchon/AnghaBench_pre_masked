
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_len; TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int localaddr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int *,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int,struct sockaddr*,int) ;
 int FUNC_3 (struct sockaddr_in*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int,char**,char*) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int,int) ;
 int VAR_7 ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 () ;

int FUNC_12(int VAR_8, char **VAR_9)
{

 int VAR_10, VAR_11, VAR_12, VAR_13 = 0;
 int VAR_14 = VAR_4;
 int VAR_15 = VAR_3;
 struct sockaddr_in VAR_16;

 while ((VAR_10 = FUNC_6(VAR_8, VAR_9, "p:l:")) != -1) {
  switch (VAR_10) {
  case 'p':
   VAR_14 = FUNC_1(VAR_7);
   break;
  case 'l':
   VAR_15 = FUNC_1(VAR_7);
                     break;
  case 'h':
  default:
   FUNC_11();
  }
 }

 FUNC_3(&VAR_16, sizeof(VAR_16));
 VAR_16.sin_len = sizeof(VAR_16);
 VAR_16.sin_family = VAR_0;
 VAR_16.sin_port = FUNC_7(VAR_14);
 VAR_16.sin_addr.s_addr = VAR_2;

 VAR_11 = FUNC_10(VAR_0, VAR_6, 0);

 if (FUNC_2(VAR_11, (struct sockaddr *)&VAR_16,
   sizeof(struct sockaddr_in)) < 0)
  FUNC_5(VAR_1, "Could not bind to INADDR_ANY:%d", VAR_14);

 if (FUNC_8(VAR_11, VAR_15) < 0)
  FUNC_5(VAR_1, "Failed to listen with depth of %d\n", VAR_15);

 while (((VAR_12 = FUNC_0(VAR_11, ((void*)0), ((void*)0))) >= 0)
        && (VAR_13 < VAR_5)) {
  FUNC_4(VAR_12);
  VAR_13++;
 }

 FUNC_8(VAR_11, 0);

 while (((VAR_12 = FUNC_0(VAR_11, ((void*)0), ((void*)0))) >= 0)
     && (VAR_13 <= (VAR_5 + VAR_15 + 1))) {
  FUNC_4(VAR_12);
  VAR_13++;
 }

 if (FUNC_0(VAR_11, ((void*)0), ((void*)0)) >= 0)
  FUNC_9 ("Late connection at %d\n", VAR_13);
 else
  FUNC_9("recvd %d\n", VAR_13);
}
