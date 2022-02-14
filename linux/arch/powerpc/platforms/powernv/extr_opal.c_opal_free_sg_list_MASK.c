
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct opal_sg_list {int next; } ;


 struct opal_sg_list* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct opal_sg_list*) ;

void FUNC_3(struct opal_sg_list *VAR_0)
{
 while (VAR_0) {
  uint64_t VAR_1 = FUNC_1(VAR_0->next);

  FUNC_2(VAR_0);

  if (VAR_1)
   VAR_0 = FUNC_0(VAR_1);
  else
   VAR_0 = ((void*)0);
 }
}
