
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atmel_aes_dev {int flags; int dev; int done_task; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct atmel_aes_dev*,int ) ;
 int FUNC_1 (struct atmel_aes_dev*,int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_6, void *VAR_7)
{
 struct atmel_aes_dev *VAR_8 = VAR_7;
 u32 VAR_9;

 VAR_9 = FUNC_0(VAR_8, VAR_3);
 if (VAR_9 & FUNC_0(VAR_8, VAR_2)) {
  FUNC_1(VAR_8, VAR_1, VAR_9);
  if (VAR_0 & VAR_8->flags)
   FUNC_3(&VAR_8->done_task);
  else
   FUNC_2(VAR_8->dev, "AES interrupt when no active requests.\n");
  return VAR_4;
 }

 return VAR_5;
}
