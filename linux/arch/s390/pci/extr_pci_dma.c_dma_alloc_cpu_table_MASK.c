
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long* FUNC_0 (int ,int ) ;

unsigned long *FUNC_1(void)
{
 unsigned long *VAR_4, *VAR_5;

 VAR_4 = FUNC_0(VAR_3, VAR_0);
 if (!VAR_4)
  return ((void*)0);

 for (VAR_5 = VAR_4; VAR_5 < VAR_4 + VAR_1; VAR_5++)
  *VAR_5 = VAR_2;
 return VAR_4;
}
