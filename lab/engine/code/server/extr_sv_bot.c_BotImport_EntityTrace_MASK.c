
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


 int FUNC_0 (TYPE_4__*,int ,int ,int ,int ,int,int,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(bsp_trace_t *VAR_1, vec3_t VAR_2, vec3_t VAR_3, vec3_t VAR_4, vec3_t VAR_5, int VAR_6, int VAR_7) {
 trace_t VAR_8;

 FUNC_0(&VAR_8, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_0);

 VAR_1->allsolid = VAR_8.allsolid;
 VAR_1->startsolid = VAR_8.startsolid;
 VAR_1->fraction = VAR_8.fraction;
 FUNC_1(VAR_8.endpos, VAR_1->endpos);
 VAR_1->plane.dist = VAR_8.plane.dist;
 FUNC_1(VAR_8.plane.normal, VAR_1->plane.normal);
 VAR_1->plane.signbits = VAR_8.plane.signbits;
 VAR_1->plane.type = VAR_8.plane.type;
 VAR_1->surface.value = 0;
 VAR_1->surface.flags = VAR_8.surfaceFlags;
 VAR_1->ent = VAR_8.entityNum;
 VAR_1->exp_dist = 0;
 VAR_1->sidenum = 0;
 VAR_1->contents = 0;
}
