
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct taos_data {int state; unsigned char* buffer; size_t pos; } ;
struct serio {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;

 void* VAR_2 ;


 struct taos_data* FUNC_0 (struct serio*) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;

__attribute__((used)) static irqreturn_t FUNC_2(struct serio *VAR_4, unsigned char VAR_5,
      unsigned int VAR_6)
{
 struct taos_data *VAR_7 = FUNC_0(VAR_4);

 switch (VAR_7->state) {
 case 129:
  VAR_7->buffer[VAR_7->pos++] = VAR_5;
  if (VAR_5 == ':'
   || VAR_7->pos == VAR_1 - 1) {
   VAR_7->buffer[VAR_7->pos] = '\0';
   VAR_7->state = VAR_2;
   FUNC_1(&VAR_3);
  }
  break;
 case 130:
  VAR_7->state = VAR_2;
  FUNC_1(&VAR_3);
  break;
 case 128:
  VAR_7->buffer[VAR_7->pos++] = VAR_5;
  if (VAR_5 == ']') {
   VAR_7->buffer[VAR_7->pos] = '\0';
   VAR_7->state = VAR_2;
   FUNC_1(&VAR_3);
  }
  break;
 }

 return VAR_0;
}
