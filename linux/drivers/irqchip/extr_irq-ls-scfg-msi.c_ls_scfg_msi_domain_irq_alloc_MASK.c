
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ls_scfg_msi {int irqs_num; int msiir_addr; int lock; int used; } ;
struct irq_domain {struct ls_scfg_msi* host_data; } ;
struct TYPE_2__ {int desc; } ;
typedef TYPE_1__ msi_alloc_info_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct irq_domain*,unsigned int,int,int *,struct ls_scfg_msi*,int ,int *,int *) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct irq_domain *VAR_3,
     unsigned int VAR_4,
     unsigned int VAR_5,
     void *VAR_6)
{
 msi_alloc_info_t *VAR_7 = VAR_6;
 struct ls_scfg_msi *VAR_8 = VAR_3->host_data;
 int VAR_9, VAR_10 = 0;

 FUNC_0(VAR_5 != 1);

 FUNC_5(&VAR_8->lock);
 VAR_9 = FUNC_2(VAR_8->used, VAR_8->irqs_num);
 if (VAR_9 < VAR_8->irqs_num)
  FUNC_1(VAR_9, VAR_8->used);
 else
  VAR_10 = -VAR_0;
 FUNC_6(&VAR_8->lock);

 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_3(VAR_7->desc, VAR_8->msiir_addr);
 if (VAR_10)
  return VAR_10;

 FUNC_4(VAR_3, VAR_4, VAR_9,
       &VAR_2, VAR_8,
       VAR_1, ((void*)0), ((void*)0));

 return 0;
}
