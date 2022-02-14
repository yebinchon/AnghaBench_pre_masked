
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_3__ {int color; int numPoints; int points; int inuse; } ;
typedef TYPE_1__ bot_debugpoly_t ;


 int FUNC_0 (int ,int *,int) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(int VAR_2, int VAR_3, int VAR_4, vec3_t *VAR_5) {
 bot_debugpoly_t *VAR_6;

 if (!VAR_0) return;
 VAR_6 = &VAR_0[VAR_2];
 VAR_6->inuse = VAR_1;
 VAR_6->color = VAR_3;
 VAR_6->numPoints = VAR_4;
 FUNC_0(VAR_6->points, VAR_5, VAR_4 * sizeof(vec3_t));
}
