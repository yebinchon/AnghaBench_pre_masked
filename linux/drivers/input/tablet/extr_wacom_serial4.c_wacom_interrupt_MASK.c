
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wacom {int idx; int* data; TYPE_1__* dev; } ;
struct serio {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 struct wacom* FUNC_1 (struct serio*) ;
 int FUNC_2 (struct wacom*) ;
 int FUNC_3 (struct wacom*) ;
 int FUNC_4 (struct wacom*) ;

__attribute__((used)) static irqreturn_t FUNC_5(struct serio *VAR_3, unsigned char VAR_4,
       unsigned int VAR_5)
{
 struct wacom *VAR_6 = FUNC_1(VAR_3);

 if (VAR_4 & 0x80)
  VAR_6->idx = 0;
 if (VAR_4 == '\r' && !(VAR_6->data[0] & 0x80)) {
  FUNC_4(VAR_6);
  FUNC_2(VAR_6);
  return VAR_1;
 }


 if (VAR_6->idx > (VAR_0 - 2)) {
  FUNC_0(&VAR_6->dev->dev,
   "throwing away %d bytes of garbage\n", VAR_6->idx);
  FUNC_2(VAR_6);
 }
 VAR_6->data[VAR_6->idx++] = VAR_4;

 if (VAR_6->idx == VAR_2 && (VAR_6->data[0] & 0x80)) {
  FUNC_3(VAR_6);
  FUNC_2(VAR_6);
 }

 return VAR_1;
}
