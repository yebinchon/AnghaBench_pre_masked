
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inf_cinfo {scalar_t__ typ; } ;
typedef enum inf_types { ____Placeholder_inf_types } inf_types ;


 scalar_t__ VAR_0 ;
 struct inf_cinfo* VAR_1 ;

__attribute__((used)) static const struct inf_cinfo *
FUNC_0(enum inf_types VAR_2)
{
 const struct inf_cinfo *VAR_3 = VAR_1;

 while (VAR_3->typ != VAR_0) {
  if (VAR_3->typ == VAR_2)
   return VAR_3;
  VAR_3++;
 }
 return ((void*)0);
}
