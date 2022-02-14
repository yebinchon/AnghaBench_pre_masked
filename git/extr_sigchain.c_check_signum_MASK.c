
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(int VAR_1)
{
 if (VAR_1 < 1 || VAR_1 >= VAR_0)
  FUNC_0("signal out of range: %d", VAR_1);
}
