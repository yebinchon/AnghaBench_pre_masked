
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {scalar_t__ irq; } ;
typedef int * irq_flow_handler_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;






 int VAR_9 ;
 int FUNC_0 (scalar_t__,int ,unsigned long) ;
 int * VAR_10 ;
 int * VAR_11 ;
 int FUNC_1 (struct irq_data*,int *,int *,unsigned char*) ;

__attribute__((used)) static int FUNC_2(struct irq_data *VAR_12, unsigned int VAR_13)
{
 unsigned long VAR_14;
 unsigned char *VAR_15 = ((void*)0);
 irq_flow_handler_t VAR_16 = ((void*)0);

 switch (VAR_13) {
 case 130:
  VAR_14 = VAR_5;
  VAR_15 = "high";
  VAR_16 = VAR_11;
  break;
 case 129:
  VAR_14 = VAR_6;
  VAR_15 = "low";
  VAR_16 = VAR_11;
  break;
 case 131:
  VAR_14 = VAR_4;
  VAR_15 = "posedge";
  VAR_16 = VAR_10;
  break;
 case 132:
  VAR_14 = VAR_3;
  VAR_15 = "negedge";
  VAR_16 = VAR_10;
  break;
 case 133:
  VAR_14 = VAR_2;
  VAR_15 = "bothedge";
  VAR_16 = VAR_10;
  break;
 case 128:
  VAR_14 = VAR_8;
  VAR_15 = "disabled";
  VAR_16 = VAR_11;
  break;
 default:
  return -VAR_1;
 }

 FUNC_1(VAR_12, &VAR_9, VAR_16, VAR_15);

 FUNC_0(VAR_12->irq - VAR_0, VAR_7, VAR_14);

 return 0;
}
