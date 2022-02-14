
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_value {int value; int code; int type; } ;
struct input_handler {int (* event ) (struct input_handle*,int ,int ,int ) ;int (* events ) (struct input_handle*,struct input_value*,unsigned int) ;scalar_t__ (* filter ) (struct input_handle*,int ,int ,int ) ;} ;
struct input_handle {struct input_handler* handler; } ;


 scalar_t__ FUNC_0 (struct input_handle*,int ,int ,int ) ;
 int FUNC_1 (struct input_handle*,struct input_value*,unsigned int) ;
 int FUNC_2 (struct input_handle*,int ,int ,int ) ;

__attribute__((used)) static unsigned int FUNC_3(struct input_handle *VAR_0,
   struct input_value *VAR_1, unsigned int VAR_2)
{
 struct input_handler *VAR_3 = VAR_0->handler;
 struct input_value *VAR_4 = VAR_1;
 struct input_value *VAR_5;

 if (VAR_3->filter) {
  for (VAR_5 = VAR_1; VAR_5 != VAR_1 + VAR_2; VAR_5++) {
   if (VAR_3->filter(VAR_0, VAR_5->type, VAR_5->code, VAR_5->value))
    continue;
   if (VAR_4 != VAR_5)
    *VAR_4 = *VAR_5;
   VAR_4++;
  }
  VAR_2 = VAR_4 - VAR_1;
 }

 if (!VAR_2)
  return 0;

 if (VAR_3->events)
  VAR_3->events(VAR_0, VAR_1, VAR_2);
 else if (VAR_3->event)
  for (VAR_5 = VAR_1; VAR_5 != VAR_1 + VAR_2; VAR_5++)
   VAR_3->event(VAR_0, VAR_5->type, VAR_5->code, VAR_5->value);

 return VAR_2;
}
