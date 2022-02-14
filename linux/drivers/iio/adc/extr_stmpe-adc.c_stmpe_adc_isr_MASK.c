
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct stmpe_adc {scalar_t__ channel; int completion; scalar_t__ value; int stmpe; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int,int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_6, void *VAR_7)
{
 struct stmpe_adc *VAR_8 = (struct stmpe_adc *)VAR_7;
 u16 VAR_9;

 if (VAR_8->channel <= VAR_2) {
  int VAR_10;

  VAR_10 = FUNC_5(VAR_8->stmpe, VAR_3);


  if (!(VAR_10 & FUNC_0(VAR_8->channel)))
   return VAR_1;


  FUNC_4(VAR_8->stmpe,
   FUNC_1(VAR_8->channel), 2, (u8 *) &VAR_9);

  FUNC_6(VAR_8->stmpe, VAR_3, VAR_10);
 } else if (VAR_8->channel == VAR_5) {

  FUNC_4(VAR_8->stmpe, VAR_4, 2,
    (u8 *) &VAR_9);
 } else {
  return VAR_1;
 }

 VAR_8->value = (u32) FUNC_2(VAR_9);
 FUNC_3(&VAR_8->completion);

 return VAR_0;
}
