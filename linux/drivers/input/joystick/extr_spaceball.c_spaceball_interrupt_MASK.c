
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spaceball {int escape; unsigned char* data; int idx; } ;
struct serio {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct spaceball* FUNC_0 (struct serio*) ;
 int FUNC_1 (struct spaceball*) ;

__attribute__((used)) static irqreturn_t FUNC_2(struct serio *VAR_2,
  unsigned char VAR_3, unsigned int VAR_4)
{
 struct spaceball *VAR_5 = FUNC_0(VAR_2);

 switch (VAR_3) {
  case 0xd:
   FUNC_1(VAR_5);
   VAR_5->idx = 0;
   VAR_5->escape = 0;
   break;
  case '^':
   if (!VAR_5->escape) {
    VAR_5->escape = 1;
    break;
   }
   VAR_5->escape = 0;

  case 'M':
  case 'Q':
  case 'S':
   if (VAR_5->escape) {
    VAR_5->escape = 0;
    VAR_3 &= 0x1f;
   }

  default:
   if (VAR_5->escape)
    VAR_5->escape = 0;
   if (VAR_5->idx < VAR_1)
    VAR_5->data[VAR_5->idx++] = VAR_3;
   break;
 }
 return VAR_0;
}
