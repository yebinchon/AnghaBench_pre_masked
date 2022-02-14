
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct query_state {int kevent_watermark; int kevent_filter; int process_func; int config_entry; scalar_t__ mdata; int request; int response; } ;
struct cache_mp_write_session_write_response {int error_code; } ;
struct cache_mp_write_session_write_request {int data_size; int data; } ;
typedef int cache_mp_write_session ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int (*) (struct query_state*)) ;
 int FUNC_1 (int (*) (struct query_state*)) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 struct cache_mp_write_session_write_request* FUNC_5 (int *) ;
 struct cache_mp_write_session_write_response* FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_8(struct query_state *VAR_4)
{
 struct cache_mp_write_session_write_request *VAR_5;
 struct cache_mp_write_session_write_response *VAR_6;

 FUNC_0(FUNC_8);
 FUNC_7(&VAR_4->response,
  VAR_1);
 VAR_6 = FUNC_6(
  &VAR_4->response);
 VAR_5 = FUNC_5(
  &VAR_4->request);

 FUNC_3(VAR_4->config_entry, VAR_0);
 VAR_6->error_code = FUNC_2(
  (cache_mp_write_session)VAR_4->mdata,
  VAR_5->data,
  VAR_5->data_size);
 FUNC_4(VAR_4->config_entry, VAR_0);

 VAR_4->kevent_watermark = sizeof(int);
 VAR_4->process_func = VAR_3;
 VAR_4->kevent_filter = VAR_2;

 FUNC_1(FUNC_8);
 return (0);
}
