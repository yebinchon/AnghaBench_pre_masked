
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_domain {int dummy; } ;
struct TYPE_2__ {int affinity; int node; } ;
struct irq_desc {TYPE_1__ irq_common_data; } ;
struct irq_alloc_info {int nasid; } ;
struct hub_irq_data {int dummy; } ;
struct hub_data {int h_cpus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *) ;
 int VAR_4 ;
 struct hub_data* FUNC_4 (int ) ;
 int VAR_5 ;
 int FUNC_5 (struct irq_domain*,unsigned int,int,int *,struct hub_irq_data*,int ,int *,int *) ;
 struct irq_desc* FUNC_6 (unsigned int) ;
 int FUNC_7 (struct hub_irq_data*) ;
 struct hub_irq_data* FUNC_8 (int,int ) ;
 int FUNC_9 (struct hub_irq_data*,int *) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct irq_domain *VAR_6, unsigned int VAR_7,
       unsigned int VAR_8, void *VAR_9)
{
 struct irq_alloc_info *VAR_10 = VAR_9;
 struct hub_irq_data *VAR_11;
 struct hub_data *VAR_12;
 struct irq_desc *VAR_13;
 int VAR_14;

 if (VAR_8 > 1 || !VAR_10)
  return -VAR_1;

 VAR_11 = FUNC_8(sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_2;

 VAR_14 = FUNC_2();
 if (FUNC_10(VAR_14 < 0)) {
  FUNC_7(VAR_11);
  return -VAR_0;
 }
 FUNC_5(VAR_6, VAR_7, VAR_14, &VAR_5, VAR_11,
       VAR_4, ((void*)0), ((void*)0));


 VAR_12 = FUNC_4(FUNC_0(VAR_10->nasid));
 FUNC_9(VAR_11, &VAR_12->h_cpus);


 FUNC_1(VAR_10->nasid, VAR_14);

 VAR_13 = FUNC_6(VAR_7);
 VAR_13->irq_common_data.node = VAR_10->nasid;
 FUNC_3(VAR_13->irq_common_data.affinity, &VAR_12->h_cpus);

 return 0;
}
