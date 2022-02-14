
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct query_state {int (* write_func ) (struct query_state*,int *,int) ;int * process_func; scalar_t__ kevent_watermark; int response; int request; } ;
struct cache_transform_response {int error_code; } ;
typedef int ssize_t ;


 int FUNC_0 (int (*) (struct query_state*)) ;
 int FUNC_1 (int (*) (struct query_state*)) ;
 int FUNC_2 (int *) ;
 struct cache_transform_response* FUNC_3 (int *) ;
 int FUNC_4 (struct query_state*,int *,int) ;

__attribute__((used)) static int
FUNC_5(struct query_state *VAR_0)
{
 struct cache_transform_response *VAR_1;
 ssize_t VAR_2;

 FUNC_0(FUNC_5);
 VAR_1 = FUNC_3(&VAR_0->response);
 VAR_2 = VAR_0->write_func(VAR_0, &VAR_1->error_code,
  sizeof(int));
 if (VAR_2 != sizeof(int)) {
  FUNC_1(FUNC_5);
  return (-1);
 }

 FUNC_2(&VAR_0->request);
 FUNC_2(&VAR_0->response);

 VAR_0->kevent_watermark = 0;
 VAR_0->process_func = ((void*)0);
 FUNC_1(FUNC_5);
 return (0);
}
