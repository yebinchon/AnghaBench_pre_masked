
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {int t2; int s1; scalar_t__ h; scalar_t__ y; scalar_t__ x; int s2; scalar_t__ w; int t1; int * shader; } ;
typedef TYPE_1__ stretchPicCommand_t ;
typedef int shader_t ;
struct TYPE_10__ {int color2D; int entity2D; int * currentEntity; scalar_t__ framePostProcessed; } ;
struct TYPE_9__ {scalar_t__ framebufferObject; } ;
struct TYPE_8__ {int numIndexes; int numVertexes; int* indexes; int ** texCoords; scalar_t__** xyz; int * color; int * shader; } ;
struct TYPE_7__ {int * renderFbo; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,int,int *) ;
 TYPE_5__ VAR_0 ;
 TYPE_4__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;

const void *FUNC_7 ( const void *VAR_4 ) {
 const stretchPicCommand_t *VAR_5;
 shader_t *VAR_6;
 int VAR_7, VAR_8;

 VAR_5 = (const stretchPicCommand_t *)VAR_4;


 if (VAR_1.framebufferObject)
  FUNC_0(VAR_0.framePostProcessed ? ((void*)0) : VAR_3.renderFbo);

 FUNC_4();

 VAR_6 = VAR_5->shader;
 if ( VAR_6 != VAR_2.shader ) {
  if ( VAR_2.numIndexes ) {
   FUNC_3();
  }
  VAR_0.currentEntity = &VAR_0.entity2D;
  FUNC_1( VAR_6, 0, 0 );
 }

 FUNC_2( 4, 6 );
 VAR_7 = VAR_2.numVertexes;
 VAR_8 = VAR_2.numIndexes;

 VAR_2.numVertexes += 4;
 VAR_2.numIndexes += 6;

 VAR_2.indexes[ VAR_8 ] = VAR_7 + 3;
 VAR_2.indexes[ VAR_8 + 1 ] = VAR_7 + 0;
 VAR_2.indexes[ VAR_8 + 2 ] = VAR_7 + 2;
 VAR_2.indexes[ VAR_8 + 3 ] = VAR_7 + 2;
 VAR_2.indexes[ VAR_8 + 4 ] = VAR_7 + 0;
 VAR_2.indexes[ VAR_8 + 5 ] = VAR_7 + 1;

 {
  uint16_t VAR_9[4];

  FUNC_6(VAR_0.color2D, 257, VAR_9);

  FUNC_5(VAR_9, VAR_2.color[ VAR_7 ]);
  FUNC_5(VAR_9, VAR_2.color[ VAR_7 + 1]);
  FUNC_5(VAR_9, VAR_2.color[ VAR_7 + 2]);
  FUNC_5(VAR_9, VAR_2.color[ VAR_7 + 3 ]);
 }

 VAR_2.xyz[ VAR_7 ][0] = VAR_5->x;
 VAR_2.xyz[ VAR_7 ][1] = VAR_5->y;
 VAR_2.xyz[ VAR_7 ][2] = 0;

 VAR_2.texCoords[ VAR_7 ][0] = VAR_5->s1;
 VAR_2.texCoords[ VAR_7 ][1] = VAR_5->t1;

 VAR_2.xyz[ VAR_7 + 1 ][0] = VAR_5->x + VAR_5->w;
 VAR_2.xyz[ VAR_7 + 1 ][1] = VAR_5->y;
 VAR_2.xyz[ VAR_7 + 1 ][2] = 0;

 VAR_2.texCoords[ VAR_7 + 1 ][0] = VAR_5->s2;
 VAR_2.texCoords[ VAR_7 + 1 ][1] = VAR_5->t1;

 VAR_2.xyz[ VAR_7 + 2 ][0] = VAR_5->x + VAR_5->w;
 VAR_2.xyz[ VAR_7 + 2 ][1] = VAR_5->y + VAR_5->h;
 VAR_2.xyz[ VAR_7 + 2 ][2] = 0;

 VAR_2.texCoords[ VAR_7 + 2 ][0] = VAR_5->s2;
 VAR_2.texCoords[ VAR_7 + 2 ][1] = VAR_5->t2;

 VAR_2.xyz[ VAR_7 + 3 ][0] = VAR_5->x;
 VAR_2.xyz[ VAR_7 + 3 ][1] = VAR_5->y + VAR_5->h;
 VAR_2.xyz[ VAR_7 + 3 ][2] = 0;

 VAR_2.texCoords[ VAR_7 + 3 ][0] = VAR_5->s1;
 VAR_2.texCoords[ VAR_7 + 3 ][1] = VAR_5->t2;

 return (const void *)(VAR_5 + 1);
}
