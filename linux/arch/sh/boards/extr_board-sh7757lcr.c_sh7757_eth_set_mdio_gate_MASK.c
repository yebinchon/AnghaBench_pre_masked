
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_3)
{
 if (((unsigned long)VAR_3 & 0x00000fff) < 0x0800)
  FUNC_1(FUNC_0(VAR_0) | VAR_1, VAR_0);
 else
  FUNC_1(FUNC_0(VAR_0) | VAR_2, VAR_0);
}
