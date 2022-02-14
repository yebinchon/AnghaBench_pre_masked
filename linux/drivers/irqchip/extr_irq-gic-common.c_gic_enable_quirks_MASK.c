
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gic_quirk {int iidr; int mask; scalar_t__ desc; scalar_t__ (* init ) (void*) ;scalar_t__ compatible; } ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ FUNC_1 (void*) ;

void FUNC_2(u32 VAR_0, const struct gic_quirk *VAR_1,
  void *VAR_2)
{
 for (; VAR_1->desc; VAR_1++) {
  if (VAR_1->compatible)
   continue;
  if (VAR_1->iidr != (VAR_1->mask & VAR_0))
   continue;
  if (VAR_1->init(VAR_2))
   FUNC_0("GIC: enabling workaround for %s\n",
    VAR_1->desc);
 }
}
