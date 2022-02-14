
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int qboolean ;
typedef int md3Header_t ;
struct TYPE_9__ {int * (* Malloc ) (size_t) ;} ;
struct TYPE_7__ {int (* clear_model ) (int ) ;int (* model_getters ) (int ,int *,void**) ;int (* find_model ) (int ,char const*) ;} ;
struct TYPE_6__ {size_t (* serialised_model_size ) (int *,void*) ;int (* serialise_model ) (int *,void*,int *) ;} ;
struct TYPE_8__ {int userdata; TYPE_2__ hooks; TYPE_1__ calls; } ;
typedef int DeepmindModelGetters ;
typedef TYPE_3__ DeepmindContext ;


 TYPE_3__* FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ,int *,void**) ;
 size_t FUNC_3 (int *,void*) ;
 int * FUNC_4 (size_t) ;
 int FUNC_5 (int *,void*,int *) ;
 int FUNC_6 (int ) ;

qboolean FUNC_7(const char *VAR_3, md3Header_t **VAR_4) {
  DeepmindContext *VAR_5 = FUNC_0();


  if (!VAR_5->hooks.find_model(VAR_5->userdata, VAR_3)) {
    return VAR_0;
  }


  DeepmindModelGetters VAR_6;
  void* VAR_7;
  VAR_5->hooks.model_getters(VAR_5->userdata, &VAR_6, &VAR_7);


  size_t VAR_8 =
      VAR_5->calls.serialised_model_size(&VAR_6, VAR_7);


  *VAR_4 = VAR_2.Malloc(VAR_8);


  VAR_5->calls.serialise_model(&VAR_6, VAR_7, *VAR_4);


  VAR_5->hooks.clear_model(VAR_5->userdata);

  return VAR_1;
}
