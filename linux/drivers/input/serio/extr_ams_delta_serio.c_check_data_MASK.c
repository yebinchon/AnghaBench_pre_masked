
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int,...) ;

__attribute__((used)) static int FUNC_1(struct serio *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5 = 0;


 if (!(VAR_3 & 0x400)) {
  FUNC_0(&VAR_2->dev, "invalid stop bit, data=0x%X\n", VAR_3);
  return VAR_0;
 }

 for (VAR_4 = 1; VAR_4 < 10; VAR_4++) {
  if (VAR_3 & (1 << VAR_4))
   VAR_5++;
 }

 if (!(VAR_5 & 0x01)) {
  FUNC_0(&VAR_2->dev,
    "parity check failed, data=0x%X parity=0x%X\n", VAR_3,
    VAR_5);
  return VAR_1;
 }
 return 0;
}
