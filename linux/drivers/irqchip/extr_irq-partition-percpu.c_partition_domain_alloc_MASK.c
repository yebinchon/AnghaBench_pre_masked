
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct partition_desc {TYPE_2__* parts; int chained_desc; int bitmap; } ;
struct irq_fwspec {int dummy; } ;
struct irq_domain {struct partition_desc* host_data; TYPE_1__* ops; } ;
typedef size_t irq_hw_number_t ;
struct TYPE_4__ {int mask; } ;
struct TYPE_3__ {int (* translate ) (struct irq_domain*,struct irq_fwspec*,size_t*,unsigned int*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct irq_domain*,unsigned int,size_t,int *,struct partition_desc*,int ,int *,int *) ;
 int FUNC_3 (int ,int ,struct partition_desc*) ;
 int FUNC_4 (unsigned int,int *) ;
 int FUNC_5 (unsigned int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (size_t,int ) ;
 int FUNC_7 (struct irq_domain*,struct irq_fwspec*,size_t*,unsigned int*) ;

__attribute__((used)) static int FUNC_8(struct irq_domain *VAR_4, unsigned int VAR_5,
      unsigned int VAR_6, void *VAR_7)
{
 int VAR_8;
 irq_hw_number_t VAR_9;
 unsigned int VAR_10;
 struct irq_fwspec *VAR_11 = VAR_7;
 struct partition_desc *VAR_12;

 FUNC_0(VAR_6 != 1);
 VAR_8 = VAR_4->ops->translate(VAR_4, VAR_11, &VAR_9, &VAR_10);
 if (VAR_8)
  return VAR_8;

 VAR_12 = VAR_4->host_data;

 FUNC_6(VAR_9, VAR_12->bitmap);
 FUNC_3(FUNC_1(VAR_12->chained_desc),
      VAR_2, VAR_12);
 FUNC_4(VAR_5, &VAR_12->parts[VAR_9].mask);
 FUNC_2(VAR_4, VAR_5, VAR_9, &VAR_3, VAR_12,
       VAR_1, ((void*)0), ((void*)0));
 FUNC_5(VAR_5, VAR_0);

 return 0;
}
