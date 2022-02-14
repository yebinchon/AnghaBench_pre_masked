
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void** origin; void*** axis; int name; } ;
typedef TYPE_1__ md3Tag_t ;
struct TYPE_6__ {int (* get_tag_origin ) (void*,size_t,float*) ;int (* get_tag_axis ) (void*,size_t,size_t,float*) ;int (* get_tag_name ) (void*,size_t,int ,int ) ;} ;
typedef TYPE_2__ DeepmindModelGetters ;


 void* FUNC_0 (float) ;
 int VAR_0 ;
 int FUNC_1 (void*,size_t,int ,int ) ;
 int FUNC_2 (void*,size_t,size_t,float*) ;
 int FUNC_3 (void*,size_t,float*) ;

__attribute__((used)) static void FUNC_4(
    size_t VAR_1,
    const DeepmindModelGetters* VAR_2,
    void* VAR_3,
    md3Tag_t* VAR_4) {
  VAR_2->get_tag_name(VAR_3, VAR_1, VAR_0, VAR_4->name);
  for (size_t VAR_5 = 0; VAR_5 < 3; ++VAR_5) {
    float VAR_6[3];
    VAR_2->get_tag_axis(VAR_3, VAR_1, VAR_5, VAR_6);
    for (size_t VAR_7 = 0; VAR_7 < 3; ++VAR_7) {
      VAR_4->axis[VAR_5][VAR_7] = FUNC_0(VAR_6[VAR_7]);
    }
  }
  float VAR_8[3];
  VAR_2->get_tag_origin(VAR_3, VAR_1, VAR_8);
  for (size_t VAR_9 = 0; VAR_9 < 3; ++VAR_9) {
    VAR_4->origin[VAR_9] = FUNC_0(VAR_8[VAR_9]);
  }
}
