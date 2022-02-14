
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {int lightdir; int color; int lightmap; int st; int tangent; int normal; int xyz; } ;
typedef TYPE_2__ srfVert_t ;
typedef int int16_t ;
typedef int glIndex_t ;
struct TYPE_7__ {size_t numIndexes; size_t numVertexes; float** xyz; float** texCoords; float** lightCoords; int* vertexDlightBits; int dlightBits; int pshadowBits; int ** lightdir; TYPE_1__* shader; int ** color; int ** tangent; int ** normal; int * indexes; int vao; } ;
struct TYPE_5__ {int vertexAttribs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,float*) ;
 int FUNC_3 (int ,float*) ;
 int FUNC_4 (int ,int *) ;
 TYPE_3__ VAR_7 ;

__attribute__((used)) static void FUNC_5( int VAR_8, srfVert_t *VAR_9, int VAR_10, glIndex_t *VAR_11, int VAR_12, int VAR_13)
{
 int VAR_14;
 glIndex_t *VAR_15;
 srfVert_t *VAR_16;
 float *VAR_17, *VAR_18, *VAR_19;
 int16_t *VAR_20;
 int16_t *VAR_21;
 int16_t *VAR_22;
 glIndex_t *VAR_23;
 uint16_t *VAR_24;

 FUNC_1(VAR_7.vao);

 FUNC_0( VAR_8, VAR_10 );

 VAR_15 = VAR_11;
 VAR_23 = &VAR_7.indexes[ VAR_7.numIndexes ];
 for ( VAR_14 = 0 ; VAR_14 < VAR_10 ; VAR_14++ ) {
  *VAR_23++ = VAR_7.numVertexes + *VAR_15++;
 }
 VAR_7.numIndexes += VAR_10;

 if ( VAR_7.shader->vertexAttribs & VAR_4 )
 {
  VAR_16 = VAR_9;
  VAR_17 = VAR_7.xyz[ VAR_7.numVertexes ];
  for ( VAR_14 = 0 ; VAR_14 < VAR_8 ; VAR_14++, VAR_16++, VAR_17+=4 )
   FUNC_2(VAR_16->xyz, VAR_17);
 }

 if ( VAR_7.shader->vertexAttribs & VAR_3 )
 {
  VAR_16 = VAR_9;
  VAR_21 = VAR_7.normal[ VAR_7.numVertexes ];
  for ( VAR_14 = 0 ; VAR_14 < VAR_8 ; VAR_14++, VAR_16++, VAR_21+=4 )
   FUNC_4(VAR_16->normal, VAR_21);
 }

 if ( VAR_7.shader->vertexAttribs & VAR_5 )
 {
  VAR_16 = VAR_9;
  VAR_22 = VAR_7.tangent[ VAR_7.numVertexes ];
  for ( VAR_14 = 0 ; VAR_14 < VAR_8 ; VAR_14++, VAR_16++, VAR_22+=4 )
   FUNC_4(VAR_16->tangent, VAR_22);
 }

 if ( VAR_7.shader->vertexAttribs & VAR_6 )
 {
  VAR_16 = VAR_9;
  VAR_18 = VAR_7.texCoords[VAR_7.numVertexes];
  for ( VAR_14 = 0 ; VAR_14 < VAR_8 ; VAR_14++, VAR_16++, VAR_18+=2 )
   FUNC_3(VAR_16->st, VAR_18);
 }

 if ( VAR_7.shader->vertexAttribs & VAR_1 )
 {
  VAR_16 = VAR_9;
  VAR_19 = VAR_7.lightCoords[ VAR_7.numVertexes ];
  for ( VAR_14 = 0 ; VAR_14 < VAR_8 ; VAR_14++, VAR_16++, VAR_19+=2 )
   FUNC_3(VAR_16->lightmap, VAR_19);
 }

 if ( VAR_7.shader->vertexAttribs & VAR_0 )
 {
  VAR_16 = VAR_9;
  VAR_24 = VAR_7.color[ VAR_7.numVertexes ];
  for ( VAR_14 = 0 ; VAR_14 < VAR_8 ; VAR_14++, VAR_16++, VAR_24+=4 )
   FUNC_4(VAR_16->color, VAR_24);
 }

 if ( VAR_7.shader->vertexAttribs & VAR_2 )
 {
  VAR_16 = VAR_9;
  VAR_20 = VAR_7.lightdir[ VAR_7.numVertexes ];
  for ( VAR_14 = 0 ; VAR_14 < VAR_8 ; VAR_14++, VAR_16++, VAR_20+=4 )
   FUNC_4(VAR_16->lightdir, VAR_20);
 }







 VAR_7.dlightBits |= VAR_12;
 VAR_7.pshadowBits |= VAR_13;

 VAR_7.numVertexes += VAR_8;
}
