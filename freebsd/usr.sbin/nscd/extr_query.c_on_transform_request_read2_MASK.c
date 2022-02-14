
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct query_state {scalar_t__ (* read_func ) (struct query_state*,int ,int ) ;int process_func; scalar_t__ kevent_watermark; int request; } ;
struct cache_transform_request {int entry_length; int entry; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int (*) (struct query_state*)) ;
 int FUNC_1 (int (*) (struct query_state*)) ;
 struct cache_transform_request* FUNC_2 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (struct query_state*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct query_state *VAR_1)
{
 struct cache_transform_request *VAR_2;
 ssize_t VAR_3;

 FUNC_0(FUNC_4);
 VAR_2 = FUNC_2(&VAR_1->request);

 VAR_3 = VAR_1->read_func(VAR_1, VAR_2->entry,
  VAR_2->entry_length);

 if (VAR_3 != (ssize_t)VAR_1->kevent_watermark) {
  FUNC_1(FUNC_4);
  return (-1);
 }

 VAR_1->kevent_watermark = 0;
 VAR_1->process_func = VAR_0;

 FUNC_1(FUNC_4);
 return (0);
}
