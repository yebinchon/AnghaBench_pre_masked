
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct recent_command {struct recent_command* next; struct recent_command* prev; int buf; } ;
struct TYPE_3__ {char* buf; } ;


 int VAR_0 ;
 struct recent_command VAR_1 ;
 struct recent_command* VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 struct recent_command* VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,char*) ;
 int VAR_6 ;
 int FUNC_3 (TYPE_1__*,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(void)
{
 static int VAR_8 = 0;

 if (VAR_8) {
  VAR_7 = 0;
  return VAR_0;
 }

 for (;;) {
  if (VAR_7) {
   VAR_7 = 0;
  } else {
   struct recent_command *VAR_9;

   VAR_8 = FUNC_3(&VAR_3, VAR_6);
   if (VAR_8)
    return VAR_0;

   if (!VAR_5
    && !FUNC_2(VAR_3.buf, "feature ")
    && !FUNC_2(VAR_3.buf, "option ")) {
    FUNC_1();
   }

   VAR_9 = VAR_4;
   if (VAR_9)
    VAR_4 = VAR_9->next;
   else {
    VAR_9 = VAR_1.next;
    VAR_1.next = VAR_9->next;
    VAR_1.next->prev = &VAR_1;
    FUNC_0(VAR_9->buf);
   }

   VAR_9->buf = FUNC_4(VAR_3.buf);
   VAR_9->prev = VAR_2;
   VAR_9->next = VAR_1.prev;
   VAR_9->prev->next = VAR_9;
   VAR_2 = VAR_9;
  }
  if (VAR_3.buf[0] == '#')
   continue;
  return 0;
 }
}
