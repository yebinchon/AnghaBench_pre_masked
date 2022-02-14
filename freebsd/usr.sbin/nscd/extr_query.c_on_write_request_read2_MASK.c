
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct query_state {scalar_t__ (* read_func ) (struct query_state*,scalar_t__,scalar_t__) ;int process_func; scalar_t__ kevent_watermark; scalar_t__ eid_str_length; int request; } ;
struct cache_write_request {scalar_t__ entry_length; scalar_t__ cache_key_size; scalar_t__ data_size; scalar_t__ data; scalar_t__ cache_key; scalar_t__ entry; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int (*) (struct query_state*)) ;
 int FUNC_1 (int (*) (struct query_state*)) ;
 struct cache_write_request* FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct query_state*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (struct query_state*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (struct query_state*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(struct query_state *VAR_2)
{
 struct cache_write_request *VAR_3;
 ssize_t VAR_4;

 FUNC_0(FUNC_6);
 VAR_3 = FUNC_2(&VAR_2->request);

 VAR_4 = VAR_2->read_func(VAR_2, VAR_3->entry,
  VAR_3->entry_length);
 VAR_4 += VAR_2->read_func(VAR_2, VAR_3->cache_key +
  VAR_2->eid_str_length, VAR_3->cache_key_size);
 if (VAR_3->data_size != 0)
  VAR_4 += VAR_2->read_func(VAR_2, VAR_3->data,
   VAR_3->data_size);

 if (VAR_4 != (ssize_t)VAR_2->kevent_watermark) {
  FUNC_1(FUNC_6);
  return (-1);
 }
 VAR_3->cache_key_size += VAR_2->eid_str_length;

 VAR_2->kevent_watermark = 0;
 if (VAR_3->data_size != 0)
  VAR_2->process_func = VAR_1;
 else
      VAR_2->process_func = VAR_0;
 FUNC_1(FUNC_6);
 return (0);
}
