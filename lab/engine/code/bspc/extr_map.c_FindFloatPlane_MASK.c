
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vec_t ;
typedef int vec3_t ;
struct TYPE_5__ {struct TYPE_5__* hash_chain; } ;
typedef TYPE_1__ plane_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_1__* VAR_1 ;
 int * VAR_2 ;
 TYPE_1__** VAR_3 ;

int FUNC_4 (vec3_t VAR_4, vec_t VAR_5)
{
 int VAR_6;
 plane_t *VAR_7;
 int VAR_8, VAR_9;

 FUNC_2 (VAR_4, &VAR_5);
 VAR_8 = (int)FUNC_3(VAR_5) / 8;
 VAR_8 &= (VAR_0-1);


 for (VAR_6 = -1; VAR_6 <= 1; VAR_6++)
 {
  VAR_9 = (VAR_8+VAR_6)&(VAR_0-1);
  for (VAR_7 = VAR_3[VAR_9]; VAR_7; VAR_7 = VAR_7->hash_chain)
  {
   if (FUNC_1(VAR_7, VAR_4, VAR_5))
   {
    VAR_2[VAR_7-VAR_1]++;
    return VAR_7 - VAR_1;
   }
  }
 }
 VAR_6 = FUNC_0 (VAR_4, VAR_5);
 VAR_2[VAR_6]++;
 return VAR_6;
}
