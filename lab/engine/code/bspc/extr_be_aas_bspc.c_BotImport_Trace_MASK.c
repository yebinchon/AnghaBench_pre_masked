
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
struct TYPE_11__ {int surfaceFlags; int startsolid; TYPE_2__ plane; int fraction; int entityNum; int endpos; int contents; int allsolid; } ;
typedef TYPE_4__ trace_t ;
struct TYPE_10__ {int flags; } ;
struct TYPE_8__ {int type; int signbits; int normal; int dist; } ;
struct TYPE_12__ {TYPE_3__ surface; int startsolid; scalar_t__ sidenum; TYPE_1__ plane; scalar_t__ exp_dist; int fraction; int ent; int endpos; int contents; int allsolid; } ;
typedef TYPE_5__ bsp_trace_t ;


 int FUNC_0 (TYPE_4__*,int ,int ,int ,int ,int ,int,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_2(bsp_trace_t *VAR_2, vec3_t VAR_3, vec3_t VAR_4, vec3_t VAR_5, vec3_t VAR_6, int VAR_7, int VAR_8)
{
 trace_t VAR_9;

 FUNC_0(&VAR_9, VAR_3, VAR_6, VAR_4, VAR_5, VAR_1, VAR_8, VAR_0);

 VAR_2->allsolid = VAR_9.allsolid;
 VAR_2->contents = VAR_9.contents;
 FUNC_1(VAR_9.endpos, VAR_2->endpos);
 VAR_2->ent = VAR_9.entityNum;
 VAR_2->fraction = VAR_9.fraction;
 VAR_2->exp_dist = 0;
 VAR_2->plane.dist = VAR_9.plane.dist;
 FUNC_1(VAR_9.plane.normal, VAR_2->plane.normal);
 VAR_2->plane.signbits = VAR_9.plane.signbits;
 VAR_2->plane.type = VAR_9.plane.type;
 VAR_2->sidenum = 0;
 VAR_2->startsolid = VAR_9.startsolid;
 VAR_2->surface.flags = VAR_9.surfaceFlags;
}
