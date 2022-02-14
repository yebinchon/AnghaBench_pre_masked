
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct komeda_events {int * pipes; int global; } ;
struct komeda_dev {struct d71_dev* chip_data; } ;
struct d71_dev {int * pipes; int gcu_addr; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int,int ) ;

__attribute__((used)) static irqreturn_t
FUNC_4(struct komeda_dev *VAR_15, struct komeda_events *VAR_16)
{
 struct d71_dev *VAR_17 = VAR_15->chip_data;
 u32 VAR_18, VAR_19, VAR_20;

 VAR_19 = FUNC_1(VAR_17->gcu_addr, VAR_7);

 if (VAR_19 & VAR_8) {
  VAR_20 = FUNC_1(VAR_17->gcu_addr, VAR_1);
  if (VAR_20 & VAR_3)
   VAR_16->pipes[0] |= VAR_14;
  if (VAR_20 & VAR_4)
   VAR_16->pipes[1] |= VAR_14;
  if (VAR_20 & VAR_5) {
   VAR_18 = FUNC_1(VAR_17->gcu_addr, VAR_2);
   if (VAR_18 & VAR_6) {
    VAR_16->global |= VAR_13;
    FUNC_3(VAR_17->gcu_addr, VAR_2,
          VAR_6, 0);
   }
  }

  FUNC_2(VAR_17->gcu_addr, VAR_0, VAR_20);
 }

 if (VAR_19 & VAR_9)
  VAR_16->pipes[0] |= FUNC_0(VAR_17->pipes[0], VAR_19);

 if (VAR_19 & VAR_10)
  VAR_16->pipes[1] |= FUNC_0(VAR_17->pipes[1], VAR_19);

 return VAR_19 ? VAR_11 : VAR_12;
}
