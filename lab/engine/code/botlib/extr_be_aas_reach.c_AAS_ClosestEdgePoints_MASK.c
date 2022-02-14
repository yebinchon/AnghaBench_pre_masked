
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_4__ {float dist; int* normal; } ;
typedef TYPE_1__ aas_plane_t ;


 float FUNC_0 (int*,int*) ;
 scalar_t__ FUNC_1 (int*,int*,int*) ;
 int FUNC_2 (int*,int*) ;
 float FUNC_3 (int*,int*) ;
 int FUNC_4 (int*,int*,int*) ;
 int VAR_0 ;
 int VAR_1 ;

float FUNC_5(vec3_t VAR_2, vec3_t VAR_3, vec3_t VAR_4, vec3_t VAR_5,
       aas_plane_t *VAR_6, aas_plane_t *VAR_7,
       vec3_t VAR_8, vec3_t VAR_9,
       vec3_t VAR_10, vec3_t VAR_11, float VAR_12)
{
 vec3_t VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 float VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
 int VAR_26;


 FUNC_4(VAR_3, VAR_2, VAR_13);
 FUNC_4(VAR_5, VAR_4, VAR_14);

 VAR_13[2] = 0;
 VAR_14[2] = 0;






 if (VAR_14[0])
 {
  VAR_20 = VAR_14[1] / VAR_14[0];
  VAR_22 = VAR_4[1] - VAR_20 * VAR_4[0];

  VAR_15[0] = (FUNC_0(VAR_2, VAR_14) - (VAR_20 * VAR_14[0] + VAR_22 * VAR_14[1])) / VAR_14[0];
  VAR_15[1] = VAR_20 * VAR_15[0] + VAR_22;

  VAR_16[0] = (FUNC_0(VAR_3, VAR_14) - (VAR_20 * VAR_14[0] + VAR_22 * VAR_14[1])) / VAR_14[0];
  VAR_16[1] = VAR_20 * VAR_16[0] + VAR_22;
 }
 else
 {

  VAR_15[0] = VAR_4[0];
  VAR_15[1] = VAR_2[1];

  VAR_16[0] = VAR_4[0];
  VAR_16[1] = VAR_3[1];
 }

 if (VAR_13[0])
 {

  VAR_19 = VAR_13[1] / VAR_13[0];
  VAR_21 = VAR_2[1] - VAR_19 * VAR_2[0];

  VAR_17[0] = (FUNC_0(VAR_4, VAR_13) - (VAR_19 * VAR_13[0] + VAR_21 * VAR_13[1])) / VAR_13[0];
  VAR_17[1] = VAR_19 * VAR_17[0] + VAR_21;

  VAR_18[0] = (FUNC_0(VAR_5, VAR_13) - (VAR_19 * VAR_13[0] + VAR_21 * VAR_13[1])) / VAR_13[0];
  VAR_18[1] = VAR_19 * VAR_18[0] + VAR_21;
 }
 else
 {

  VAR_17[0] = VAR_2[0];
  VAR_17[1] = VAR_4[1];

  VAR_18[0] = VAR_2[0];
  VAR_18[1] = VAR_5[1];
 }

 VAR_15[2] = 0;
 VAR_16[2] = 0;
 VAR_17[2] = 0;
 VAR_18[2] = 0;

 VAR_15[2] = (VAR_7->dist - FUNC_0(VAR_7->normal, VAR_15)) / VAR_7->normal[2];
 VAR_16[2] = (VAR_7->dist - FUNC_0(VAR_7->normal, VAR_16)) / VAR_7->normal[2];
 VAR_17[2] = (VAR_6->dist - FUNC_0(VAR_6->normal, VAR_17)) / VAR_6->normal[2];
 VAR_18[2] = (VAR_6->dist - FUNC_0(VAR_6->normal, VAR_18)) / VAR_6->normal[2];

 VAR_26 = VAR_0;

 if (FUNC_1(VAR_15, VAR_4, VAR_5))
 {
  VAR_23 = FUNC_3(VAR_2, VAR_15);
  if (VAR_23 > VAR_12 - 0.5 && VAR_23 < VAR_12 + 0.5)
  {
   VAR_24 = FUNC_3(VAR_8, VAR_2);
   VAR_25 = FUNC_3(VAR_10, VAR_2);
   if (VAR_24 > VAR_25)
   {
    if (VAR_24 > FUNC_3(VAR_8, VAR_10)) FUNC_2(VAR_2, VAR_10);
   }
   else
   {
    if (VAR_25 > FUNC_3(VAR_8, VAR_10)) FUNC_2(VAR_2, VAR_8);
   }
   VAR_24 = FUNC_3(VAR_9, VAR_15);
   VAR_25 = FUNC_3(VAR_11, VAR_15);
   if (VAR_24 > VAR_25)
   {
    if (VAR_24 > FUNC_3(VAR_9, VAR_11)) FUNC_2(VAR_15, VAR_11);
   }
   else
   {
    if (VAR_25 > FUNC_3(VAR_9, VAR_11)) FUNC_2(VAR_15, VAR_9);
   }
  }
  else if (VAR_23 < VAR_12)
  {
   VAR_12 = VAR_23;
   FUNC_2(VAR_2, VAR_8);
   FUNC_2(VAR_2, VAR_10);
   FUNC_2(VAR_15, VAR_9);
   FUNC_2(VAR_15, VAR_11);
  }
  VAR_26 = VAR_1;
 }
 if (FUNC_1(VAR_16, VAR_4, VAR_5))
 {
  VAR_23 = FUNC_3(VAR_3, VAR_16);
  if (VAR_23 > VAR_12 - 0.5 && VAR_23 < VAR_12 + 0.5)
  {
   VAR_24 = FUNC_3(VAR_8, VAR_3);
   VAR_25 = FUNC_3(VAR_10, VAR_3);
   if (VAR_24 > VAR_25)
   {
    if (VAR_24 > FUNC_3(VAR_8, VAR_10)) FUNC_2(VAR_3, VAR_10);
   }
   else
   {
    if (VAR_25 > FUNC_3(VAR_8, VAR_10)) FUNC_2(VAR_3, VAR_8);
   }
   VAR_24 = FUNC_3(VAR_9, VAR_16);
   VAR_25 = FUNC_3(VAR_11, VAR_16);
   if (VAR_24 > VAR_25)
   {
    if (VAR_24 > FUNC_3(VAR_9, VAR_11)) FUNC_2(VAR_16, VAR_11);
   }
   else
   {
    if (VAR_25 > FUNC_3(VAR_9, VAR_11)) FUNC_2(VAR_16, VAR_9);
   }
  }
  else if (VAR_23 < VAR_12)
  {
   VAR_12 = VAR_23;
   FUNC_2(VAR_3, VAR_8);
   FUNC_2(VAR_3, VAR_10);
   FUNC_2(VAR_16, VAR_9);
   FUNC_2(VAR_16, VAR_11);
  }
  VAR_26 = VAR_1;
 }
 if (FUNC_1(VAR_17, VAR_2, VAR_3))
 {
  VAR_23 = FUNC_3(VAR_4, VAR_17);
  if (VAR_23 > VAR_12 - 0.5 && VAR_23 < VAR_12 + 0.5)
  {
   VAR_24 = FUNC_3(VAR_8, VAR_17);
   VAR_25 = FUNC_3(VAR_10, VAR_17);
   if (VAR_24 > VAR_25)
   {
    if (VAR_24 > FUNC_3(VAR_8, VAR_10)) FUNC_2(VAR_17, VAR_10);
   }
   else
   {
    if (VAR_25 > FUNC_3(VAR_8, VAR_10)) FUNC_2(VAR_17, VAR_8);
   }
   VAR_24 = FUNC_3(VAR_9, VAR_4);
   VAR_25 = FUNC_3(VAR_11, VAR_4);
   if (VAR_24 > VAR_25)
   {
    if (VAR_24 > FUNC_3(VAR_9, VAR_11)) FUNC_2(VAR_4, VAR_11);
   }
   else
   {
    if (VAR_25 > FUNC_3(VAR_9, VAR_11)) FUNC_2(VAR_4, VAR_9);
   }
  }
  else if (VAR_23 < VAR_12)
  {
   VAR_12 = VAR_23;
   FUNC_2(VAR_17, VAR_8);
   FUNC_2(VAR_17, VAR_10);
   FUNC_2(VAR_4, VAR_9);
   FUNC_2(VAR_4, VAR_11);
  }
  VAR_26 = VAR_1;
 }
 if (FUNC_1(VAR_18, VAR_2, VAR_3))
 {
  VAR_23 = FUNC_3(VAR_5, VAR_18);
  if (VAR_23 > VAR_12 - 0.5 && VAR_23 < VAR_12 + 0.5)
  {
   VAR_24 = FUNC_3(VAR_8, VAR_18);
   VAR_25 = FUNC_3(VAR_10, VAR_18);
   if (VAR_24 > VAR_25)
   {
    if (VAR_24 > FUNC_3(VAR_8, VAR_10)) FUNC_2(VAR_18, VAR_10);
   }
   else
   {
    if (VAR_25 > FUNC_3(VAR_8, VAR_10)) FUNC_2(VAR_18, VAR_8);
   }
   VAR_24 = FUNC_3(VAR_9, VAR_5);
   VAR_25 = FUNC_3(VAR_11, VAR_5);
   if (VAR_24 > VAR_25)
   {
    if (VAR_24 > FUNC_3(VAR_9, VAR_11)) FUNC_2(VAR_5, VAR_11);
   }
   else
   {
    if (VAR_25 > FUNC_3(VAR_9, VAR_11)) FUNC_2(VAR_5, VAR_9);
   }
  }
  else if (VAR_23 < VAR_12)
  {
   VAR_12 = VAR_23;
   FUNC_2(VAR_18, VAR_8);
   FUNC_2(VAR_18, VAR_10);
   FUNC_2(VAR_5, VAR_9);
   FUNC_2(VAR_5, VAR_11);
  }
  VAR_26 = VAR_1;
 }


 if (!VAR_26)
 {
  VAR_23 = FUNC_3(VAR_2, VAR_4);
  if (VAR_23 < VAR_12)
  {
   VAR_12 = VAR_23;
   FUNC_2(VAR_2, VAR_8);
   FUNC_2(VAR_2, VAR_10);
   FUNC_2(VAR_4, VAR_9);
   FUNC_2(VAR_4, VAR_11);
  }
  VAR_23 = FUNC_3(VAR_2, VAR_5);
  if (VAR_23 < VAR_12)
  {
   VAR_12 = VAR_23;
   FUNC_2(VAR_2, VAR_8);
   FUNC_2(VAR_2, VAR_10);
   FUNC_2(VAR_5, VAR_9);
   FUNC_2(VAR_5, VAR_11);
  }
  VAR_23 = FUNC_3(VAR_3, VAR_4);
  if (VAR_23 < VAR_12)
  {
   VAR_12 = VAR_23;
   FUNC_2(VAR_3, VAR_8);
   FUNC_2(VAR_3, VAR_10);
   FUNC_2(VAR_4, VAR_9);
   FUNC_2(VAR_4, VAR_11);
  }
  VAR_23 = FUNC_3(VAR_3, VAR_5);
  if (VAR_23 < VAR_12)
  {
   VAR_12 = VAR_23;
   FUNC_2(VAR_3, VAR_8);
   FUNC_2(VAR_3, VAR_10);
   FUNC_2(VAR_5, VAR_9);
   FUNC_2(VAR_5, VAR_11);
  }
 }
 return VAR_12;
}
