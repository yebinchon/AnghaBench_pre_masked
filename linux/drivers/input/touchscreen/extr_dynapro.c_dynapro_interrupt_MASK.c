
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int dev; } ;
struct dynapro {unsigned char* data; size_t idx; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct dynapro*) ;
 struct dynapro* FUNC_2 (struct serio*) ;

__attribute__((used)) static irqreturn_t FUNC_3(struct serio *VAR_2,
  unsigned char VAR_3, unsigned int VAR_4)
{
 struct dynapro *VAR_5 = FUNC_2(VAR_2);

 VAR_5->data[VAR_5->idx] = VAR_3;

 if (VAR_0 & VAR_5->data[0])
  FUNC_1(VAR_5);
 else
  FUNC_0(&VAR_2->dev, "unknown/unsynchronized data: %x\n",
   VAR_5->data[0]);

 return VAR_1;
}
