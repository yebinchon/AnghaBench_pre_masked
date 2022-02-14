
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_7__ {scalar_t__* origin; float thinktime; int moveflags; int client; int entitynum; } ;
typedef TYPE_1__ bot_movestate_t ;
struct TYPE_8__ {scalar_t__* endpos; double fraction; scalar_t__ startsolid; } ;
typedef TYPE_2__ aas_trace_t ;
struct TYPE_10__ {scalar_t__ value; } ;
struct TYPE_9__ {scalar_t__ value; } ;


 TYPE_2__ FUNC_0 (scalar_t__*,scalar_t__*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__*,float) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__*,scalar_t__*) ;
 int FUNC_4 (scalar_t__*,float,scalar_t__*,scalar_t__*) ;
 int FUNC_5 (scalar_t__*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* VAR_4 ;
 TYPE_3__* VAR_5 ;

int FUNC_6(bot_movestate_t *VAR_6, vec3_t VAR_7, float VAR_8)
{
 vec3_t VAR_9, VAR_10, VAR_11;
 aas_trace_t VAR_12;

 FUNC_3(VAR_6->origin, VAR_11);
 VAR_11[2] += VAR_4->value;

 VAR_12 = FUNC_0(VAR_6->origin, VAR_11, VAR_1, VAR_6->entitynum);

 if (VAR_12.startsolid) return VAR_2;

 if (VAR_12.endpos[2] - VAR_6->origin[2] < VAR_5->value) return VAR_2;

 VAR_10[0] = VAR_7[0];
 VAR_10[1] = VAR_7[1];
 VAR_10[2] = 0;
 FUNC_5(VAR_10);
 FUNC_4(VAR_6->origin, VAR_6->thinktime * VAR_8 * 0.5, VAR_10, VAR_11);
 FUNC_3(VAR_12.endpos, VAR_9);
 VAR_11[2] = VAR_12.endpos[2];

 VAR_12 = FUNC_0(VAR_9, VAR_11, VAR_1, VAR_6->entitynum);

 if (VAR_12.startsolid) return VAR_2;

 FUNC_3(VAR_12.endpos, VAR_9);
 FUNC_3(VAR_12.endpos, VAR_11);
 VAR_11[2] = VAR_6->origin[2];

 VAR_12 = FUNC_0(VAR_9, VAR_11, VAR_1, VAR_6->entitynum);

 if (VAR_12.startsolid) return VAR_2;

 if (VAR_12.fraction >= 1.0) return VAR_2;

 if (VAR_12.endpos[2] - VAR_6->origin[2] < VAR_5->value) return VAR_2;

 FUNC_1(VAR_6->client);
 FUNC_2(VAR_6->client, VAR_10, VAR_8);
 VAR_6->moveflags |= VAR_0;

 return VAR_3;
}
