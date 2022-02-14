
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int ssize_t ;
typedef int sin ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct sockaddr*,int) ;
 int VAR_4 ;
 int FUNC_2 (int,char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (long*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int,int) ;
 int FUNC_7 (int,long*,int,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (long) ;
 int VAR_5 ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void
FUNC_11(struct sockaddr_in VAR_6, long VAR_7)
{
 long VAR_8[VAR_0];
 ssize_t VAR_9;
 int VAR_10, VAR_11, VAR_12;

 FUNC_9(VAR_7);

 VAR_12 = FUNC_8(VAR_2, VAR_3, 0);
 if (VAR_12 == -1)
  FUNC_2(-1, "socket: %s", FUNC_10(VAR_4));

 if (FUNC_1(VAR_12, (struct sockaddr *) &VAR_6, sizeof(VAR_6)) == -1)
  FUNC_2(-1, "connect: %s", FUNC_10(VAR_4));

 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
  for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
   FUNC_4(VAR_8, VAR_10);
   VAR_9 = FUNC_7(VAR_12, VAR_8, VAR_10 * sizeof(long), 0);
   if (VAR_9 == -1) {
    FUNC_6("%d bytes written of %d expected\n",
        VAR_9, VAR_10 * sizeof(long));
    FUNC_3(VAR_5);
    FUNC_5("send");
    goto done;
   }
  }
 }

done:
 FUNC_0(VAR_12);
}
