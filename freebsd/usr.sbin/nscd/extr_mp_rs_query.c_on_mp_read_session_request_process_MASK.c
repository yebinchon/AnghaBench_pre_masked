
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
struct multipart_agent {int (* mp_lookup_func ) (char**,size_t*,void*) ;void* (* mp_init_func ) () ;} ;
struct cache_mp_read_session_response {int error_code; } ;
struct cache_mp_read_session_request {int entry; } ;
struct agent {scalar_t__ type; } ;
typedef int * cache_mp_write_session ;
typedef scalar_t__ cache_mp_read_session ;
typedef scalar_t__ cache_entry ;
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
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (char*,char*,int ) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int (*) (struct query_state*)) ;
 int FUNC_2 (int (*) (struct query_state*)) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char**,char*,int ,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *,char*,size_t) ;
 scalar_t__ FUNC_7 (struct query_state*) ;
 int FUNC_8 (int *) ;
 TYPE_4__* FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_4__*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_4__*,int ) ;
 struct agent* FUNC_14 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_15 (int ,char*) ;
 int FUNC_16 (char*) ;
 struct cache_mp_read_session_request* FUNC_17 (int *) ;
 struct cache_mp_read_session_response* FUNC_18 (int *) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (int *,TYPE_3__*,int) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_21 (scalar_t__) ;
 int * FUNC_22 (scalar_t__) ;
 scalar_t__ FUNC_23 (struct query_state*,char*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 char* FUNC_24 (int ) ;
 void* FUNC_25 () ;
 int FUNC_26 (char**,size_t*,void*) ;

__attribute__((used)) static int
FUNC_27(struct query_state *VAR_16)
{
 struct cache_mp_read_session_request *VAR_17;
 struct cache_mp_read_session_response *VAR_18;
 cache_mp_read_session VAR_19;
 cache_entry VAR_20;
 char *VAR_21;

 char *VAR_22;
 size_t VAR_23;
 cache_mp_write_session VAR_24;
 struct agent *VAR_25;
 struct multipart_agent *VAR_26;
 void *VAR_27;
 int VAR_28;

 FUNC_1(FUNC_27);
 FUNC_19(&VAR_16->response, VAR_1);
 VAR_18 = FUNC_18(
  &VAR_16->response);
 VAR_17 = FUNC_17(&VAR_16->request);

 VAR_16->config_entry = FUNC_9(
  VAR_15, VAR_17->entry);
 if (VAR_16->config_entry == ((void*)0)) {
  VAR_18->error_code = VAR_3;

  FUNC_0("read_session_request",
   "can't find configuration entry '%s'."
   " aborting request", VAR_17->entry);
  goto fin;
 }

 if (VAR_16->config_entry->enabled == 0) {
  VAR_18->error_code = VAR_2;

  FUNC_0("read_session_request",
   "configuration entry '%s' is disabled",
   VAR_17->entry);
  goto fin;
 }

 if (VAR_16->config_entry->perform_actual_lookups != 0)
  VAR_21 = FUNC_24(
   VAR_16->config_entry->mp_cache_params.cep.entry_name);
 else {







  FUNC_4(&VAR_21, "%d%d", VAR_16->eid_str,
   VAR_16->config_entry->mp_cache_params.cep.entry_name);
 }

 FUNC_5(VAR_21 != ((void*)0));

 FUNC_11(VAR_15);
 VAR_20 = FUNC_15(VAR_14, VAR_21);
 FUNC_12(VAR_15);

 if ((VAR_20 == VAR_6) &&
    (VAR_16->config_entry->perform_actual_lookups != 0))
  VAR_20 = FUNC_23(VAR_16,
   VAR_21);

 FUNC_16(VAR_21);

 if (VAR_20 != VAR_7) {
  FUNC_10(VAR_16->config_entry, VAR_0);
  VAR_19 = FUNC_21(VAR_20);
  FUNC_13(VAR_16->config_entry,
   VAR_0);

  if ((VAR_19 == VAR_8) &&
     (VAR_16->config_entry->perform_actual_lookups != 0)) {
   VAR_25 = FUNC_14(VAR_13,
    VAR_17->entry, VAR_9);

   if ((VAR_25 != ((void*)0)) &&
   (VAR_25->type == VAR_9)) {
    VAR_26 = (struct multipart_agent *)
     VAR_25;
    VAR_27 = VAR_26->mp_init_func();





    FUNC_10(VAR_16->config_entry,
     VAR_0);
    VAR_24 = FUNC_22(VAR_20);
    FUNC_13(VAR_16->config_entry,
     VAR_0);
    if (VAR_24 != ((void*)0)) {
        do {
     VAR_22 = ((void*)0);
     VAR_28 = VAR_26->mp_lookup_func(&VAR_22,
      &VAR_23,
      VAR_27);

     if ((VAR_28 & VAR_10) &&
        (VAR_22 != ((void*)0))) {
      FUNC_10(
       VAR_16->config_entry,
          VAR_0);
      if (FUNC_6(VAR_24, VAR_22,
          VAR_23) != 0) {
       FUNC_3(VAR_24);
       VAR_24 = ((void*)0);
      }
      FUNC_13(
       VAR_16->config_entry,
       VAR_0);

      FUNC_16(VAR_22);
      VAR_22 = ((void*)0);
     } else {
      FUNC_10(
       VAR_16->config_entry,
       VAR_0);
      FUNC_8(VAR_24);
      FUNC_13(
       VAR_16->config_entry,
       VAR_0);

      FUNC_16(VAR_22);
      VAR_22 = ((void*)0);
     }
        } while ((VAR_28 & VAR_10) &&
             (VAR_24 != ((void*)0)));
    }

    FUNC_10(VAR_16->config_entry,
     VAR_0);
    VAR_19 = FUNC_21(VAR_20);
    FUNC_13(VAR_16->config_entry,
     VAR_0);
   }
  }

  if (VAR_19 == VAR_8)
   VAR_18->error_code = -1;
  else {
      VAR_16->mdata = VAR_19;
      VAR_16->destroy_func = VAR_11;

      FUNC_10(VAR_16->config_entry,
   VAR_0);
      if ((VAR_16->config_entry->mp_query_timeout.tv_sec != 0) ||
      (VAR_16->config_entry->mp_query_timeout.tv_usec != 0))
   FUNC_20(&VAR_16->timeout,
       &VAR_16->config_entry->mp_query_timeout,
       sizeof(struct timeval));
      FUNC_13(VAR_16->config_entry,
   VAR_0);
  }
 } else
  VAR_18->error_code = -1;

fin:
 VAR_16->process_func = VAR_12;
 VAR_16->kevent_watermark = sizeof(int);
 VAR_16->kevent_filter = VAR_5;

 FUNC_2(FUNC_27);
 return (0);
}
