
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct query_state {int (* write_func ) (struct query_state*,scalar_t__*,int) ;int kevent_watermark; scalar_t__ process_func; int kevent_filter; int response; int request; } ;
struct cache_mp_write_session_write_response {scalar_t__ error_code; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int (*) (struct query_state*)) ;
 int FUNC_2 (int (*) (struct query_state*)) ;
 int FUNC_3 (int *) ;
 struct cache_mp_write_session_write_response* FUNC_4 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (struct query_state*,scalar_t__*,int) ;

__attribute__((used)) static int
FUNC_6(struct query_state *VAR_2)
{
 struct cache_mp_write_session_write_response *VAR_3;
 ssize_t VAR_4;

 FUNC_1(FUNC_6);
 VAR_3 = FUNC_4(
  &VAR_2->response);
 VAR_4 = VAR_2->write_func(VAR_2, &VAR_3->error_code,
  sizeof(int));
 if (VAR_4 != sizeof(int)) {
  FUNC_0("on_mp_write_session_write_response_write1",
   "write failed");
  FUNC_2(FUNC_6);
  return (-1);
 }

 if (VAR_3->error_code == 0) {
  FUNC_3(&VAR_2->request);
  FUNC_3(&VAR_2->response);

  VAR_2->kevent_watermark = sizeof(int);
  VAR_2->process_func = VAR_1;
  VAR_2->kevent_filter = VAR_0;
 } else {
  VAR_2->kevent_watermark = 0;
  VAR_2->process_func = 0;
 }

 FUNC_2(FUNC_6);
 return (0);
}
