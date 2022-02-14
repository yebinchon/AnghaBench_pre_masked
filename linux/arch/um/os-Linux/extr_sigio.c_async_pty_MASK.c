
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ,...) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(int VAR_6, int VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_0(VAR_6, VAR_0);
 if (VAR_8 < 0)
  return -VAR_5;

 if ((FUNC_0(VAR_6, VAR_1, VAR_8 | VAR_4 | VAR_3) < 0) ||
     (FUNC_0(VAR_6, VAR_2, FUNC_1()) < 0))
  return -VAR_5;

 if ((FUNC_0(VAR_7, VAR_1, VAR_8 | VAR_4) < 0))
  return -VAR_5;

 return 0;
}
