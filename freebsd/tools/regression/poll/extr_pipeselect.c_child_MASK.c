
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
typedef int fd_set ;


 int FUNC_0 (int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int ,struct timeval) ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int,char*,int) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int) ;
 int VAR_7 ;
 int FUNC_8 (int,char*,int) ;
 int FUNC_9 (int ,char*,int,int ) ;
 scalar_t__ FUNC_10 (int,int *,int *,int *,struct timeval*) ;
 int VAR_8 ;
 int FUNC_11 (int) ;

__attribute__((used)) static void
FUNC_12(int VAR_9, int VAR_10)
{
 fd_set VAR_11;
 struct timeval VAR_12;
 int VAR_13, VAR_14;
 char VAR_15[256];

 if (VAR_6 == VAR_2) {
  VAR_9 = FUNC_7(VAR_1, VAR_4 | VAR_3);
  if (VAR_9 < 0)
   FUNC_3(1, "open for read");
 }
 if (VAR_9 >= VAR_0)
  FUNC_4(1, "fd = %d too large for select()", VAR_9);

 if (VAR_6 == VAR_2) {
  FUNC_1(VAR_9, VAR_11, VAR_12);
  if (FUNC_10(VAR_9 + 1, &VAR_11, ((void*)0), ((void*)0), &VAR_12) < 0)
   FUNC_3(1, "select");
  FUNC_9(VAR_10++, "0", 1, FUNC_0(VAR_9, &VAR_11));
 }
 FUNC_6(VAR_7, VAR_5);

 FUNC_11(1);
 while (VAR_8 != 1)
  ;
 if (VAR_6 != VAR_2) {





  VAR_8 = 4;
  goto state4;
 }
 FUNC_1(VAR_9, VAR_11, VAR_12);
 if (FUNC_10(VAR_9 + 1, &VAR_11, ((void*)0), ((void*)0), &VAR_12) < 0)
  FUNC_3(1, "select");
 FUNC_9(VAR_10++, "1", 0, FUNC_0(VAR_9, &VAR_11));
 FUNC_6(VAR_7, VAR_5);

 FUNC_11(1);
 while (VAR_8 != 2)
  ;
 FUNC_1(VAR_9, VAR_11, VAR_12);
 if (FUNC_10(VAR_9 + 1, &VAR_11, ((void*)0), ((void*)0), &VAR_12) < 0)
  FUNC_3(1, "select");
 FUNC_9(VAR_10++, "2", 1, FUNC_0(VAR_9, &VAR_11));
 if (FUNC_8(VAR_9, VAR_15, sizeof VAR_15) != 1)
  FUNC_3(1, "read");
 FUNC_1(VAR_9, VAR_11, VAR_12);
 if (FUNC_10(VAR_9 + 1, &VAR_11, ((void*)0), ((void*)0), &VAR_12) < 0)
  FUNC_3(1, "select");
 FUNC_9(VAR_10++, "2a", 0, FUNC_0(VAR_9, &VAR_11));
 FUNC_6(VAR_7, VAR_5);

 FUNC_11(1);
 while (VAR_8 != 3)
  ;
 FUNC_1(VAR_9, VAR_11, VAR_12);
 if (FUNC_10(VAR_9 + 1, &VAR_11, ((void*)0), ((void*)0), &VAR_12) < 0)
  FUNC_3(1, "select");
 FUNC_9(VAR_10++, "3", 1, FUNC_0(VAR_9, &VAR_11));
 FUNC_6(VAR_7, VAR_5);







 FUNC_11(1);
 while (VAR_8 != 4)
  ;
state4:
 FUNC_1(VAR_9, VAR_11, VAR_12);
 if (FUNC_10(VAR_9 + 1, &VAR_11, ((void*)0), ((void*)0), &VAR_12) < 0)
  FUNC_3(1, "select");
 FUNC_9(VAR_10++, "4", 0, FUNC_0(VAR_9, &VAR_11));
 FUNC_6(VAR_7, VAR_5);

 FUNC_11(1);
 while (VAR_8 != 5)
  ;
 FUNC_1(VAR_9, VAR_11, VAR_12);
 if (FUNC_10(VAR_9 + 1, &VAR_11, ((void*)0), ((void*)0), &VAR_12) < 0)
  FUNC_3(1, "select");
 FUNC_9(VAR_10++, "5", 1, FUNC_0(VAR_9, &VAR_11));
 FUNC_6(VAR_7, VAR_5);

 FUNC_11(1);
 while (VAR_8 != 6)
  ;





 FUNC_1(VAR_9, VAR_11, VAR_12);
 if (FUNC_10(VAR_9 + 1, &VAR_11, ((void*)0), ((void*)0), &VAR_12) < 0)
  FUNC_3(1, "select");
 FUNC_9(VAR_10++, "6", 1, FUNC_0(VAR_9, &VAR_11));
 if (FUNC_8(VAR_9, VAR_15, sizeof VAR_15) != 1)
  FUNC_3(1, "read");
 FUNC_1(VAR_9, VAR_11, VAR_12);
 if (FUNC_10(VAR_9 + 1, &VAR_11, ((void*)0), ((void*)0), &VAR_12) < 0)
  FUNC_3(1, "select");
 FUNC_9(VAR_10++, "6a", 1, FUNC_0(VAR_9, &VAR_11));
 if (VAR_6 == VAR_2) {
  VAR_14 = FUNC_7(VAR_1, VAR_4 | VAR_3);
  if (VAR_14 < 0)
   FUNC_3(1, "open for read");
  VAR_13 = VAR_9;
  VAR_9 = VAR_14;
  FUNC_1(VAR_9, VAR_11, VAR_12);
  if (FUNC_10(VAR_9 + 1, &VAR_11, ((void*)0), ((void*)0), &VAR_12) < 0)
   FUNC_3(1, "select");
  FUNC_9(VAR_10++, "6b", 1, FUNC_0(VAR_9, &VAR_11));
  VAR_9 = VAR_13;
  FUNC_1(VAR_9, VAR_11, VAR_12);
  if (FUNC_10(VAR_9 + 1, &VAR_11, ((void*)0), ((void*)0), &VAR_12) < 0)
   FUNC_3(1, "select");
  FUNC_9(VAR_10++, "6c", 1, FUNC_0(VAR_9, &VAR_11));
  FUNC_2(VAR_14);
  FUNC_1(VAR_9, VAR_11, VAR_12);
  if (FUNC_10(VAR_9 + 1, &VAR_11, ((void*)0), ((void*)0), &VAR_12) < 0)
   FUNC_3(1, "select");
  FUNC_9(VAR_10++, "6d", 1, FUNC_0(VAR_9, &VAR_11));
 }
 FUNC_2(VAR_9);
 FUNC_6(VAR_7, VAR_5);

 FUNC_5(0);
}
