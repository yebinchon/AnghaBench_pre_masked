
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct query_state {scalar_t__ (* write_func ) (struct query_state*,scalar_t__*,int) ;scalar_t__ kevent_watermark; int * process_func; int response; } ;
struct cache_read_response {scalar_t__ error_code; scalar_t__ data_size; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int (*) (struct query_state*)) ;
 int FUNC_1 (int (*) (struct query_state*)) ;
 struct cache_read_response* FUNC_2 (int *) ;
 int * VAR_0 ;
 scalar_t__ FUNC_3 (struct query_state*,scalar_t__*,int) ;
 scalar_t__ FUNC_4 (struct query_state*,scalar_t__*,int) ;

__attribute__((used)) static int
FUNC_5(struct query_state *VAR_1)
{
 struct cache_read_response *VAR_2;
 ssize_t VAR_3;

 FUNC_0(FUNC_5);
 VAR_2 = FUNC_2(&VAR_1->response);

 VAR_3 = VAR_1->write_func(VAR_1, &VAR_2->error_code,
  sizeof(int));

 if (VAR_2->error_code == 0) {
  VAR_3 += VAR_1->write_func(VAR_1, &VAR_2->data_size,
   sizeof(size_t));
  if (VAR_3 != (ssize_t)VAR_1->kevent_watermark) {
   FUNC_1(FUNC_5);
   return (-1);
  }

  VAR_1->kevent_watermark = VAR_2->data_size;
  VAR_1->process_func = VAR_0;
 } else {
  if (VAR_3 != (ssize_t)VAR_1->kevent_watermark) {
   FUNC_1(FUNC_5);
   return (-1);
  }

  VAR_1->kevent_watermark = 0;
  VAR_1->process_func = ((void*)0);
 }

 FUNC_1(FUNC_5);
 return (0);
}
