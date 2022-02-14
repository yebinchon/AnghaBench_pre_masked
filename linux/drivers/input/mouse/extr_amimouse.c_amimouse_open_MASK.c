
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_dev {int dev; } ;
struct TYPE_2__ {unsigned short joy0dat; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int ,int ,int ,char*,struct input_dev*) ;

__attribute__((used)) static int FUNC_2(struct input_dev *VAR_5)
{
 unsigned short VAR_6;
 int VAR_7;

 VAR_6 = VAR_1.joy0dat;

 VAR_3 = VAR_6 & 0xff;
 VAR_4 = VAR_6 >> 8;

 VAR_7 = FUNC_1(VAR_0, VAR_2, 0, "amimouse",
       VAR_5);
 if (VAR_7)
  FUNC_0(&VAR_5->dev, "Can't allocate irq %d\n", VAR_0);

 return VAR_7;
}
