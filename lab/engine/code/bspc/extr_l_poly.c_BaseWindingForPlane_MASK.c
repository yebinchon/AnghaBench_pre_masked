
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
 int VAR_0 ;
 int FUNC_1 (int*,int*,int*) ;
 int FUNC_2 (int*,int*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int*,int*,int*) ;
 int FUNC_5 (int ,int*) ;
 int FUNC_6 (int*,int ,int*,int*) ;
 int FUNC_7 (int*) ;
 int FUNC_8 (int*,int ,int*) ;
 int FUNC_9 (int*,int*,int*) ;
 int FUNC_10 (int) ;
 int VAR_1 ;

winding_t *FUNC_11 (vec3_t VAR_2, vec_t VAR_3)
{
 int VAR_4, VAR_5;
 vec_t VAR_6, VAR_7;
 vec3_t VAR_8, VAR_9, VAR_10;
 winding_t *VAR_11;



 VAR_6 = -VAR_0;
 VAR_5 = -1;
 for (VAR_4=0 ; VAR_4<3; VAR_4++)
 {
  VAR_7 = FUNC_10(VAR_2[VAR_4]);
  if (VAR_7 > VAR_6)
  {
   VAR_5 = VAR_4;
   VAR_6 = VAR_7;
  }
 }
 if (VAR_5==-1)
  FUNC_3 ("BaseWindingForPlane: no axis found");

 FUNC_5 (VAR_1, VAR_10);
 switch (VAR_5)
 {
 case 0:
 case 1:
  VAR_10[2] = 1;
  break;
 case 2:
  VAR_10[0] = 1;
  break;
 }

 VAR_7 = FUNC_2 (VAR_10, VAR_2);
 FUNC_6 (VAR_10, -VAR_7, VAR_2, VAR_10);
 FUNC_7 (VAR_10);

 FUNC_8 (VAR_2, VAR_3, VAR_8);

 FUNC_1 (VAR_10, VAR_2, VAR_9);

 FUNC_8 (VAR_10, VAR_0, VAR_10);
 FUNC_8 (VAR_9, VAR_0, VAR_9);


 VAR_11 = FUNC_0 (4);

 FUNC_9 (VAR_8, VAR_9, VAR_11->p[0]);
 FUNC_4 (VAR_11->p[0], VAR_10, VAR_11->p[0]);

 FUNC_4 (VAR_8, VAR_9, VAR_11->p[1]);
 FUNC_4 (VAR_11->p[1], VAR_10, VAR_11->p[1]);

 FUNC_4 (VAR_8, VAR_9, VAR_11->p[2]);
 FUNC_9 (VAR_11->p[2], VAR_10, VAR_11->p[2]);

 FUNC_9 (VAR_8, VAR_9, VAR_11->p[3]);
 FUNC_9 (VAR_11->p[3], VAR_10, VAR_11->p[3]);

 VAR_11->numpoints = 4;

 return VAR_11;
}
