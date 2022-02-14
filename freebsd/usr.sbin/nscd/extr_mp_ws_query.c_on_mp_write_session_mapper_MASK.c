
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct query_state {int kevent_watermark; int (* read_func ) (struct query_state*,int*,int) ;int * process_func; } ;
typedef int ssize_t ;





 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int (*) (struct query_state*)) ;
 int FUNC_3 (int (*) (struct query_state*)) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_4 (struct query_state*,int*,int) ;

__attribute__((used)) static int
FUNC_5(struct query_state *VAR_3)
{
 ssize_t VAR_4;
 int VAR_5;

 FUNC_2(FUNC_5);
 if (VAR_3->kevent_watermark == 0) {
  VAR_3->kevent_watermark = sizeof(int);
 } else {
  VAR_4 = VAR_3->read_func(VAR_3, &VAR_5, sizeof(int));
  if (VAR_4 != sizeof(int)) {
   FUNC_1("on_mp_write_session_mapper",
    "read failed");
   FUNC_3(FUNC_5);
   return (-1);
  }

  switch (VAR_5) {
  case 128:
   VAR_3->kevent_watermark = sizeof(size_t);
   VAR_3->process_func =
    VAR_2;
   break;
  case 130:
   VAR_3->kevent_watermark = 0;
   VAR_3->process_func =
    VAR_0;
   break;
  case 129:
   VAR_3->kevent_watermark = 0;
   VAR_3->process_func =
    VAR_1;
   break;
  default:
   VAR_3->kevent_watermark = 0;
   VAR_3->process_func = ((void*)0);
   FUNC_0("on_mp_write_session_mapper",
    "unknown element type");
   FUNC_3(FUNC_5);
   return (-1);
  }
 }
 FUNC_3(FUNC_5);
 return (0);
}
