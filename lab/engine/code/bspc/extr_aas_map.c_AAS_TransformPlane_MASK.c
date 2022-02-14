
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_2__ {float dist; int normal; } ;


 int FUNC_0 (int ,float**) ;
 float FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,float) ;
 int FUNC_3 (int ,float**) ;
 int FUNC_4 (int ,int ) ;
 TYPE_1__* VAR_0 ;

int FUNC_5(int VAR_1, vec3_t VAR_2, vec3_t VAR_3)
{
 float VAR_4, VAR_5[3][3];
 vec3_t VAR_6;


 FUNC_4(VAR_0[VAR_1].normal, VAR_6);
 FUNC_0(VAR_3, VAR_5);
 FUNC_3(VAR_6, VAR_5);
 VAR_4 = VAR_0[VAR_1].dist + FUNC_1(VAR_6, VAR_2);
 return FUNC_2(VAR_6, VAR_4);
}
