
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vector {int dummy; } ;
struct dc_context {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct vector*,struct dc_context*,int ,void*,int ) ;
 int FUNC_2 (struct vector*) ;
 struct vector* FUNC_3 (int,int ) ;

struct vector *FUNC_4(
 struct dc_context *VAR_1,
 uint32_t VAR_2,
 void *VAR_3,
 uint32_t VAR_4)
{
 struct vector *VAR_5 = FUNC_3(sizeof(struct vector), VAR_0);

 if (VAR_5 == ((void*)0))
  return ((void*)0);

 if (FUNC_1(
  VAR_5, VAR_1, VAR_2, VAR_3, VAR_4))
  return VAR_5;

 FUNC_0();
 FUNC_2(VAR_5);
 return ((void*)0);
}
