
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
typedef int irq_handler_t ;


 scalar_t__ FUNC_0 (int,char*,int,...) ;
 int FUNC_1 (struct device_node*,int) ;
 int FUNC_2 (int,int ,int ,char const*,int *) ;

void FUNC_3(struct device_node *VAR_0,
    irq_handler_t VAR_1,
    const char *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
  VAR_4 = FUNC_1(VAR_0, VAR_3);
  if (VAR_4 < 0)
   return;
  if (FUNC_0(!VAR_4, "event-sources: Unable to allocate "
           "interrupt number for %pOF\n", VAR_0))
   continue;

  VAR_5 = FUNC_2(VAR_4, VAR_1, 0, VAR_2, ((void*)0));
  if (FUNC_0(VAR_5, "event-sources: Unable to request interrupt %d for %pOF\n",
      VAR_4, VAR_0))
   return;
 }
}
