
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int * vec3_t ;
struct TYPE_3__ {int waterBubbleShader; } ;
struct TYPE_4__ {TYPE_1__ media; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int *,int,float,int) ;
 int FUNC_2 (int ,int *,int *,int,float,int) ;
 char* FUNC_3 (char**) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 TYPE_2__ VAR_0 ;

int FUNC_6 (int VAR_1)
{

 char *VAR_2;
 char *VAR_3;
 int VAR_4;
 vec3_t VAR_5, VAR_6;
 int VAR_7;
 float VAR_8 = 0;
 int VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_2 = (char *) FUNC_0 (VAR_1);
 if (!VAR_2[0])
  return (0);


 VAR_3 = FUNC_3 (&VAR_2);
 VAR_4 = FUNC_5 (VAR_3);

 if (VAR_4 == 1)
  VAR_8 = 128;
 else if (VAR_4 == 2)
  VAR_8 = 64;
 else if (VAR_4 == 3)
  VAR_8 = 32;
 else if (VAR_4 == 0)
  VAR_8 = 256;
 else if (VAR_4 == 4)
  VAR_8 = 8;
 else if (VAR_4 == 5)
  VAR_8 = 16;
 else if (VAR_4 == 6)
  VAR_8 = 32;
 else if (VAR_4 == 7)
  VAR_8 = 64;


 for (VAR_7=0; VAR_7<3; VAR_7++)
 {
  VAR_3 = FUNC_3 (&VAR_2);
  VAR_5[VAR_7] = FUNC_4 (VAR_3);
 }

 for (VAR_7=0; VAR_7<3; VAR_7++)
 {
  VAR_3 = FUNC_3 (&VAR_2);
  VAR_6[VAR_7] = FUNC_4 (VAR_3);
 }

 VAR_3 = FUNC_3 (&VAR_2);
 VAR_10 = FUNC_5 (VAR_3);

 VAR_3 = FUNC_3 (&VAR_2);
 VAR_9 = FUNC_5 (VAR_3);

 VAR_3 = FUNC_3 (&VAR_2);
 VAR_11 = FUNC_5 (VAR_3);

 for (VAR_7=0; VAR_7<VAR_10; VAR_7++)
 {
  if (VAR_4 >= 4)
   FUNC_1 (VAR_0.media.waterBubbleShader, VAR_5, VAR_6, VAR_9, VAR_8, VAR_11);
  else
   FUNC_2 (VAR_0.media.waterBubbleShader, VAR_5, VAR_6, VAR_9, VAR_8, VAR_11);
 }

 return (1);
}
