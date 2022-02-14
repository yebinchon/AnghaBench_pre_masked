
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_hash_dev {int flags; int req; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_5, void *VAR_6)
{
 struct stm32_hash_dev *VAR_7 = VAR_6;

 if (VAR_0 & VAR_7->flags) {
  if (VAR_3 & VAR_7->flags) {
   VAR_7->flags &= ~VAR_3;
   goto finish;
  }
 } else if (VAR_2 & VAR_7->flags) {
  if (VAR_1 & VAR_7->flags) {
   VAR_7->flags &= ~VAR_1;
    goto finish;
  }
 }

 return VAR_4;

finish:

 FUNC_0(VAR_7->req, 0);

 return VAR_4;
}
