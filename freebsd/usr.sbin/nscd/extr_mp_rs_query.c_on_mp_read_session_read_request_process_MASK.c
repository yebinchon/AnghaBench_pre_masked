
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct query_state {int kevent_watermark; int kevent_filter; int process_func; int config_entry; scalar_t__ mdata; int response; } ;
struct cache_mp_read_session_read_response {scalar_t__ error_code; int data_size; int * data; } ;
typedef int cache_mp_read_session ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 struct cache_mp_read_session_read_response* FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int * FUNC_8 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_9(struct query_state *VAR_5)
{
 struct cache_mp_read_session_read_response *VAR_6;

 FUNC_0(VAR_4);
 FUNC_7(&VAR_5->response, VAR_1);
 VAR_6 = FUNC_6(
  &VAR_5->response);

 FUNC_4(VAR_5->config_entry, VAR_0);
 VAR_6->error_code = FUNC_3(
  (cache_mp_read_session)VAR_5->mdata, ((void*)0),
  &VAR_6->data_size);

 if (VAR_6->error_code == 0) {
  VAR_6->data = FUNC_8(VAR_6->data_size);
  FUNC_2(VAR_6 != ((void*)0));
  VAR_6->error_code = FUNC_3(
   (cache_mp_read_session)VAR_5->mdata,
       VAR_6->data,
   &VAR_6->data_size);
 }
 FUNC_5(VAR_5->config_entry, VAR_0);

 if (VAR_6->error_code == 0)
  VAR_5->kevent_watermark = sizeof(size_t) + sizeof(int);
 else
  VAR_5->kevent_watermark = sizeof(int);
 VAR_5->process_func = VAR_3;
 VAR_5->kevent_filter = VAR_2;

 FUNC_1(VAR_4);
 return (0);
}
