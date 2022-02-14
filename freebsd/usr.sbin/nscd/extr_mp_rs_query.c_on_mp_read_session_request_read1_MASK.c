
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct query_state {scalar_t__ kevent_watermark; int (* read_func ) (struct query_state*,int*,int) ;int process_func; int request; } ;
struct cache_mp_read_session_request {int entry_length; int * entry; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int (*) (struct query_state*)) ;
 int FUNC_2 (int (*) (struct query_state*)) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int,int) ;
 struct cache_mp_read_session_request* FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int VAR_1 ;
 int FUNC_7 (struct query_state*,int*,int) ;

int
FUNC_8(struct query_state *VAR_2)
{
 struct cache_mp_read_session_request *VAR_3;
 ssize_t VAR_4;

 FUNC_1(FUNC_8);
 if (VAR_2->kevent_watermark == 0)
  VAR_2->kevent_watermark = sizeof(size_t);
 else {
  FUNC_6(&VAR_2->request,
       VAR_0);
  VAR_3 = FUNC_5(
       &VAR_2->request);

  VAR_4 = VAR_2->read_func(VAR_2,
       &VAR_3->entry_length, sizeof(size_t));

  if (VAR_4 != sizeof(size_t)) {
   FUNC_2(FUNC_8);
   return (-1);
  }

  if (FUNC_0(VAR_3->entry_length)) {
   FUNC_2(FUNC_8);
   return (-1);
  }

  VAR_3->entry = FUNC_4(1,
   VAR_3->entry_length + 1);
  FUNC_3(VAR_3->entry != ((void*)0));

  VAR_2->kevent_watermark = VAR_3->entry_length;
  VAR_2->process_func = VAR_1;
 }
 FUNC_2(FUNC_8);
 return (0);
}
