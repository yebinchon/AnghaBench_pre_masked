
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int hwirq; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;





 unsigned int VAR_8 ;
 int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (unsigned int,unsigned int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (struct irq_data*,int *,int ,int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct irq_data *VAR_14, unsigned int VAR_15)
{
 unsigned int VAR_16, VAR_17, VAR_18, VAR_19;
 unsigned long VAR_20;

 VAR_16 = FUNC_0(VAR_14->hwirq);

 FUNC_5(&VAR_11, VAR_20);
 switch (VAR_15 & VAR_8) {
 case 131:
  VAR_17 = VAR_4;
  VAR_18 = VAR_6;
  VAR_19 = VAR_1;
  break;
 case 130:
  VAR_17 = VAR_5;
  VAR_18 = VAR_6;
  VAR_19 = VAR_1;
  break;
 case 132:
  VAR_17 = 0;
  VAR_18 = VAR_6;
  VAR_19 = VAR_0;
  break;
 case 128:
  VAR_17 = VAR_3;
  VAR_18 = VAR_7;
  VAR_19 = VAR_1;
  break;
 case 129:
 default:
  VAR_17 = VAR_2;
  VAR_18 = VAR_7;
  VAR_19 = VAR_1;
  break;
 }

 FUNC_2(VAR_16, VAR_17);
 FUNC_3(VAR_16, VAR_18);
 FUNC_1(VAR_16, VAR_19);

 if (VAR_18 == VAR_6)
  FUNC_4(VAR_14, &VAR_9,
       VAR_12, ((void*)0));
 else
  FUNC_4(VAR_14, &VAR_10,
       VAR_13, ((void*)0));
 FUNC_6(&VAR_11, VAR_20);

 return 0;
}
