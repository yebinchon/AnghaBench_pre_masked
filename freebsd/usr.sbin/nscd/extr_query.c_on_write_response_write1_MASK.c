
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct query_state {int (* write_func ) (struct query_state*,int *,int) ;int kevent_watermark; int process_func; int kevent_filter; int response; int request; } ;
struct cache_write_response {int error_code; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int (*) (struct query_state*)) ;
 int FUNC_1 (int (*) (struct query_state*)) ;
 int FUNC_2 (int *) ;
 struct cache_write_response* FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (struct query_state*,int *,int) ;

__attribute__((used)) static int
FUNC_5(struct query_state *VAR_2)
{
 struct cache_write_response *VAR_3;
 ssize_t VAR_4;

 FUNC_0(FUNC_5);
 VAR_3 = FUNC_3(&VAR_2->response);
 VAR_4 = VAR_2->write_func(VAR_2, &VAR_3->error_code,
  sizeof(int));
 if (VAR_4 != sizeof(int)) {
  FUNC_1(FUNC_5);
  return (-1);
 }

 FUNC_2(&VAR_2->request);
 FUNC_2(&VAR_2->response);

 VAR_2->kevent_watermark = sizeof(int);
 VAR_2->kevent_filter = VAR_0;
 VAR_2->process_func = VAR_1;

 FUNC_1(FUNC_5);
 return (0);
}
