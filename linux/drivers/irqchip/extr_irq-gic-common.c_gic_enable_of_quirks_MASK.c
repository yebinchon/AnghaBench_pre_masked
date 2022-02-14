
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gic_quirk {scalar_t__ desc; scalar_t__ (* init ) (void*) ;int compatible; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct device_node const*,int ) ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ FUNC_2 (void*) ;

void FUNC_3(const struct device_node *VAR_0,
     const struct gic_quirk *VAR_1, void *VAR_2)
{
 for (; VAR_1->desc; VAR_1++) {
  if (!FUNC_0(VAR_0, VAR_1->compatible))
   continue;
  if (VAR_1->init(VAR_2))
   FUNC_1("GIC: enabling workaround for %s\n",
    VAR_1->desc);
 }
}
