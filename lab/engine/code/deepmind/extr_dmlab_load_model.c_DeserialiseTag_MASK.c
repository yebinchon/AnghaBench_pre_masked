
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * origin; int ** axis; int name; } ;
typedef TYPE_1__ md3Tag_t ;
struct TYPE_6__ {int (* set_tag_origin ) (void*,size_t,float*) ;int (* set_tag_axis ) (void*,size_t,size_t,float*) ;int (* set_tag_name ) (void*,size_t,int ) ;} ;
typedef TYPE_2__ DeepmindModelSetters ;


 float FUNC_0 (int ) ;
 int FUNC_1 (void*,size_t,int ) ;
 int FUNC_2 (void*,size_t,size_t,float*) ;
 int FUNC_3 (void*,size_t,float*) ;

__attribute__((used)) static void FUNC_4(
    const md3Tag_t* VAR_0,
    size_t VAR_1,
    const DeepmindModelSetters* VAR_2,
    void* VAR_3) {
  VAR_2->set_tag_name(VAR_3, VAR_1, VAR_0->name);
  for (size_t VAR_4 = 0; VAR_4 < 3; ++VAR_4) {
    float VAR_5[3];
    for (size_t VAR_6 = 0; VAR_6 < 3; ++VAR_6) {
      VAR_5[VAR_6] = FUNC_0(VAR_0->axis[VAR_4][VAR_6]);
    }
    VAR_2->set_tag_axis(VAR_3, VAR_1, VAR_4, VAR_5);
  }
  float VAR_7[3];
  for (size_t VAR_8 = 0; VAR_8 < 3; ++VAR_8) {
    VAR_7[VAR_8] = FUNC_0(VAR_0->origin[VAR_8]);
  }
  VAR_2->set_tag_origin(VAR_3, VAR_1, VAR_7);
}
