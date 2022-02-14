
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fixed31_32 {int dummy; } ;
struct custom_float_format {int dummy; } ;


 scalar_t__ FUNC_0 (struct fixed31_32,struct custom_float_format const*,int*,int *,int *) ;
 scalar_t__ FUNC_1 (struct custom_float_format const*,int,int ,int ,int *) ;

bool FUNC_2(
 struct fixed31_32 VAR_0,
 const struct custom_float_format *VAR_1,
 uint32_t *VAR_2)
{
 uint32_t VAR_3;
 uint32_t VAR_4;
 bool VAR_5;

 return FUNC_0(
  VAR_0, VAR_1, &VAR_5, &VAR_3, &VAR_4) &&
 FUNC_1(
  VAR_1, VAR_5, VAR_3, VAR_4, VAR_2);
}
