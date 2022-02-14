
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int host_data; } ;
struct irq_chip {int dummy; } ;
typedef int irq_hw_number_t ;


 int VAR_0 ;
 int VAR_1 ;






 struct irq_chip VAR_2 ;
 struct irq_chip VAR_3 ;
 struct irq_chip VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct irq_domain*,unsigned int,int ,struct irq_chip*,int ,int ,int *,int *) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int FUNC_4(struct irq_domain *VAR_6, unsigned int VAR_7,
         irq_hw_number_t VAR_8)
{
 struct irq_chip *VAR_9;

 switch (VAR_8) {
 case 131:
 case 132:
 case 133:
 case 130:
  VAR_9 = &VAR_4;
  break;
 case 129:
  VAR_9 = &VAR_2;
  break;
 case 128:
  VAR_9 = &VAR_3;
  break;
 default:
  FUNC_3("Unexpected hw irq: %lu\n", VAR_8);
  return -VAR_0;
 }

 FUNC_1(VAR_7);
 FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9, VAR_6->host_data,
       VAR_5, ((void*)0), ((void*)0));
 FUNC_2(VAR_7, VAR_1);

 return 0;
}
