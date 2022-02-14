
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct query_state {int kevent_watermark; int process_func; int kevent_filter; TYPE_4__* config_entry; int timeout; int request; int response; } ;
struct cache_write_response {int error_code; } ;
struct cache_write_request {int data_size; int data; int cache_key_size; int cache_key; int entry; } ;
typedef int * cache_entry ;
struct TYPE_9__ {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_7__ {int entry_name; } ;
struct TYPE_8__ {TYPE_1__ cep; } ;
struct TYPE_10__ {scalar_t__ enabled; scalar_t__ perform_actual_lookups; TYPE_3__ common_query_timeout; int * positive_cache_entry; TYPE_2__ positive_cache_params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (int (*) (struct query_state*)) ;
 int FUNC_2 (int (*) (struct query_state*)) ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 TYPE_4__* FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_4__*,int ) ;
 int * FUNC_9 (int ,int ) ;
 struct cache_write_request* FUNC_10 (int *) ;
 struct cache_write_response* FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,TYPE_3__*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_14(struct query_state *VAR_9)
{
 struct cache_write_request *VAR_10;
 struct cache_write_response *VAR_11;
 cache_entry VAR_12;

 FUNC_1(FUNC_14);
 FUNC_12(&VAR_9->response, VAR_1);
 VAR_11 = FUNC_11(&VAR_9->response);
 VAR_10 = FUNC_10(&VAR_9->request);

 VAR_9->config_entry = FUNC_4(
  VAR_8, VAR_10->entry);

 if (VAR_9->config_entry == ((void*)0)) {
  VAR_11->error_code = VAR_3;

  FUNC_0("write_request", "can't find configuration"
      " entry '%s'. aborting request", VAR_10->entry);
  goto fin;
 }

 if (VAR_9->config_entry->enabled == 0) {
  VAR_11->error_code = VAR_2;

  FUNC_0("write_request",
   "configuration entry '%s' is disabled",
   VAR_10->entry);
  goto fin;
 }

 if (VAR_9->config_entry->perform_actual_lookups != 0) {
  VAR_11->error_code = VAR_4;

  FUNC_0("write_request",
   "entry '%s' performs lookups by itself: "
   "can't write to it", VAR_10->entry);
  goto fin;
 }

 FUNC_6(VAR_8);
 VAR_12 = FUNC_9(VAR_7,
  VAR_9->config_entry->positive_cache_params.cep.entry_name);
 FUNC_7(VAR_8);
 if (VAR_12 != ((void*)0)) {
  FUNC_5(VAR_9->config_entry, VAR_0);
  VAR_9->config_entry->positive_cache_entry = VAR_12;
  VAR_11->error_code = FUNC_3(VAR_12,
   VAR_10->cache_key,
       VAR_10->cache_key_size,
       VAR_10->data,
   VAR_10->data_size);
  FUNC_8(VAR_9->config_entry, VAR_0);

  if ((VAR_9->config_entry->common_query_timeout.tv_sec != 0) ||
      (VAR_9->config_entry->common_query_timeout.tv_usec != 0))
   FUNC_13(&VAR_9->timeout,
    &VAR_9->config_entry->common_query_timeout,
    sizeof(struct timeval));

 } else
  VAR_11->error_code = -1;

fin:
 VAR_9->kevent_filter = VAR_5;
 VAR_9->kevent_watermark = sizeof(int);
 VAR_9->process_func = VAR_6;

 FUNC_2(FUNC_14);
 return (0);
}
