
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar_context {int dummy; } ;


 void* FUNC_0 (struct ar_context*,void*) ;

__attribute__((used)) static void *FUNC_1(struct ar_context *VAR_0, void *VAR_1, void *VAR_2)
{
 void *VAR_3;

 while (VAR_1 < VAR_2) {
  VAR_3 = FUNC_0(VAR_0, VAR_1);
  if (!VAR_3)
   return VAR_1;
  VAR_1 = VAR_3;
 }

 return VAR_1;
}
