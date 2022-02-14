
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (long) ;

__attribute__((used)) static void
FUNC_2(char *VAR_0, int VAR_1, long VAR_2)
{
 char VAR_3;
 int VAR_4;

 FUNC_1(VAR_2);
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_3 = FUNC_0() & 0xff;
  VAR_0[VAR_4] = VAR_3;
 }
}
