
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct query_state {int (* read_func ) (struct query_state*,int *,int) ;int process_func; int kevent_watermark; int request; } ;
struct cache_mp_write_session_write_request {int data_size; int * data; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int (*) (struct query_state*)) ;
 int FUNC_3 (int (*) (struct query_state*)) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int,int ) ;
 struct cache_mp_write_session_write_request* FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int VAR_1 ;
 int FUNC_8 (struct query_state*,int *,int) ;

__attribute__((used)) static int
FUNC_9(struct query_state *VAR_2)
{
 struct cache_mp_write_session_write_request *VAR_3;
 ssize_t VAR_4;

 FUNC_2(FUNC_9);
 FUNC_7(&VAR_2->request,
  VAR_0);
 VAR_3 = FUNC_6(
  &VAR_2->request);

 VAR_4 = VAR_2->read_func(VAR_2, &VAR_3->data_size,
  sizeof(size_t));

 if (VAR_4 != sizeof(size_t)) {
  FUNC_1("on_mp_write_session_write_request_read1",
   "read failed");
  FUNC_3(FUNC_9);
  return (-1);
 }

 if (FUNC_0(VAR_3->data_size)) {
  FUNC_1("on_mp_write_session_write_request_read1",
   "invalid data_size value");
  FUNC_3(FUNC_9);
  return (-1);
 }

 VAR_3->data = FUNC_5(1, VAR_3->data_size);
 FUNC_4(VAR_3->data != ((void*)0));

 VAR_2->kevent_watermark = VAR_3->data_size;
 VAR_2->process_func = VAR_1;
 FUNC_3(FUNC_9);
 return (0);
}
