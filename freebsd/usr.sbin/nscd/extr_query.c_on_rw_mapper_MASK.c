
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct query_state {int kevent_watermark; int (* read_func ) (struct query_state*,int*,int) ;int process_func; } ;
typedef int ssize_t ;




 int FUNC_0 (int (*) (struct query_state*)) ;
 int FUNC_1 (int (*) (struct query_state*)) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct query_state*,int*,int) ;

__attribute__((used)) static int
FUNC_3(struct query_state *VAR_2)
{
 ssize_t VAR_3;
 int VAR_4;

 FUNC_0(FUNC_3);
 if (VAR_2->kevent_watermark == 0) {
  VAR_2->kevent_watermark = sizeof(int);
 } else {
  VAR_3 = VAR_2->read_func(VAR_2, &VAR_4, sizeof(int));
  if (VAR_3 != sizeof(int)) {
   FUNC_1(FUNC_3);
   return (-1);
  }

  switch (VAR_4) {
  case 128:
   VAR_2->kevent_watermark = sizeof(size_t);
   VAR_2->process_func = VAR_1;
  break;
  case 129:
   VAR_2->kevent_watermark = sizeof(size_t);
   VAR_2->process_func = VAR_0;
  break;
  default:
   FUNC_1(FUNC_3);
   return (-1);
  break;
  }
 }
 FUNC_1(FUNC_3);
 return (0);
}
