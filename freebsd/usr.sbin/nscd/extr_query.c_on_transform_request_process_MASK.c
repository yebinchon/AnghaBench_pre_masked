
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct query_state {int process_func; scalar_t__ kevent_watermark; struct configuration_entry* config_entry; int euid; int eid_str_length; int eid_str; int request; int response; } ;
struct configuration_entry {int perform_actual_lookups; } ;
struct cache_transform_response {int error_code; } ;
struct cache_transform_request {int transformation_type; int * entry; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int *) ;
 int FUNC_1 (int (*) (struct query_state*)) ;
 int FUNC_2 (int (*) (struct query_state*)) ;


 int FUNC_3 (struct configuration_entry*) ;
 int FUNC_4 (struct configuration_entry*,int ,int ) ;
 void* FUNC_5 (int ,int *) ;
 size_t FUNC_6 (int ) ;
 struct configuration_entry* FUNC_7 (int ,size_t) ;
 struct cache_transform_request* FUNC_8 (int *) ;
 struct cache_transform_response* FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_11(struct query_state *VAR_3)
{
 struct cache_transform_request *VAR_4;
 struct cache_transform_response *VAR_5;
 struct configuration_entry *VAR_6;
 size_t VAR_7, VAR_8;

 FUNC_1(FUNC_11);
 FUNC_10(&VAR_3->response, VAR_0);
 VAR_5 = FUNC_9(&VAR_3->response);
 VAR_4 = FUNC_8(&VAR_3->request);

 switch (VAR_4->transformation_type) {
 case 128:
  if (VAR_4->entry == ((void*)0)) {
   VAR_8 = FUNC_6(VAR_2);
   for (VAR_7 = 0; VAR_7 < VAR_8; ++VAR_7) {
       VAR_6 = FUNC_7(
    VAR_2, VAR_7);

       if (VAR_6->perform_actual_lookups == 0)
        FUNC_4(VAR_6,
        VAR_3->eid_str, VAR_3->eid_str_length);
   }
  } else {
   VAR_3->config_entry = FUNC_5(
    VAR_2, VAR_4->entry);

   if (VAR_3->config_entry == ((void*)0)) {
    FUNC_0("transform_request",
     "can't find configuration"
        " entry '%s'. aborting request",
     VAR_4->entry);
    VAR_5->error_code = -1;
    goto fin;
   }

   if (VAR_3->config_entry->perform_actual_lookups != 0) {
    FUNC_0("transform_request",
     "can't transform the cache entry %s"
     ", because it ised for actual lookups",
     VAR_4->entry);
    VAR_5->error_code = -1;
    goto fin;
   }

   FUNC_4(VAR_3->config_entry,
    VAR_3->eid_str, VAR_3->eid_str_length);
  }
  break;
 case 129:
  if (VAR_3->euid != 0)
   VAR_5->error_code = -1;
  else {
   if (VAR_4->entry == ((void*)0)) {
    VAR_8 = FUNC_6(
     VAR_2);
    for (VAR_7 = 0; VAR_7 < VAR_8; ++VAR_7) {
        FUNC_3(
     FUNC_7(
      VAR_2, VAR_7));
    }
   } else {
    VAR_3->config_entry = FUNC_5(
     VAR_2,
     VAR_4->entry);

    if (VAR_3->config_entry == ((void*)0)) {
     FUNC_0("transform_request",
      "can't find configuration"
         " entry '%s'. aborting request",
      VAR_4->entry);
     VAR_5->error_code = -1;
     goto fin;
    }

    FUNC_3(VAR_3->config_entry);
   }
  }
  break;
 default:
  VAR_5->error_code = -1;
 }

fin:
 VAR_3->kevent_watermark = 0;
 VAR_3->process_func = VAR_1;
 FUNC_2(FUNC_11);
 return (0);
}
