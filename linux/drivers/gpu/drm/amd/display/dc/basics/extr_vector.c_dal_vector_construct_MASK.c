
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct vector {struct dc_context* ctx; scalar_t__ count; void* struct_size; void* capacity; int * container; } ;
struct dc_context {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int * FUNC_1 (void*,void*,int ) ;

bool FUNC_2(
 struct vector *VAR_1,
 struct dc_context *VAR_2,
 uint32_t VAR_3,
 uint32_t VAR_4)
{
 VAR_1->container = ((void*)0);

 if (!VAR_4 || !VAR_3) {

  FUNC_0();
  return 0;
 }

 VAR_1->container = FUNC_1(VAR_3, VAR_4, VAR_0);
 if (VAR_1->container == ((void*)0))
  return 0;
 VAR_1->capacity = VAR_3;
 VAR_1->struct_size = VAR_4;
 VAR_1->count = 0;
 VAR_1->ctx = VAR_2;
 return 1;
}
