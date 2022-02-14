
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vec4_t ;
typedef float* vec3_t ;
struct TYPE_10__ {int ofsXyzNormals; int numVerts; } ;
typedef TYPE_3__ md3Surface_t ;
typedef int byte ;
struct TYPE_13__ {TYPE_2__* currentEntity; } ;
struct TYPE_12__ {float** xyz; size_t numVertexes; float** normal; } ;
struct TYPE_11__ {float* sinTable; } ;
struct TYPE_8__ {int frame; int oldframe; } ;
struct TYPE_9__ {TYPE_1__ e; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 double VAR_2 ;
 int FUNC_0 (int *,int) ;
 TYPE_6__ VAR_3 ;
 TYPE_5__ VAR_4 ;
 TYPE_4__ VAR_5 ;

__attribute__((used)) static void FUNC_1(md3Surface_t *VAR_6, float VAR_7)
{
 short *VAR_8, *VAR_9, *VAR_10, *VAR_11;
 float *VAR_12, *VAR_13;
 float VAR_14, VAR_15;
 float VAR_16, VAR_17;
 int VAR_18;
 unsigned VAR_19, VAR_20;
 int VAR_21;

 VAR_12 = VAR_4.xyz[VAR_4.numVertexes];
 VAR_13 = VAR_4.normal[VAR_4.numVertexes];

 VAR_9 = (short *)((byte *)VAR_6 + VAR_6->ofsXyzNormals)
  + (VAR_3.currentEntity->e.frame * VAR_6->numVerts * 4);
 VAR_11 = VAR_9 + 3;

 VAR_15 = VAR_2 * (1.0 - VAR_7);
 VAR_17 = 1.0 - VAR_7;

 VAR_21 = VAR_6->numVerts;

 if ( VAR_7 == 0 ) {



  for (VAR_18=0 ; VAR_18 < VAR_21 ; VAR_18++,
   VAR_9 += 4, VAR_11 += 4,
   VAR_12 += 4, VAR_13 += 4)
  {

   VAR_12[0] = VAR_9[0] * VAR_15;
   VAR_12[1] = VAR_9[1] * VAR_15;
   VAR_12[2] = VAR_9[2] * VAR_15;

   VAR_19 = ( VAR_11[0] >> 8 ) & 0xff;
   VAR_20 = ( VAR_11[0] & 0xff );
   VAR_19 *= (VAR_1/256);
   VAR_20 *= (VAR_1/256);





   VAR_13[0] = VAR_5.sinTable[(VAR_19+(VAR_1/4))&VAR_0] * VAR_5.sinTable[VAR_20];
   VAR_13[1] = VAR_5.sinTable[VAR_19] * VAR_5.sinTable[VAR_20];
   VAR_13[2] = VAR_5.sinTable[(VAR_20+(VAR_1/4))&VAR_0];
  }
 } else {



  VAR_8 = (short *)((byte *)VAR_6 + VAR_6->ofsXyzNormals)
   + (VAR_3.currentEntity->e.oldframe * VAR_6->numVerts * 4);
  VAR_10 = VAR_8 + 3;

  VAR_14 = VAR_2 * VAR_7;
  VAR_16 = VAR_7;

  for (VAR_18=0 ; VAR_18 < VAR_21 ; VAR_18++,
   VAR_8 += 4, VAR_9 += 4, VAR_10 += 4, VAR_11 += 4,
   VAR_12 += 4, VAR_13 += 4)
  {
   vec3_t VAR_22, VAR_23;


   VAR_12[0] = VAR_8[0] * VAR_14 + VAR_9[0] * VAR_15;
   VAR_12[1] = VAR_8[1] * VAR_14 + VAR_9[1] * VAR_15;
   VAR_12[2] = VAR_8[2] * VAR_14 + VAR_9[2] * VAR_15;


   VAR_19 = ( VAR_11[0] >> 8 ) & 0xff;
   VAR_20 = ( VAR_11[0] & 0xff );
   VAR_19 *= 4;
   VAR_20 *= 4;
   VAR_23[0] = VAR_5.sinTable[(VAR_19+(VAR_1/4))&VAR_0] * VAR_5.sinTable[VAR_20];
   VAR_23[1] = VAR_5.sinTable[VAR_19] * VAR_5.sinTable[VAR_20];
   VAR_23[2] = VAR_5.sinTable[(VAR_20+(VAR_1/4))&VAR_0];

   VAR_19 = ( VAR_10[0] >> 8 ) & 0xff;
   VAR_20 = ( VAR_10[0] & 0xff );
   VAR_19 *= 4;
   VAR_20 *= 4;

   VAR_22[0] = VAR_5.sinTable[(VAR_19+(VAR_1/4))&VAR_0] * VAR_5.sinTable[VAR_20];
   VAR_22[1] = VAR_5.sinTable[VAR_19] * VAR_5.sinTable[VAR_20];
   VAR_22[2] = VAR_5.sinTable[(VAR_20+(VAR_1/4))&VAR_0];

   VAR_13[0] = VAR_22[0] * VAR_16 + VAR_23[0] * VAR_17;
   VAR_13[1] = VAR_22[1] * VAR_16 + VAR_23[1] * VAR_17;
   VAR_13[2] = VAR_22[2] * VAR_16 + VAR_23[2] * VAR_17;


  }
     FUNC_0((vec4_t *)VAR_4.normal[VAR_4.numVertexes], VAR_21);
    }
}
