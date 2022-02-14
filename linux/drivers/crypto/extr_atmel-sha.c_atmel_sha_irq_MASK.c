
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atmel_sha_dev {int flags; int dev; int done_task; } ;
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
 int FUNC_0 (struct atmel_sha_dev*,int ) ;
 int FUNC_1 (struct atmel_sha_dev*,int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_9, void *VAR_10)
{
 struct atmel_sha_dev *VAR_11 = VAR_10;
 u32 VAR_12;

 VAR_12 = FUNC_0(VAR_11, VAR_8);
 if (VAR_12 & FUNC_0(VAR_11, VAR_7)) {
  FUNC_1(VAR_11, VAR_6, VAR_12);
  if (VAR_2 & VAR_11->flags) {
   VAR_11->flags |= VAR_5;
   if (!(VAR_3 & VAR_11->flags))
    VAR_11->flags |= VAR_4;
   FUNC_3(&VAR_11->done_task);
  } else {
   FUNC_2(VAR_11->dev, "SHA interrupt when no active requests.\n");
  }
  return VAR_0;
 }

 return VAR_1;
}
