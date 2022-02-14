
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct query_state {int kevent_watermark; int (* read_func ) (struct query_state*,int*,int) ;int * process_func; } ;
typedef int ssize_t ;




 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int (*) (struct query_state*)) ;
 int FUNC_2 (int (*) (struct query_state*)) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_3 (struct query_state*,int*,int) ;

__attribute__((used)) static int
FUNC_4(struct query_state *VAR_2)
{
 ssize_t VAR_3;
 int VAR_4;

 FUNC_1(FUNC_4);
 if (VAR_2->kevent_watermark == 0) {
  VAR_2->kevent_watermark = sizeof(int);
 } else {
  VAR_3 = VAR_2->read_func(VAR_2, &VAR_4, sizeof(int));
  if (VAR_3 != sizeof(int)) {
   FUNC_0("on_mp_read_session_mapper",
    "read failed");
   FUNC_2(FUNC_4);
   return (-1);
  }

  switch (VAR_4) {
  case 128:
   VAR_2->kevent_watermark = 0;
   VAR_2->process_func =
    VAR_1;
   break;
  case 129:
   VAR_2->kevent_watermark = 0;
   VAR_2->process_func =
    VAR_0;
   break;
  default:
   VAR_2->kevent_watermark = 0;
   VAR_2->process_func = ((void*)0);
   FUNC_0("on_mp_read_session_mapper",
    "unknown element type");
   FUNC_2(FUNC_4);
   return (-1);
  }
 }
 FUNC_2(FUNC_4);
 return (0);
}
