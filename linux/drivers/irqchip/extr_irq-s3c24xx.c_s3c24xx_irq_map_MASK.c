
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c_irq_intc {int domain; struct s3c_irq_data* irqs; int reg_pending; struct s3c_irq_intc* parent; } ;
struct s3c_irq_data {size_t offset; int type; int parent_irq; unsigned long sub_bits; struct s3c_irq_intc* sub_intc; struct s3c_irq_intc* intc; } ;
struct irq_domain {struct s3c_irq_intc* host_data; } ;
typedef size_t irq_hw_number_t ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int ,size_t) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (unsigned int,int *,int ) ;
 int FUNC_3 (unsigned int,struct s3c_irq_data*) ;
 int FUNC_4 (char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct irq_domain *VAR_9, unsigned int VAR_10,
       irq_hw_number_t VAR_11)
{
 struct s3c_irq_intc *VAR_12 = VAR_9->host_data;
 struct s3c_irq_data *VAR_13 = &VAR_12->irqs[VAR_11];
 struct s3c_irq_intc *VAR_14;
 struct s3c_irq_data *VAR_15;
 unsigned int VAR_16;


 VAR_13->intc = VAR_12;
 VAR_13->offset = VAR_11;

 VAR_14 = VAR_12->parent;


 switch (VAR_13->type) {
 case 128:
  return 0;
 case 130:



  if (VAR_14 && (!FUNC_5() || VAR_11 >= 4))
   FUNC_2(VAR_10, &VAR_8,
       VAR_2);
  else
   FUNC_2(VAR_10, &VAR_6,
       VAR_2);
  break;
 case 131:
  if (VAR_14 || VAR_12->reg_pending == VAR_1)
   FUNC_2(VAR_10, &VAR_7,
       VAR_2);
  else
   FUNC_2(VAR_10, &VAR_4,
       VAR_2);
  break;
 case 129:
  if (VAR_14)
   FUNC_2(VAR_10, &VAR_7,
       VAR_3);
  else
   FUNC_2(VAR_10, &VAR_4,
       VAR_3);
  break;
 default:
  FUNC_4("irq-s3c24xx: unsupported irqtype %d\n", VAR_13->type);
  return -VAR_0;
 }

 FUNC_3(VAR_10, VAR_13);

 if (VAR_14 && VAR_13->type != 128) {
  if (VAR_13->parent_irq > 31) {
   FUNC_4("irq-s3c24xx: parent irq %lu is out of range\n",
          VAR_13->parent_irq);
   return -VAR_0;
  }

  VAR_15 = &VAR_14->irqs[VAR_13->parent_irq];
  VAR_15->sub_intc = VAR_12;
  VAR_15->sub_bits |= (1UL << VAR_11);


  VAR_16 = FUNC_0(VAR_14->domain,
      VAR_13->parent_irq);
  if (!VAR_16) {
   FUNC_4("irq-s3c24xx: could not find mapping for parent irq %lu\n",
          VAR_13->parent_irq);
   return -VAR_0;
  }
  FUNC_1(VAR_16, VAR_5);
 }

 return 0;
}
