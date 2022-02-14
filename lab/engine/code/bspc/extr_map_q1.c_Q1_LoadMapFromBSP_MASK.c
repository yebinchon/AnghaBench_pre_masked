
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ numbrushes; int firstbrush; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 () ;
 char* FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (char*) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,char*) ;

void FUNC_9(char *VAR_9, int VAR_10, int VAR_11)
{
 int VAR_12, VAR_13;
 char *VAR_14, *VAR_15;

 FUNC_1("-- Q1_LoadMapFromBSP --\n");

 VAR_3 = VAR_0;

 FUNC_7("loading map from %s at %d\n", VAR_9, VAR_10);

 FUNC_3(VAR_9, VAR_10, VAR_11);

 VAR_8 = 0;



 FUNC_4();

 FUNC_0(VAR_5, VAR_4);

 FUNC_7("creating Quake1 brushes\n");
 if (VAR_2) FUNC_7("creating minimum number of brushes\n");
 else FUNC_7("placing textures correctly\n");

 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++)
 {
  VAR_1[VAR_12].firstbrush = VAR_7;
  VAR_1[VAR_12].numbrushes = 0;

  VAR_15 = FUNC_5(&VAR_1[VAR_12], "classname");
  if (VAR_15 && !FUNC_8(VAR_15, "worldspawn"))
  {
   VAR_13 = 0;
  }
  else
  {

   VAR_14 = FUNC_5(&VAR_1[VAR_12], "model");
   if (!VAR_14 || *VAR_14 != '*') continue;
   VAR_14++;
   VAR_13 = FUNC_6(VAR_14);
  }

  FUNC_2(&VAR_1[VAR_12], VAR_13);
 }

 FUNC_7("%5d map brushes\n", VAR_7);
 FUNC_7("%5d clip brushes\n", VAR_8);
}
