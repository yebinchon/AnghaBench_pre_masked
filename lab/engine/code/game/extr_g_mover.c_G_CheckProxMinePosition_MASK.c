
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_9__ {int fraction; scalar_t__ startsolid; } ;
typedef TYPE_3__ trace_t ;
typedef int qboolean ;
struct TYPE_7__ {int trBase; } ;
struct TYPE_8__ {int number; TYPE_1__ pos; } ;
struct TYPE_10__ {TYPE_2__ s; int movedir; } ;
typedef TYPE_4__ gentity_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,int ,int *,int *,int ,int ,int ) ;

qboolean FUNC_2( gentity_t *VAR_3 ) {
 vec3_t VAR_4, VAR_5;
 trace_t VAR_6;

 FUNC_0(VAR_3->s.pos.trBase, 0.125, VAR_3->movedir, VAR_4);
 FUNC_0(VAR_3->s.pos.trBase, 2, VAR_3->movedir, VAR_5);
 FUNC_1( &VAR_6, VAR_4, ((void*)0), ((void*)0), VAR_5, VAR_3->s.number, VAR_0 );

 if (VAR_6.startsolid || VAR_6.fraction < 1)
  return VAR_1;

 return VAR_2;
}
