
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {int dummy; } ;
struct TYPE_2__ {int ic_siexr; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 TYPE_1__* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (struct irq_data*,int ) ;
 int FUNC_2 (struct irq_data*,unsigned int) ;
 unsigned int FUNC_3 (struct irq_data*) ;
 int FUNC_4 (int *,unsigned int) ;
 int FUNC_5 (char*,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct irq_data *VAR_16, unsigned int VAR_17)
{
 unsigned int VAR_18 = FUNC_3(VAR_16);
 unsigned int VAR_19, VAR_20, VAR_21;





 if (VAR_18 >= VAR_3 && VAR_18 <= VAR_2) {
  if (VAR_17 == VAR_11)
   VAR_17 = VAR_6;

  if (VAR_17 != VAR_6 &&
      VAR_17 != VAR_7)
   goto err_sense;
 } else {
  if (VAR_17 == VAR_11)
   VAR_17 = VAR_10;

  if (VAR_17 & (VAR_8 | VAR_9))
   goto err_sense;
 }

 FUNC_2(VAR_16, VAR_17);
 if (VAR_17 & VAR_10)
  FUNC_1(VAR_16, VAR_15);
 else
  FUNC_1(VAR_16, VAR_14);




 if (VAR_18 >= VAR_0 && VAR_18 <= VAR_1)
   VAR_21 = (14 - (VAR_18 - VAR_0));
 else
  if (VAR_18 >= VAR_3 && VAR_18 <= VAR_2)
   VAR_21 = (31 - (VAR_2 - VAR_18));
  else
   return (VAR_17 & VAR_10) ?
    VAR_5 : -VAR_4;

 VAR_19 = FUNC_0(&VAR_13->ic_siexr);

 if ((VAR_17 & VAR_12) == VAR_7)
  VAR_20 = VAR_19 | (1 << VAR_21);
 else
  VAR_20 = VAR_19 & ~(1 << VAR_21);

 if (VAR_19 != VAR_20)
  FUNC_4(&VAR_13->ic_siexr, VAR_20);
 return VAR_5;

err_sense:
 FUNC_5("CPM2 PIC: sense type 0x%x not supported\n", VAR_17);
 return -VAR_4;
}
