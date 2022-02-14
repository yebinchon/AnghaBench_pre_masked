
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct query_state {scalar_t__ kevent_watermark; int (* read_func ) (struct query_state*,scalar_t__*,int) ;scalar_t__ eid_str_length; int process_func; int eid_str; int request; } ;
struct cache_write_request {scalar_t__ entry_length; scalar_t__ cache_key_size; scalar_t__ data_size; int * data; int * cache_key; int * entry; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int (*) (struct query_state*)) ;
 int FUNC_2 (int (*) (struct query_state*)) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int,scalar_t__) ;
 struct cache_write_request* FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ,scalar_t__) ;
 int VAR_1 ;
 int FUNC_8 (struct query_state*,scalar_t__*,int) ;
 int FUNC_9 (struct query_state*,scalar_t__*,int) ;
 int FUNC_10 (struct query_state*,scalar_t__*,int) ;

__attribute__((used)) static int
FUNC_11(struct query_state *VAR_2)
{
 struct cache_write_request *VAR_3;
 ssize_t VAR_4;

 FUNC_1(FUNC_11);
 if (VAR_2->kevent_watermark == 0)
  VAR_2->kevent_watermark = sizeof(size_t) * 3;
 else {
  FUNC_6(&VAR_2->request, VAR_0);
  VAR_3 = FUNC_5(&VAR_2->request);

  VAR_4 = VAR_2->read_func(VAR_2, &VAR_3->entry_length,
       sizeof(size_t));
  VAR_4 += VAR_2->read_func(VAR_2,
       &VAR_3->cache_key_size, sizeof(size_t));
  VAR_4 += VAR_2->read_func(VAR_2,
       &VAR_3->data_size, sizeof(size_t));

  if (VAR_4 != sizeof(size_t) * 3) {
   FUNC_2(FUNC_11);
   return (-1);
  }

  if (FUNC_0(VAR_3->entry_length) ||
   FUNC_0(VAR_3->cache_key_size) ||
   (FUNC_0(VAR_3->data_size) &&
   (VAR_3->data_size != 0))) {
   FUNC_2(FUNC_11);
   return (-1);
  }

  VAR_3->entry = FUNC_4(1,
   VAR_3->entry_length + 1);
  FUNC_3(VAR_3->entry != ((void*)0));

  VAR_3->cache_key = FUNC_4(1,
   VAR_3->cache_key_size +
   VAR_2->eid_str_length);
  FUNC_3(VAR_3->cache_key != ((void*)0));
  FUNC_7(VAR_3->cache_key, VAR_2->eid_str,
   VAR_2->eid_str_length);

  if (VAR_3->data_size != 0) {
   VAR_3->data = FUNC_4(1,
    VAR_3->data_size);
   FUNC_3(VAR_3->data != ((void*)0));
  }

  VAR_2->kevent_watermark = VAR_3->entry_length +
   VAR_3->cache_key_size +
   VAR_3->data_size;
  VAR_2->process_func = VAR_1;
 }

 FUNC_2(FUNC_11);
 return (0);
}
