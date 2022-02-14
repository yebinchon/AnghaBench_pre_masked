
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_9__ {int* mins; int* maxs; } ;
typedef TYPE_1__ q1_dnode_t ;
struct TYPE_10__ {int* mins; int* maxs; } ;
typedef TYPE_2__ bspbrush_t ;
struct TYPE_11__ {size_t* headnode; } ;


 int FUNC_0 (int*,int *,int *) ;
 TYPE_2__* FUNC_1 (int*,int*) ;
 int FUNC_2 (char*,int ,int ,int ,int ,int ,int ) ;
 TYPE_2__* FUNC_3 (TYPE_2__*,size_t) ;
 int FUNC_4 (int*,int*) ;
 int * VAR_0 ;
 int * VAR_1 ;
 TYPE_4__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (char*,...) ;

bspbrush_t *FUNC_6(int VAR_5)
{
 bspbrush_t *VAR_6;
 bspbrush_t *VAR_7;
 q1_dnode_t *VAR_8;
 vec3_t VAR_9, VAR_10;
 int VAR_11;


 VAR_8 = &VAR_3[VAR_2[VAR_5].headnode[0]];

 FUNC_4(VAR_8->mins, VAR_9);
 FUNC_4(VAR_8->maxs, VAR_10);

 for (VAR_11 = 0; VAR_11 < 3; VAR_11++)
 {
  VAR_9[VAR_11] -= 8;
  VAR_10[VAR_11] += 8;
 }

 FUNC_0(VAR_9, VAR_1, VAR_0);
 FUNC_0(VAR_10, VAR_1, VAR_0);

 if (!VAR_5)
 {
  FUNC_2("brush size: %5.0f,%5.0f,%5.0f to %5.0f,%5.0f,%5.0f\n",
       VAR_1[0], VAR_1[1], VAR_1[2],
       VAR_0[0], VAR_0[1], VAR_0[2]);
 }

 VAR_7 = FUNC_1(VAR_9, VAR_10);
 FUNC_4(VAR_9, VAR_7->mins);
 FUNC_4(VAR_10, VAR_7->maxs);






 VAR_6 = FUNC_3(VAR_7, VAR_2[VAR_5].headnode[0]);





 return VAR_6;
}
