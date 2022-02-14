
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int * vec3_t ;
typedef int spawnVarChars ;
typedef scalar_t__ qboolean ;
struct TYPE_6__ {char* name; float parallaxRadius; int origin; } ;
typedef TYPE_1__ cubemap_t ;
struct TYPE_8__ {TYPE_1__* (* Hunk_Alloc ) (int,int ) ;} ;
struct TYPE_7__ {int numCubemaps; TYPE_1__* cubemaps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*,int) ;
 scalar_t__ FUNC_2 (char*,int,int*,char***) ;
 int FUNC_3 (int *,int ) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_4__ VAR_5 ;
 int FUNC_5 (char*,char*,float*,...) ;
 TYPE_1__* FUNC_6 (int,int ) ;
 TYPE_2__ VAR_6 ;

void FUNC_7(char *VAR_7)
{
 char VAR_8[2048];
 int VAR_9;
 char *VAR_10[VAR_1][2];
 int VAR_11 = 0;


 VAR_11 = 0;
 while(FUNC_2(VAR_8, sizeof(VAR_8), &VAR_9, VAR_10))
 {
  int VAR_12;

  for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++)
  {
   if (!FUNC_0(VAR_10[VAR_12][0], "classname") && !FUNC_0(VAR_10[VAR_12][1], VAR_7))
    VAR_11++;
  }
 }

 if (!VAR_11)
  return;

 VAR_6.numCubemaps = VAR_11;
 VAR_6.cubemaps = VAR_5.Hunk_Alloc(VAR_6.numCubemaps * sizeof(*VAR_6.cubemaps), VAR_2);
 FUNC_4(VAR_6.cubemaps, 0, VAR_6.numCubemaps * sizeof(*VAR_6.cubemaps));

 VAR_11 = 0;
 while(FUNC_2(VAR_8, sizeof(VAR_8), &VAR_9, VAR_10))
 {
  int VAR_13;
  char VAR_14[VAR_0];
  qboolean VAR_15 = VAR_3;
  qboolean VAR_16 = VAR_3;
  vec3_t VAR_17;
  float VAR_18 = 1000.0f;

  VAR_14[0] = '\0';
  for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++)
  {
   if (!FUNC_0(VAR_10[VAR_13][0], "classname") && !FUNC_0(VAR_10[VAR_13][1], VAR_7))
    VAR_15 = VAR_4;

   if (!FUNC_0(VAR_10[VAR_13][0], "name"))
    FUNC_1(VAR_14, VAR_10[VAR_13][1], VAR_0);

   if (!FUNC_0(VAR_10[VAR_13][0], "origin"))
   {
    FUNC_5(VAR_10[VAR_13][1], "%f %f %f", &VAR_17[0], &VAR_17[1], &VAR_17[2]);
    VAR_16 = VAR_4;
   }
   else if (!FUNC_0(VAR_10[VAR_13][0], "radius"))
   {
    FUNC_5(VAR_10[VAR_13][1], "%f", &VAR_18);
   }
  }

  if (VAR_15 && VAR_16)
  {
   cubemap_t *VAR_19 = &VAR_6.cubemaps[VAR_11];
   FUNC_1(VAR_19->name, VAR_14, VAR_0);
   FUNC_3(VAR_17, VAR_19->origin);
   VAR_19->parallaxRadius = VAR_18;
   VAR_11++;
  }
 }
}
