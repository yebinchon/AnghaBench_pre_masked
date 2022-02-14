
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ vec_t ;
typedef scalar_t__* vec3_t ;
struct TYPE_8__ {int oldframe; int frame; } ;
struct TYPE_10__ {TYPE_1__ e; } ;
typedef TYPE_3__ trRefEntity_t ;
struct TYPE_11__ {scalar_t__* bounds; } ;
typedef TYPE_4__ iqmData_t ;
struct TYPE_9__ {int c_box_cull_md3_out; int c_box_cull_md3_clip; int c_box_cull_md3_in; } ;
struct TYPE_12__ {TYPE_2__ pc; } ;





 int FUNC_0 (scalar_t__**) ;
 TYPE_5__ VAR_0 ;

__attribute__((used)) static int FUNC_1( iqmData_t *VAR_1, trRefEntity_t *VAR_2 ) {
 vec3_t VAR_3[2];
 vec_t *VAR_4, *VAR_5;
 int VAR_6;

 if (!VAR_1->bounds) {
  VAR_0.pc.c_box_cull_md3_clip++;
  return 130;
 }


 VAR_4 = VAR_1->bounds + 6*VAR_2->e.oldframe;
 VAR_5 = VAR_1->bounds + 6*VAR_2->e.frame;


 for (VAR_6 = 0 ; VAR_6 < 3 ; VAR_6++) {
  VAR_3[0][VAR_6] = VAR_4[VAR_6] < VAR_5[VAR_6] ? VAR_4[VAR_6] : VAR_5[VAR_6];
  VAR_3[1][VAR_6] = VAR_4[VAR_6+3] > VAR_5[VAR_6+3] ? VAR_4[VAR_6+3] : VAR_5[VAR_6+3];
 }

 switch ( FUNC_0( VAR_3 ) )
 {
 case 129:
  VAR_0.pc.c_box_cull_md3_in++;
  return 129;
 case 130:
  VAR_0.pc.c_box_cull_md3_clip++;
  return 130;
 case 128:
 default:
  VAR_0.pc.c_box_cull_md3_out++;
  return 128;
 }
}
