
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ,int,int) ;

__attribute__((used)) static void
FUNC_4(int VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;

 FUNC_2();
 VAR_3 = FUNC_0();
 if (VAR_3 != VAR_1)
  FUNC_3("%s: before inflight: %d, after inflight: %d",
      VAR_0, VAR_1, VAR_3);

 VAR_4 = FUNC_1();
 if (VAR_4 != VAR_2)
  FUNC_3("%s: before: %d, after: %d", VAR_0, VAR_2,
      VAR_4);
}
