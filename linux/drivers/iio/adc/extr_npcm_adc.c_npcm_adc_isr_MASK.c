
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct npcm_adc {int int_status; int wq; scalar_t__ regs; } ;
struct iio_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct npcm_adc* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 u32 VAR_5;
 struct iio_dev *VAR_6 = VAR_4;
 struct npcm_adc *VAR_7 = FUNC_0(VAR_6);

 VAR_5 = FUNC_1(VAR_7->regs + VAR_1);
 if (VAR_5 & VAR_2) {
  FUNC_2(VAR_5, VAR_7->regs + VAR_1);
  FUNC_3(&VAR_7->wq);
  VAR_7->int_status = 1;
 }

 return VAR_0;
}
