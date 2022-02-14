
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_10__ {int dist; int* normal; } ;
typedef TYPE_1__ aas_plane_t ;
struct TYPE_11__ {size_t areanum; int* start; int* end; int edgenum; int facenum; struct TYPE_11__* next; int traveltime; int traveltype; } ;
typedef TYPE_2__ aas_lreachability_t ;
struct TYPE_13__ {int rs_funcbob; } ;
struct TYPE_12__ {int (* Print ) (int ,char*) ;} ;


 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (int,int*,int*,int*,int *) ;
 TYPE_2__* FUNC_2 (int**,int,TYPE_1__*,int ) ;
 int FUNC_3 (int,char*,float*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int,char*,int*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int*,int*,int) ;
 int FUNC_8 (int*) ;
 int FUNC_9 (int*,int*,int*,int**,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int,char*,char*,int) ;
 int FUNC_12 (int,char*,int*) ;
 int FUNC_13 (char*,size_t,size_t,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_14 (int*,int*,int*) ;
 int FUNC_15 (int*,int*) ;
 int FUNC_16 (int*,int,int*,int*) ;
 int FUNC_17 (int*) ;
 int FUNC_18 (int*,double,int*) ;
 int FUNC_19 (int*,int ,int ,int) ;
 int FUNC_20 (int*,int*,int*) ;
 TYPE_5__ VAR_3 ;
 TYPE_2__** VAR_4 ;
 int FUNC_21 (char*) ;
 TYPE_3__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_22 (char*,char*) ;
 int FUNC_23 (int ,char*) ;
 int FUNC_24 (int ,char*) ;

void FUNC_25(void)
{
 int VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13, VAR_14, VAR_15[10];
 char VAR_16[VAR_0], VAR_17[VAR_0];
 vec3_t VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
 vec3_t VAR_23, VAR_24, VAR_25 = {0, 0, 0};
 vec3_t VAR_26[4], VAR_27[4], VAR_28;
 vec3_t VAR_29, VAR_30, VAR_31, VAR_32, VAR_33[10];
 float VAR_34;
 aas_plane_t VAR_35, VAR_36;
 aas_lreachability_t *VAR_37, *VAR_38, *VAR_39, *VAR_40, *VAR_41;
 aas_lreachability_t *VAR_42, *VAR_43;

 for (VAR_9 = FUNC_6(0); VAR_9; VAR_9 = FUNC_6(VAR_9))
 {
  if (!FUNC_11(VAR_9, "classname", VAR_16, VAR_0)) continue;
  if (FUNC_22(VAR_16, "func_bobbing")) continue;
  FUNC_3(VAR_9, "height", &VAR_34);
  if (!VAR_34) VAR_34 = 32;

  if (!FUNC_11(VAR_9, "model", VAR_17, VAR_0))
  {
   VAR_5.Print(VAR_1, "func_bobbing without model\n");
   continue;
  }

  VAR_11 = FUNC_21(VAR_17+1);
  if (VAR_11 <= 0)
  {
   VAR_5.Print(VAR_1, "func_bobbing with invalid model number\n");
   continue;
  }

  if (!FUNC_12(VAR_9, "origin", VAR_18))
   FUNC_19(VAR_18, 0, 0, 0);

  FUNC_1(VAR_11, VAR_25, VAR_23, VAR_24, ((void*)0));

  FUNC_14(VAR_23, VAR_18, VAR_23);
  FUNC_14(VAR_24, VAR_18, VAR_24);

  FUNC_14(VAR_23, VAR_24, VAR_28);
  FUNC_18(VAR_28, 0.5, VAR_28);
  FUNC_15(VAR_28, VAR_18);

  FUNC_15(VAR_18, VAR_19);
  FUNC_15(VAR_18, VAR_20);

  FUNC_5(VAR_9, "spawnflags", &VAR_10);

  if (VAR_10 & 1) VAR_12 = 0;
  else if (VAR_10 & 2) VAR_12 = 1;
  else VAR_12 = 2;

  VAR_20[VAR_12] -= VAR_34;
  VAR_19[VAR_12] += VAR_34;

  FUNC_13("funcbob model %d, start = {%1.1f, %1.1f, %1.1f} end = {%1.1f, %1.1f, %1.1f}\n",
     VAR_11, VAR_20[0], VAR_20[1], VAR_20[2], VAR_19[0], VAR_19[1], VAR_19[2]);
  for (VAR_13 = 0; VAR_13 < 4; VAR_13++)
  {
   FUNC_15(VAR_20, VAR_26[VAR_13]);
   VAR_26[VAR_13][2] += VAR_24[2] - VAR_28[2];
   VAR_26[VAR_13][2] += 24;
  }
  VAR_26[0][0] += VAR_24[0] - VAR_28[0];
  VAR_26[0][1] += VAR_24[1] - VAR_28[1];
  VAR_26[1][0] += VAR_24[0] - VAR_28[0];
  VAR_26[1][1] += VAR_23[1] - VAR_28[1];
  VAR_26[2][0] += VAR_23[0] - VAR_28[0];
  VAR_26[2][1] += VAR_23[1] - VAR_28[1];
  VAR_26[3][0] += VAR_23[0] - VAR_28[0];
  VAR_26[3][1] += VAR_24[1] - VAR_28[1];

  VAR_35.dist = VAR_26[0][2];
  FUNC_19(VAR_35.normal, 0, 0, 1);

  for (VAR_13 = 0; VAR_13 < 4; VAR_13++)
  {
   FUNC_15(VAR_19, VAR_27[VAR_13]);
   VAR_27[VAR_13][2] += VAR_24[2] - VAR_28[2];
   VAR_27[VAR_13][2] += 24;
  }
  VAR_27[0][0] += VAR_24[0] - VAR_28[0];
  VAR_27[0][1] += VAR_24[1] - VAR_28[1];
  VAR_27[1][0] += VAR_24[0] - VAR_28[0];
  VAR_27[1][1] += VAR_23[1] - VAR_28[1];
  VAR_27[2][0] += VAR_23[0] - VAR_28[0];
  VAR_27[2][1] += VAR_23[1] - VAR_28[1];
  VAR_27[3][0] += VAR_23[0] - VAR_28[0];
  VAR_27[3][1] += VAR_24[1] - VAR_28[1];

  VAR_36.dist = VAR_27[0][2];
  FUNC_19(VAR_36.normal, 0, 0, 1);
  FUNC_15(VAR_20, VAR_21);
  VAR_21[2] += VAR_24[2] - VAR_28[2] + 24;
  FUNC_15(VAR_19, VAR_22);
  VAR_22[2] += VAR_24[2] - VAR_28[2] + 24;

  if (!FUNC_8(VAR_21)) continue;
  if (!FUNC_8(VAR_22)) continue;

  for (VAR_13 = 0; VAR_13 < 2; VAR_13++)
  {

   if (VAR_13 == 0)
   {
    VAR_42 = FUNC_2(VAR_26, 4, &VAR_35, VAR_7);
    VAR_43 = FUNC_2(VAR_27, 4, &VAR_36, VAR_6);
   }
   else
   {
    VAR_42 = FUNC_2(VAR_27, 4, &VAR_36, VAR_7);
    VAR_43 = FUNC_2(VAR_26, 4, &VAR_35, VAR_6);
   }


   for (VAR_37 = VAR_42; VAR_37; VAR_37 = VAR_39)
   {
    VAR_39 = VAR_37->next;




    for (VAR_38 = VAR_43; VAR_38; VAR_38 = VAR_40)
    {
     VAR_40 = VAR_38->next;




     FUNC_13("funcbob reach from area %d to %d\n", VAR_37->areanum, VAR_38->areanum);


     if (VAR_13 == 0) FUNC_15(VAR_21, VAR_29);
     else FUNC_15(VAR_22, VAR_29);
     FUNC_20(VAR_37->start, VAR_29, VAR_32);
     VAR_32[2] = 0;
     FUNC_17(VAR_32);
     FUNC_15(VAR_37->start, VAR_30);
     FUNC_16(VAR_37->start, 1, VAR_32, VAR_30);
     VAR_30[2] += 1;
     FUNC_16(VAR_37->start, 16, VAR_32, VAR_31);
     VAR_31[2] += 1;

     VAR_14 = FUNC_9(VAR_30, VAR_31, VAR_15, VAR_33, 10);
     if (VAR_14 <= 0) continue;
     if (VAR_14 > 1) FUNC_15(VAR_33[1], VAR_37->start);
     else FUNC_15(VAR_31, VAR_37->start);

     if (!FUNC_8(VAR_37->start)) continue;
     if (!FUNC_8(VAR_38->end)) continue;

     VAR_41 = FUNC_0();
     VAR_41->areanum = VAR_38->areanum;
     if (VAR_13 == 0) VAR_41->edgenum = ((int)VAR_20[VAR_12] << 16) | ((int) VAR_19[VAR_12] & 0x0000ffff);
     else VAR_41->edgenum = ((int)VAR_19[VAR_12] << 16) | ((int) VAR_20[VAR_12] & 0x0000ffff);
     VAR_41->facenum = (VAR_10 << 16) | VAR_11;
     FUNC_15(VAR_37->start, VAR_41->start);
     FUNC_15(VAR_38->end, VAR_41->end);




     VAR_41->traveltype = VAR_2;
     VAR_41->traveltype |= FUNC_10(VAR_9);
     VAR_41->traveltime = VAR_3.rs_funcbob;
     VAR_8++;
     VAR_41->next = VAR_4[VAR_37->areanum];
     VAR_4[VAR_37->areanum] = VAR_41;

    }
   }
   for (VAR_37 = VAR_42; VAR_37; VAR_37 = VAR_39)
   {
    VAR_39 = VAR_37->next;
    FUNC_4(VAR_37);
   }
   for (VAR_38 = VAR_43; VAR_38; VAR_38 = VAR_40)
   {
    VAR_40 = VAR_38->next;
    FUNC_4(VAR_38);
   }

   if (!(VAR_10 & 1) && !(VAR_10 & 2)) break;
  }
 }
}
