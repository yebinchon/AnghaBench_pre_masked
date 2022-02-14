
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int dev; } ;
struct egalax {unsigned char* data; int idx; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct egalax*) ;
 scalar_t__ FUNC_2 (int) ;
 struct egalax* FUNC_3 (struct serio*) ;

__attribute__((used)) static irqreturn_t FUNC_4(struct serio *VAR_3,
        unsigned char VAR_4, unsigned int VAR_5)
{
 struct egalax *VAR_6 = FUNC_3(VAR_3);
 int VAR_7;

 VAR_6->data[VAR_6->idx++] = VAR_4;

 if (FUNC_2(VAR_6->data[0] & VAR_1)) {
  VAR_7 = VAR_6->data[0] & VAR_0 ? 6 : 5;
  if (VAR_7 == VAR_6->idx) {
   FUNC_1(VAR_6);
   VAR_6->idx = 0;
  }
 } else {
  FUNC_0(&VAR_3->dev, "unknown/unsynchronized data: %x\n",
   VAR_6->data[0]);
  VAR_6->idx = 0;
 }

 return VAR_2;
}
