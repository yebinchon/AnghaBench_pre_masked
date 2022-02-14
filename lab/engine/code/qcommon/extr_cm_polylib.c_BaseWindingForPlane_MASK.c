
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int** p; int numpoints; } ;
typedef TYPE_1__ winding_t ;
typedef int vec_t ;
typedef int* vec3_t ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int*,int*,int*) ;
 int FUNC_3 (int*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int*,int*,int*) ;
 int FUNC_5 (int ,int*) ;
 int FUNC_6 (int*,int ,int*,int*) ;
 int FUNC_7 (int*,int*) ;
 int FUNC_8 (int*,int ,int*) ;
 int FUNC_9 (int*,int*,int*) ;
 int FUNC_10 (int) ;
 int VAR_2 ;

winding_t *FUNC_11 (vec3_t VAR_3, vec_t VAR_4)
{
 int VAR_5, VAR_6;
 vec_t VAR_7, VAR_8;
 vec3_t VAR_9, VAR_10, VAR_11;
 winding_t *VAR_12;



 VAR_7 = -VAR_1;
 VAR_6 = -1;
 for (VAR_5=0 ; VAR_5<3; VAR_5++)
 {
  VAR_8 = FUNC_10(VAR_3[VAR_5]);
  if (VAR_8 > VAR_7)
  {
   VAR_6 = VAR_5;
   VAR_7 = VAR_8;
  }
 }
 if (VAR_6==-1)
  FUNC_1 (VAR_0, "BaseWindingForPlane: no axis found");

 FUNC_5 (VAR_2, VAR_11);
 switch (VAR_6)
 {
 case 0:
 case 1:
  VAR_11[2] = 1;
  break;
 case 2:
  VAR_11[0] = 1;
  break;
 }

 VAR_8 = FUNC_3 (VAR_11, VAR_3);
 FUNC_6 (VAR_11, -VAR_8, VAR_3, VAR_11);
 FUNC_7(VAR_11, VAR_11);

 FUNC_8 (VAR_3, VAR_4, VAR_9);

 FUNC_2 (VAR_11, VAR_3, VAR_10);

 FUNC_8 (VAR_11, VAR_1, VAR_11);
 FUNC_8 (VAR_10, VAR_1, VAR_10);


 VAR_12 = FUNC_0 (4);

 FUNC_9 (VAR_9, VAR_10, VAR_12->p[0]);
 FUNC_4 (VAR_12->p[0], VAR_11, VAR_12->p[0]);

 FUNC_4 (VAR_9, VAR_10, VAR_12->p[1]);
 FUNC_4 (VAR_12->p[1], VAR_11, VAR_12->p[1]);

 FUNC_4 (VAR_9, VAR_10, VAR_12->p[2]);
 FUNC_9 (VAR_12->p[2], VAR_11, VAR_12->p[2]);

 FUNC_9 (VAR_9, VAR_10, VAR_12->p[3]);
 FUNC_9 (VAR_12->p[3], VAR_11, VAR_12->p[3]);

 VAR_12->numpoints = 4;

 return VAR_12;
}
