
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int led; } ;
struct atkbd {int ps2dev; scalar_t__ extra; struct input_dev* dev; } ;


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
 scalar_t__ FUNC_0 (int *,unsigned char*,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct atkbd *VAR_10)
{
 struct input_dev *VAR_11 = VAR_10->dev;
 unsigned char VAR_12[2];

 VAR_12[0] = (FUNC_1(VAR_7, VAR_11->led) ? 1 : 0)
   | (FUNC_1(VAR_6, VAR_11->led) ? 2 : 0)
   | (FUNC_1(VAR_2, VAR_11->led) ? 4 : 0);
 if (FUNC_0(&VAR_10->ps2dev, VAR_12, VAR_1))
  return -1;

 if (VAR_10->extra) {
  VAR_12[0] = 0;
  VAR_12[1] = (FUNC_1(VAR_3, VAR_11->led) ? 0x01 : 0)
    | (FUNC_1(VAR_8, VAR_11->led) ? 0x02 : 0)
    | (FUNC_1(VAR_9, VAR_11->led) ? 0x04 : 0)
    | (FUNC_1(VAR_4, VAR_11->led) ? 0x10 : 0)
    | (FUNC_1(VAR_5, VAR_11->led) ? 0x20 : 0);
  if (FUNC_0(&VAR_10->ps2dev, VAR_12, VAR_0))
   return -1;
 }

 return 0;
}
