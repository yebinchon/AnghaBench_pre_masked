
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int,int) ;
 int VAR_0 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int*,int,int) ;

void FUNC_6(int VAR_1, int VAR_2, int *VAR_3,
   int *VAR_4, int *VAR_5)
{
 int *VAR_6, *VAR_7;
 int *VAR_8, VAR_9 = 0, VAR_10, *VAR_11, *VAR_12;
 int VAR_13, VAR_14, VAR_15;

 if (VAR_1 < 2) {
  FUNC_5(VAR_4, 0, sizeof(int) * VAR_1);
  FUNC_5(VAR_5, 0, sizeof(int) * VAR_2);
  return;
 }

 FUNC_5(VAR_4, -1, sizeof(int) * VAR_1);
 FUNC_5(VAR_5, -1, sizeof(int) * VAR_2);
 FUNC_0(VAR_6, VAR_1);


 for (VAR_14 = VAR_1 - 1; VAR_14 >= 0; VAR_14--) {
  int VAR_16 = 0;

  for (VAR_13 = 1; VAR_13 < VAR_2; VAR_13++)
   if (FUNC_2(VAR_14, VAR_16) > FUNC_2(VAR_14, VAR_13))
    VAR_16 = VAR_13;
  VAR_6[VAR_14] = FUNC_2(VAR_14, VAR_16);
  if (VAR_5[VAR_16] == -1) {

   VAR_5[VAR_16] = VAR_14;
   VAR_4[VAR_14] = VAR_16;
  } else {
   if (VAR_5[VAR_16] >= 0)
    VAR_5[VAR_16] = -2 - VAR_5[VAR_16];
   VAR_4[VAR_14] = -1;
  }
 }


 FUNC_0(VAR_8, VAR_2);
 for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++) {
  int VAR_17 = VAR_5[VAR_13];
  if (VAR_17 == -1)
   VAR_8[VAR_9++] = VAR_13;
  else if (VAR_17 < -1)
   VAR_5[VAR_13] = -2 - VAR_17;
  else {
   int VAR_18 = FUNC_2(!VAR_17, VAR_13) - VAR_6[!VAR_17];
   for (VAR_14 = 1; VAR_14 < VAR_1; VAR_14++)
    if (VAR_14 != VAR_17 && VAR_18 > FUNC_2(VAR_14, VAR_13) - VAR_6[VAR_14])
     VAR_18 = FUNC_2(VAR_14, VAR_13) - VAR_6[VAR_14];
   VAR_6[VAR_17] -= VAR_18;
  }
 }

 if (VAR_9 ==
     (VAR_1 < VAR_2 ? VAR_2 - VAR_1 : 0)) {
  FUNC_4(VAR_6);
  FUNC_4(VAR_8);
  return;
 }


 for (VAR_15 = 0; VAR_15 < 2; VAR_15++) {
  int VAR_19 = 0;

  VAR_10 = VAR_9;
  VAR_9 = 0;
  while (VAR_19 < VAR_10) {
   int VAR_20, VAR_21;
   int VAR_22 = 0, VAR_23, VAR_24;

   VAR_13 = VAR_8[VAR_19++];
   VAR_20 = FUNC_2(VAR_22, VAR_13) - VAR_6[VAR_22];
   VAR_23 = -1;
   VAR_21 = VAR_0;
   for (VAR_14 = 1; VAR_14 < VAR_1; VAR_14++) {
    int VAR_25 = FUNC_2(VAR_14, VAR_13) - VAR_6[VAR_14];
    if (VAR_21 > VAR_25) {
     if (VAR_20 < VAR_25) {
      VAR_21 = VAR_25;
      VAR_23 = VAR_14;
     } else {
      VAR_21 = VAR_20;
      VAR_20 = VAR_25;
      VAR_23 = VAR_22;
      VAR_22 = VAR_14;
     }
    }
   }
   if (VAR_23 < 0) {
    VAR_23 = VAR_22;
    VAR_21 = VAR_20;
   }

   VAR_24 = VAR_4[VAR_22];
   if (VAR_20 < VAR_21)
    VAR_6[VAR_22] -= VAR_21 - VAR_20;
   else if (VAR_24 >= 0) {
    VAR_22 = VAR_23;
    VAR_24 = VAR_4[VAR_22];
   }

   if (VAR_24 >= 0) {
    if (VAR_20 < VAR_21)
     VAR_8[--VAR_19] = VAR_24;
    else
     VAR_8[VAR_9++] = VAR_24;
   }
   VAR_5[VAR_13] = VAR_22;
   VAR_4[VAR_22] = VAR_13;
  }
 }


 VAR_10 = VAR_9;
 FUNC_0(VAR_7, VAR_1);
 FUNC_0(VAR_11, VAR_1);
 FUNC_0(VAR_12, VAR_1);
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  int VAR_26 = VAR_8[VAR_9], VAR_27 = 0, VAR_28 = 0, VAR_29, VAR_30;
  int VAR_31, VAR_32, VAR_33;

  for (VAR_14 = 0; VAR_14 < VAR_1; VAR_14++) {
   VAR_7[VAR_14] = FUNC_2(VAR_14, VAR_26) - VAR_6[VAR_14];
   VAR_11[VAR_14] = VAR_26;
   VAR_12[VAR_14] = VAR_14;
  }

  VAR_14 = -1;
  do {
   VAR_29 = VAR_27;
   VAR_31 = VAR_7[VAR_12[VAR_28++]];
   for (VAR_30 = VAR_28; VAR_30 < VAR_1; VAR_30++) {
    VAR_14 = VAR_12[VAR_30];
    VAR_32 = VAR_7[VAR_14];
    if (VAR_32 <= VAR_31) {
     if (VAR_32 < VAR_31) {
      VAR_28 = VAR_27;
      VAR_31 = VAR_32;
     }
     VAR_12[VAR_30] = VAR_12[VAR_28];
     VAR_12[VAR_28++] = VAR_14;
    }
   }
   for (VAR_30 = VAR_27; VAR_30 < VAR_28; VAR_30++)
    if (VAR_4[VAR_12[VAR_30]] == -1)
     goto update;


   do {
    int VAR_34 = VAR_12[VAR_27++];

    VAR_13 = VAR_4[VAR_34];
    VAR_33 = FUNC_2(VAR_34, VAR_13) - VAR_6[VAR_34] - VAR_31;
    for (VAR_30 = VAR_28; VAR_30 < VAR_1; VAR_30++) {
     VAR_14 = VAR_12[VAR_30];
     VAR_32 = FUNC_2(VAR_14, VAR_13) - VAR_6[VAR_14] - VAR_33;
     if (VAR_32 < VAR_7[VAR_14]) {
      VAR_7[VAR_14] = VAR_32;
      VAR_11[VAR_14] = VAR_13;
      if (VAR_32 == VAR_31) {
       if (VAR_4[VAR_14] == -1)
        goto update;
       VAR_12[VAR_30] = VAR_12[VAR_28];
       VAR_12[VAR_28++] = VAR_14;
      }
     }
    }
   } while (VAR_27 != VAR_28);
  } while (VAR_27 == VAR_28);

update:

  for (VAR_30 = 0; VAR_30 < VAR_29; VAR_30++) {
   int VAR_35 = VAR_12[VAR_30];
   VAR_6[VAR_35] += VAR_7[VAR_35] - VAR_31;
  }


  do {
   if (VAR_14 < 0)
    FUNC_1("negative j: %d", VAR_14);
   VAR_13 = VAR_11[VAR_14];
   VAR_4[VAR_14] = VAR_13;
   FUNC_3(VAR_14, VAR_5[VAR_13]);
  } while (VAR_26 != VAR_13);
 }

 FUNC_4(VAR_12);
 FUNC_4(VAR_11);
 FUNC_4(VAR_7);
 FUNC_4(VAR_6);
 FUNC_4(VAR_8);
}
