
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct query_state {scalar_t__ (* write_func ) (struct query_state*,int ,int ) ;size_t kevent_watermark; int kevent_filter; int process_func; int response; int request; } ;
struct cache_mp_read_session_read_response {int data_size; int data; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int (*) (struct query_state*)) ;
 int FUNC_2 (int (*) (struct query_state*)) ;
 int FUNC_3 (int *) ;
 struct cache_mp_read_session_read_response* FUNC_4 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (struct query_state*,int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct query_state *VAR_2)
{
 struct cache_mp_read_session_read_response *VAR_3;
 ssize_t VAR_4;

 FUNC_1(FUNC_6);
 VAR_3 = FUNC_4(
  &VAR_2->response);
 VAR_4 = VAR_2->write_func(VAR_2, VAR_3->data,
  VAR_3->data_size);
 if (VAR_4 < 0 || (size_t)VAR_4 != VAR_2->kevent_watermark) {
  FUNC_0("on_mp_read_session_read_response_write2",
   "write failed");
  FUNC_2(FUNC_6);
  return (-1);
 }

 FUNC_3(&VAR_2->request);
 FUNC_3(&VAR_2->response);

 VAR_2->kevent_watermark = sizeof(int);
 VAR_2->process_func = VAR_1;
 VAR_2->kevent_filter = VAR_0;

 FUNC_2(FUNC_6);
 return (0);
}
