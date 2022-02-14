
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_4__ {int areanum; struct TYPE_4__* next_area; } ;
typedef TYPE_1__ aas_link_t ;


 TYPE_1__* FUNC_0 (int ,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(vec3_t VAR_0, vec3_t VAR_1, int *VAR_2, int VAR_3)
{
 aas_link_t *VAR_4, *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_0(VAR_0, VAR_1, -1);
 VAR_6 = 0;
 for (VAR_5 = VAR_4; VAR_5; VAR_5 = VAR_5->next_area)
 {
  VAR_2[VAR_6] = VAR_5->areanum;
  VAR_6++;
  if (VAR_6 >= VAR_3)
   break;
 }
 FUNC_1(VAR_4);
 return VAR_6;
}
