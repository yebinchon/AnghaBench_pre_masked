
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcmstb_i2c_dev {scalar_t__ irq; int done; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct brcmstb_i2c_dev*,int ) ;
 int FUNC_1 (struct brcmstb_i2c_dev*,int ) ;
 int FUNC_2 () ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct brcmstb_i2c_dev *VAR_6)
{
 int VAR_7 = 0;
 unsigned long VAR_8 = FUNC_3(VAR_2);

 if (VAR_6->irq >= 0) {
  if (!FUNC_5(&VAR_6->done, VAR_8))
   VAR_7 = -VAR_1;
 } else {

  u32 VAR_9;
  unsigned long VAR_10 = VAR_5 + VAR_8;

  do {
   VAR_9 = FUNC_1(VAR_6, VAR_4) &
    VAR_0;
   if (FUNC_4(VAR_5, VAR_10)) {
    VAR_7 = -VAR_1;
    break;
   }
   FUNC_2();
  } while (!VAR_9);
 }

 if (VAR_6->irq < 0 || VAR_7 == -VAR_1)
  FUNC_0(VAR_6, VAR_3);

 return VAR_7;
}
