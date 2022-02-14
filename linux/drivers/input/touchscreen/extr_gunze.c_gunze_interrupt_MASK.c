
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int dummy; } ;
struct gunze {scalar_t__ idx; unsigned char* data; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gunze*) ;
 struct gunze* FUNC_1 (struct serio*) ;

__attribute__((used)) static irqreturn_t FUNC_2(struct serio *VAR_2,
  unsigned char VAR_3, unsigned int VAR_4)
{
 struct gunze *VAR_5 = FUNC_1(VAR_2);

 if (VAR_3 == '\r') {
  FUNC_0(VAR_5);
  VAR_5->idx = 0;
 } else {
  if (VAR_5->idx < VAR_0)
   VAR_5->data[VAR_5->idx++] = VAR_3;
 }
 return VAR_1;
}
