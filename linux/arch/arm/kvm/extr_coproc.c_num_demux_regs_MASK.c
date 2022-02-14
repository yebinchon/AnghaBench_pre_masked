
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;

__attribute__((used)) static unsigned int FUNC_1(void)
{
 unsigned int VAR_1, VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < VAR_0; VAR_1++)
  if (FUNC_0(VAR_1))
   VAR_2++;

 return VAR_2;
}
