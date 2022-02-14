
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int dummy; } ;
struct elo {int id; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct elo*,unsigned char) ;
 int FUNC_1 (struct elo*,unsigned char) ;
 int FUNC_2 (struct elo*,unsigned char) ;
 struct elo* FUNC_3 (struct serio*) ;

__attribute__((used)) static irqreturn_t FUNC_4(struct serio *VAR_1,
  unsigned char VAR_2, unsigned int VAR_3)
{
 struct elo *VAR_4 = FUNC_3(VAR_1);

 switch (VAR_4->id) {
 case 0:
  FUNC_0(VAR_4, VAR_2);
  break;

 case 1:
 case 2:
  FUNC_2(VAR_4, VAR_2);
  break;

 case 3:
  FUNC_1(VAR_4, VAR_2);
  break;
 }

 return VAR_0;
}
