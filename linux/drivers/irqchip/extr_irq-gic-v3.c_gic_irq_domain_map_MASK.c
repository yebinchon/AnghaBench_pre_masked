
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int host_data; } ;
struct irq_chip {int dummy; } ;
typedef int irq_hw_number_t ;


 int VAR_0 ;


 int VAR_1 ;



 int FUNC_0 (int ) ;
 struct irq_chip VAR_2 ;
 int FUNC_1 () ;
 struct irq_chip VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct irq_domain*,unsigned int,int ,struct irq_chip*,int ,int ,int *,int *) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int,int ) ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int *) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_10(struct irq_domain *VAR_7, unsigned int VAR_8,
         irq_hw_number_t VAR_9)
{
 struct irq_chip *VAR_10 = &VAR_2;

 if (FUNC_9(&VAR_6))
  VAR_10 = &VAR_3;

 switch (FUNC_0(VAR_9)) {
 case 129:
 case 132:
  FUNC_4(VAR_8);
  FUNC_3(VAR_7, VAR_8, VAR_9, VAR_10, VAR_7->host_data,
        VAR_5, ((void*)0), ((void*)0));
  FUNC_6(VAR_8, VAR_1);
  break;

 case 128:
 case 131:
  FUNC_3(VAR_7, VAR_8, VAR_9, VAR_10, VAR_7->host_data,
        VAR_4, ((void*)0), ((void*)0));
  FUNC_5(VAR_8);
  FUNC_8(FUNC_2(FUNC_7(VAR_8)));
  break;

 case 130:
  if (!FUNC_1())
   return -VAR_0;
  FUNC_3(VAR_7, VAR_8, VAR_9, VAR_10, VAR_7->host_data,
        VAR_4, ((void*)0), ((void*)0));
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
