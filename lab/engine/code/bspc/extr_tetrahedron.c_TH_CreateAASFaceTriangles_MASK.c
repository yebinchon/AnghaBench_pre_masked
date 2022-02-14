
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_10__ {int front; } ;
typedef TYPE_1__ th_triangle_t ;
struct TYPE_11__ {int numedges; } ;
typedef TYPE_2__ aas_face_t ;
struct TYPE_12__ {TYPE_1__* triangles; } ;


 int FUNC_0 (TYPE_2__*,int,int ) ;
 int FUNC_1 (TYPE_1__**,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (int ) ;
 TYPE_3__ VAR_0 ;

th_triangle_t *FUNC_6(aas_face_t *VAR_1)
{
 int VAR_2, VAR_3, VAR_4[3], VAR_5;
 vec3_t VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 th_triangle_t *VAR_12, *VAR_13;

 VAR_13 = ((void*)0);

 for (VAR_2 = 0; VAR_2 < VAR_1->numedges; VAR_2++)
 {
  FUNC_0(VAR_1, (VAR_1->numedges + VAR_2-2)%VAR_1->numedges, VAR_6);
  FUNC_0(VAR_1, (VAR_1->numedges + VAR_2-1)%VAR_1->numedges, VAR_7);
  FUNC_0(VAR_1, (VAR_2 )%VAR_1->numedges, VAR_8);
  if (FUNC_2(VAR_8, VAR_6, VAR_7)) continue;
  FUNC_0(VAR_1, (VAR_2+1)%VAR_1->numedges, VAR_9);
  FUNC_0(VAR_1, (VAR_2+2)%VAR_1->numedges, VAR_10);
  if (FUNC_2(VAR_8, VAR_9, VAR_10)) continue;
  break;
 }

 if (VAR_2 < VAR_1->numedges)
 {

  VAR_3 = VAR_2;
  FUNC_0(VAR_1, VAR_3, VAR_6);
  VAR_4[0] = FUNC_5(VAR_6);
  for (VAR_2 = 1; VAR_2 < VAR_1->numedges-1; VAR_2++)
  {
   FUNC_0(VAR_1, (VAR_3+VAR_2 )%VAR_1->numedges, VAR_7);
   FUNC_0(VAR_1, (VAR_3+VAR_2+1)%VAR_1->numedges, VAR_8);
   VAR_4[1] = FUNC_5(VAR_7);
   VAR_4[2] = FUNC_5(VAR_8);
   VAR_5 = FUNC_3(VAR_4);
   VAR_12 = &VAR_0.triangles[VAR_5];
   VAR_12->front = -1;
   FUNC_1(&VAR_13, VAR_12);
  }
 }
 else
 {

  FUNC_4(VAR_1, VAR_11);

  VAR_4[0] = FUNC_5(VAR_11);
  for (VAR_2 = 0; VAR_2 < VAR_1->numedges; VAR_2++)
  {
   FUNC_0(VAR_1, (VAR_2 )%VAR_1->numedges, VAR_7);
   FUNC_0(VAR_1, (VAR_2+1)%VAR_1->numedges, VAR_8);
   if (FUNC_2(VAR_11, VAR_7, VAR_8)) continue;
   VAR_4[1] = FUNC_5(VAR_7);
   VAR_4[2] = FUNC_5(VAR_8);
   VAR_5 = FUNC_3(VAR_4);
   VAR_12 = &VAR_0.triangles[VAR_5];
   VAR_12->front = -1;
   FUNC_1(&VAR_13, VAR_12);
  }
 }
 return VAR_13;
}
