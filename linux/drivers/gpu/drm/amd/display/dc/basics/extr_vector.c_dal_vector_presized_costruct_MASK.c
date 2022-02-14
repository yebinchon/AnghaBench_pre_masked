
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vector {int capacity; int struct_size; int count; int * container; } ;
struct dc_context {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int * FUNC_1 (int,int,int ) ;
 int FUNC_2 (int *,void*,int) ;

bool FUNC_3(
 struct vector *VAR_1,
 struct dc_context *VAR_2,
 uint32_t VAR_3,
 void *VAR_4,
 uint32_t VAR_5)
{
 uint32_t VAR_6;

 VAR_1->container = ((void*)0);

 if (!VAR_5 || !VAR_3) {

  FUNC_0();
  return 0;
 }

 VAR_1->container = FUNC_1(VAR_3, VAR_5, VAR_0);

 if (VAR_1->container == ((void*)0))
  return 0;




 if (((void*)0) != VAR_4) {
  for (VAR_6 = 0; VAR_6 < VAR_3; ++VAR_6)
   FUNC_2(
    VAR_1->container + VAR_6 * VAR_5,
    VAR_4,
    VAR_5);
 }

 VAR_1->capacity = VAR_3;
 VAR_1->struct_size = VAR_5;
 VAR_1->count = VAR_3;
 return 1;
}
