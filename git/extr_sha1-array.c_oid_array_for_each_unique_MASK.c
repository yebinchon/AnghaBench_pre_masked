
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oid_array {int nr; scalar_t__ oid; int sorted; } ;
typedef int (* for_each_oid_fn ) (scalar_t__,void*) ;


 int FUNC_0 (struct oid_array*) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;

int FUNC_2(struct oid_array *VAR_0,
         for_each_oid_fn VAR_1,
         void *VAR_2)
{
 int VAR_3;

 if (!VAR_0->sorted)
  FUNC_0(VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_0->nr; VAR_3++) {
  int VAR_4;
  if (VAR_3 > 0 && FUNC_1(VAR_0->oid + VAR_3, VAR_0->oid + VAR_3 - 1))
   continue;
  VAR_4 = VAR_1(VAR_0->oid + VAR_3, VAR_2);
  if (VAR_4)
   return VAR_4;
 }
 return 0;
}
