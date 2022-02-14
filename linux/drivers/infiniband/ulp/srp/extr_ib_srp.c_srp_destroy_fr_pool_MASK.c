
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srp_fr_pool {int size; struct srp_fr_desc* desc; } ;
struct srp_fr_desc {scalar_t__ mr; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct srp_fr_pool*) ;

__attribute__((used)) static void FUNC_2(struct srp_fr_pool *VAR_0)
{
 int VAR_1;
 struct srp_fr_desc *VAR_2;

 if (!VAR_0)
  return;

 for (VAR_1 = 0, VAR_2 = &VAR_0->desc[0]; VAR_1 < VAR_0->size; VAR_1++, VAR_2++) {
  if (VAR_2->mr)
   FUNC_0(VAR_2->mr);
 }
 FUNC_1(VAR_0);
}
