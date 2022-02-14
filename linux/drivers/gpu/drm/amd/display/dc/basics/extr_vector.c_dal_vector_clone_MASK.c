
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct vector {int capacity; int struct_size; int container; int ctx; } ;


 int FUNC_0 () ;
 struct vector* FUNC_1 (int ,int,int) ;
 scalar_t__ FUNC_2 (struct vector const*) ;
 struct vector* FUNC_3 (int ,scalar_t__,int *,int) ;
 int FUNC_4 (int ,int ,int) ;

struct vector *FUNC_5(
 const struct vector *VAR_0)
{
 struct vector *VAR_1;
 uint32_t VAR_2;


 VAR_2 = FUNC_2(VAR_0);

 if (VAR_2 == 0)


  VAR_1 = FUNC_1(
   VAR_0->ctx,
   VAR_0->capacity,
   VAR_0->struct_size);
 else





  VAR_1 = FUNC_3(VAR_0->ctx, VAR_2,
   ((void*)0),
   VAR_0->struct_size);

 if (((void*)0) == VAR_1) {
  FUNC_0();
  return ((void*)0);
 }


 FUNC_4(VAR_1->container, VAR_0->container,
   VAR_1->struct_size * VAR_1->capacity);

 return VAR_1;
}
