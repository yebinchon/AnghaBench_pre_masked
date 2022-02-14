
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 () ;
 int VAR_8 ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (size_t) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int,int *,int ) ;

__attribute__((used)) static void
FUNC_13(size_t VAR_9)
{
 int VAR_10, VAR_11;

 FUNC_7(VAR_4, VAR_8);
 FUNC_1((VAR_11 = FUNC_5(VAR_0, VAR_1, 0644)) != -1);
 FUNC_3(VAR_11);
 FUNC_1((VAR_11 = FUNC_5(VAR_3, VAR_1, 0644)) != -1);
 FUNC_3(VAR_11);
 VAR_6 = 0;
 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++)
  if (FUNC_4() == 0)
   FUNC_6(VAR_9 / VAR_2);
 while (VAR_6 != VAR_2) {
  FUNC_10(1000);
  FUNC_2(0, FUNC_12(-1, ((void*)0), VAR_5),
   "a child exited unexpectedly");
 }
 FUNC_9(VAR_3);
 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++)
  FUNC_0(FUNC_11(((void*)0)) > 0, "wait: %s", FUNC_8(VAR_7));
}
