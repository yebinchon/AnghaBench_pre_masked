
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct irq_domain {int dummy; } ;
struct irq_alloc_info {int dummy; } ;
struct TYPE_3__ {int type; } ;
struct TYPE_4__ {TYPE_1__ irqdomain_cfg; } ;





 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct irq_domain*,int,int,int ,struct irq_alloc_info*,int,int *) ;
 int FUNC_2 (struct irq_alloc_info*) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct irq_domain *VAR_2, int VAR_3, u32 VAR_4,
     struct irq_alloc_info *VAR_5)
{
 bool VAR_6 = 0;
 int VAR_7 = -1;
 int VAR_8 = VAR_1[VAR_3].irqdomain_cfg.type;

 switch (VAR_8) {
 case 129:




  if (!VAR_0 || VAR_4 >= FUNC_4())
   VAR_7 = VAR_4;
  VAR_6 = FUNC_3(VAR_7);
  break;
 case 128:
  VAR_7 = VAR_4;
  break;
 case 130:
  break;
 default:
  FUNC_0(1, "ioapic: unknown irqdomain type %d\n", VAR_8);
  return -1;
 }

 return FUNC_1(VAR_2, VAR_7, 1,
           FUNC_2(VAR_5),
           VAR_5, VAR_6, ((void*)0));
}
