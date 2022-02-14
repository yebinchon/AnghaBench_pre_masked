
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_9__ {int type; int signbits; int normal; int dist; } ;
struct TYPE_11__ {int entityNum; int surfaceFlags; TYPE_2__ plane; int endpos; int fraction; int startsolid; int allsolid; } ;
typedef TYPE_4__ trace_t ;
struct TYPE_10__ {int flags; scalar_t__ value; } ;
struct TYPE_8__ {int type; int signbits; int normal; int dist; } ;
struct TYPE_12__ {scalar_t__ contents; scalar_t__ sidenum; scalar_t__ exp_dist; int ent; TYPE_3__ surface; TYPE_1__ plane; int endpos; int fraction; int startsolid; int allsolid; } ;
typedef TYPE_5__ bsp_trace_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_4__*,int ,int ,int ,int ,int,int) ;

void FUNC_2(bsp_trace_t *VAR_0, vec3_t VAR_1, vec3_t VAR_2, vec3_t VAR_3, vec3_t VAR_4, int VAR_5, int VAR_6) {
 trace_t VAR_7;

 FUNC_1(&VAR_7, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

 VAR_0->allsolid = VAR_7.allsolid;
 VAR_0->startsolid = VAR_7.startsolid;
 VAR_0->fraction = VAR_7.fraction;
 FUNC_0(VAR_7.endpos, VAR_0->endpos);
 VAR_0->plane.dist = VAR_7.plane.dist;
 FUNC_0(VAR_7.plane.normal, VAR_0->plane.normal);
 VAR_0->plane.signbits = VAR_7.plane.signbits;
 VAR_0->plane.type = VAR_7.plane.type;
 VAR_0->surface.value = 0;
 VAR_0->surface.flags = VAR_7.surfaceFlags;
 VAR_0->ent = VAR_7.entityNum;
 VAR_0->exp_dist = 0;
 VAR_0->sidenum = 0;
 VAR_0->contents = 0;
}
