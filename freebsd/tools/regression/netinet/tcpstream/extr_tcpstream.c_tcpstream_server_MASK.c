
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int sin_port; int sin_addr; } ;
struct sockaddr {int dummy; } ;
typedef int ssize_t ;
typedef int socklen_t ;
typedef int sin ;
typedef int other_sin ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,struct sockaddr*,int*) ;
 int FUNC_1 (int,struct sockaddr*,int) ;
 int FUNC_2 (struct sockaddr_in*,int) ;
 scalar_t__ FUNC_3 (long*,int) ;
 int FUNC_4 (int) ;
 int VAR_5 ;
 int FUNC_5 (int,char*,int ) ;
 int FUNC_6 (int ,char*,int,...) ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (int,long*,int,int ) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (long) ;
 int VAR_6 ;
 int FUNC_15 (int ) ;

__attribute__((used)) static void
FUNC_16(struct sockaddr_in VAR_7, long VAR_8)
{
 int VAR_9, VAR_10, VAR_11, VAR_12;
 struct sockaddr_in VAR_13;
 long VAR_14[VAR_0];
 socklen_t VAR_15;
 ssize_t VAR_16;

 int VAR_17;

 VAR_11 = FUNC_13(VAR_3, VAR_4, 0);
 if (VAR_11 == -1)
  FUNC_5(-1, "socket: %s", FUNC_15(VAR_5));

 if (FUNC_1(VAR_11, (struct sockaddr *)&VAR_7, sizeof(VAR_7)) == -1)
  FUNC_5(-1, "bind: %s", FUNC_15(VAR_5));

 if (FUNC_8(VAR_11, -1) == -1)
  FUNC_5(-1, "listen: %s", FUNC_15(VAR_5));

 while (1) {
  FUNC_2(&VAR_13, sizeof(VAR_13));
  VAR_15 = sizeof(VAR_13);

  VAR_12 = FUNC_0(VAR_11, (struct sockaddr *)
      &VAR_13, &VAR_15);
  if (VAR_12 == -1) {
   FUNC_10("accept");
   continue;
  }
  FUNC_11("connection opened from %s:%d\n",
      FUNC_7(VAR_13.sin_addr), FUNC_9(VAR_13.sin_port));
  VAR_17 = 0;

  FUNC_14(VAR_8);

  for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
   for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
    VAR_16 = FUNC_12(VAR_12, VAR_14,
        VAR_9 * sizeof(long), VAR_2);
    if (VAR_16 != VAR_9 * sizeof(long)) {
     FUNC_10("recv");
     goto done;
    }
    if (FUNC_3(VAR_14, VAR_9) == 0) {
     FUNC_6(VAR_6,
    "Corruption in block beginning %d and ending %d\n", VAR_17,
    VAR_17 + VAR_16);
     FUNC_6(VAR_6,
    "Block size %d\n", VAR_9 * sizeof(long));
     goto done;
    }
    VAR_17 += VAR_16;
   }
  }
done:
  FUNC_11("connection closed\n");
  FUNC_4(VAR_12);
 }
}
