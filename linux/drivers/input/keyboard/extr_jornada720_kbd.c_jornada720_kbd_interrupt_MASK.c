
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct platform_device {int dev; } ;
struct jornadakbd {int * keymap; struct input_dev* input; } ;
struct input_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct input_dev*,int ,int ,int) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 () ;
 struct jornadakbd* FUNC_8 (struct platform_device*) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_5, void *VAR_6)
{
 struct platform_device *VAR_7 = VAR_6;
 struct jornadakbd *VAR_8 = FUNC_8(VAR_7);
 struct input_dev *VAR_9 = VAR_8->input;
 u8 VAR_10, VAR_11, VAR_12;


 FUNC_7();

 if (FUNC_6(VAR_1) != VAR_4) {
  FUNC_0(&VAR_7->dev,
   "GetKeycode command failed with ETIMEDOUT, flushed bus\n");
 } else {

  VAR_10 = FUNC_4(VAR_4);


  while (VAR_10--) {

   VAR_11 = FUNC_4(VAR_4);
   VAR_12 = VAR_11 & 0x7f;

   FUNC_1(VAR_9, VAR_0, VAR_3, VAR_12);
   FUNC_2(VAR_9, VAR_8->keymap[VAR_12],
      !(VAR_11 & 0x80));
   FUNC_3(VAR_9);
  }
 }


 FUNC_5();

 return VAR_2;
}
