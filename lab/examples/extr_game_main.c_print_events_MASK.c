
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int (* event_count ) (void*) ;char* (* event_type_name ) (void*,int ) ;int (* event ) (void*,int,TYPE_1__*) ;} ;
struct TYPE_5__ {int observation_count; int * observations; int id; } ;
typedef TYPE_1__ EnvCApi_Event ;
typedef TYPE_2__ EnvCApi ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int,char*) ;
 int VAR_0 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*,int,TYPE_1__*) ;
 char* FUNC_5 (void*,int ) ;
 char* FUNC_6 (void*,int ) ;

__attribute__((used)) static int FUNC_7(EnvCApi* VAR_1, void* VAR_2) {
  int VAR_3 = VAR_1->event_count(VAR_2);
  for (int VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4) {
    EnvCApi_Event VAR_5;
    VAR_1->event(VAR_2, VAR_4, &VAR_5);
    FUNC_2("Event %d: \"%s\" - ", VAR_4,
           VAR_1->event_type_name(VAR_2, VAR_5.id));
    for (int VAR_6 = 0; VAR_6 < VAR_5.observation_count; ++VAR_6) {
      if (VAR_6 != 0) {
        FUNC_0(", ", VAR_0);
      }
      FUNC_1(&VAR_5.observations[VAR_6]);
    }
    FUNC_0("\n", VAR_0);
  }
  return VAR_3;
}
