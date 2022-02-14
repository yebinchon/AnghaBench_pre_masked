
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct query_state {int kevent_watermark; int kevent_filter; int process_func; TYPE_4__* config_entry; int timeout; int destroy_func; scalar_t__ mdata; int eid_str; int request; int response; } ;
struct cache_mp_write_session_response {int error_code; } ;
struct cache_mp_write_session_request {int entry; } ;
typedef scalar_t__ cache_mp_write_session ;
typedef int * cache_entry ;
struct TYPE_9__ {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_7__ {int entry_name; } ;
struct TYPE_8__ {TYPE_1__ cep; } ;
struct TYPE_10__ {scalar_t__ enabled; scalar_t__ perform_actual_lookups; TYPE_3__ mp_query_timeout; TYPE_2__ mp_cache_params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (int (*) (struct query_state*)) ;
 int FUNC_2 (int (*) (struct query_state*)) ;
 int FUNC_3 (char**,char*,int ,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct query_state*) ;
 TYPE_4__* FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_4__*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_4__*,int ) ;
 int * FUNC_11 (int ,char*) ;
 int FUNC_12 (char*) ;
 struct cache_mp_write_session_request* FUNC_13 (int *) ;
 struct cache_mp_write_session_response* FUNC_14 (int *) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *,TYPE_3__*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_17 (int *) ;
 int * FUNC_18 (struct query_state*,char*) ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int
FUNC_19(struct query_state *VAR_13)
{
 struct cache_mp_write_session_request *VAR_14;
 struct cache_mp_write_session_response *VAR_15;
 cache_mp_write_session VAR_16;
 cache_entry VAR_17;
 char *VAR_18;

 FUNC_1(FUNC_19);
 FUNC_15(&VAR_13->response, VAR_1);
 VAR_15 = FUNC_14(
  &VAR_13->response);
 VAR_14 = FUNC_13(&VAR_13->request);

 VAR_13->config_entry = FUNC_6(
  VAR_12, VAR_14->entry);
 if (VAR_13->config_entry == ((void*)0)) {
  VAR_15->error_code = VAR_3;

  FUNC_0("write_session_request",
   "can't find configuration entry '%s'. "
       "aborting request", VAR_14->entry);
      goto fin;
 }

 if (VAR_13->config_entry->enabled == 0) {
  VAR_15->error_code = VAR_2;

  FUNC_0("write_session_request",
   "configuration entry '%s' is disabled",
   VAR_14->entry);
  goto fin;
 }

 if (VAR_13->config_entry->perform_actual_lookups != 0) {
  VAR_15->error_code = VAR_4;

  FUNC_0("write_session_request",
   "entry '%s' performs lookups by itself: "
   "can't write to it", VAR_14->entry);
  goto fin;
 } else {






 }






 FUNC_3(&VAR_18, "%d%d", VAR_13->eid_str,
  VAR_13->config_entry->mp_cache_params.cep.entry_name);
 FUNC_4(VAR_18 != ((void*)0));

 FUNC_8(VAR_12);
 VAR_17 = FUNC_11(VAR_11,
  VAR_18);
 FUNC_9(VAR_12);

 if (VAR_17 == VAR_7)
  VAR_17 = FUNC_18(VAR_13,
   VAR_18);

 FUNC_12(VAR_18);

 FUNC_4(VAR_17 != ((void*)0));
 FUNC_7(VAR_13->config_entry, VAR_0);
 VAR_16 = FUNC_17(VAR_17);
 if (VAR_16 == VAR_8)
  VAR_15->error_code = -1;
 else {
  VAR_13->mdata = VAR_16;
  VAR_13->destroy_func = VAR_9;

  if ((VAR_13->config_entry->mp_query_timeout.tv_sec != 0) ||
      (VAR_13->config_entry->mp_query_timeout.tv_usec != 0))
   FUNC_16(&VAR_13->timeout,
    &VAR_13->config_entry->mp_query_timeout,
    sizeof(struct timeval));
 }
 FUNC_10(VAR_13->config_entry, VAR_0);

fin:
 VAR_13->process_func = VAR_10;
 VAR_13->kevent_watermark = sizeof(int);
 VAR_13->kevent_filter = VAR_6;

 FUNC_2(FUNC_19);
 return (0);
}
