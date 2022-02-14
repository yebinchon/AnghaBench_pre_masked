
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ps2dev {TYPE_1__* serio; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ps2dev*,int*,int ) ;
 int FUNC_1 (int *,char*,int,int) ;
 int FUNC_2 (struct ps2dev*) ;
 int FUNC_3 (struct ps2dev*) ;

int FUNC_4(struct ps2dev *VAR_2, u8 VAR_3)
{
 int VAR_4;
 int VAR_5;

 FUNC_2(VAR_2);

 VAR_5 = FUNC_0(VAR_2, ((void*)0), VAR_1);
 if (VAR_5)
  goto out;

 for (VAR_4 = 6; VAR_4 >= 0; VAR_4 -= 2) {
  u8 VAR_6 = (VAR_3 >> VAR_4) & 3;
  VAR_5 = FUNC_0(VAR_2, &VAR_6, VAR_0);
  if (VAR_5)
   break;
 }

out:
 FUNC_1(&VAR_2->serio->dev, "%02x - %d\n", VAR_3, VAR_5);
 FUNC_3(VAR_2);
 return VAR_5;
}
