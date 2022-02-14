
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned char const*,int) ;
 int FUNC_3 () ;
 int VAR_0 ;

void
FUNC_4(const unsigned char *VAR_1, int VAR_2)
{
 int VAR_3;
 FUNC_0();
 if (!VAR_0)
  FUNC_3();
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3 += 256) {




  FUNC_2(VAR_1 + VAR_3, VAR_2 - VAR_3);
 }
 FUNC_1();
}
