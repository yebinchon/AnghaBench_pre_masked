
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;

__attribute__((used)) static inline int FUNC_0(void)
{
 int VAR_5;

 for (VAR_5 = VAR_1; VAR_5 < VAR_3; VAR_5++)
  if (VAR_4[VAR_5] == VAR_2)
   return VAR_5;
 return -VAR_0;
}
