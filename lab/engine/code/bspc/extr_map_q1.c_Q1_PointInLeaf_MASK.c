
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vec_t ;
typedef int vec3_t ;
struct TYPE_5__ {scalar_t__ dist; int normal; } ;
typedef TYPE_1__ q1_dplane_t ;
struct TYPE_6__ {size_t planenum; int* children; } ;
typedef TYPE_2__ q1_dnode_t ;
typedef int q1_dleaf_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int * VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* VAR_2 ;

q1_dleaf_t *FUNC_1(int VAR_3, vec3_t VAR_4)
{
 int VAR_5;
 vec_t VAR_6;
 q1_dnode_t *VAR_7;
 q1_dplane_t *VAR_8;

 VAR_5 = VAR_3;
 while (VAR_5 >= 0)
 {
  VAR_7 = &VAR_1[VAR_5];
  VAR_8 = &VAR_2[VAR_7->planenum];
  VAR_6 = FUNC_0(VAR_4, VAR_8->normal) - VAR_8->dist;
  if (VAR_6 > 0)
   VAR_5 = VAR_7->children[0];
  else
   VAR_5 = VAR_7->children[1];
 }

 return &VAR_0[-VAR_5 - 1];
}
