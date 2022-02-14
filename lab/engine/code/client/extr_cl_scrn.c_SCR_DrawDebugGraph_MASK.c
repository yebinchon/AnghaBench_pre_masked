
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int integer; } ;
struct TYPE_11__ {float integer; } ;
struct TYPE_10__ {float integer; } ;
struct TYPE_7__ {int vidWidth; int vidHeight; } ;
struct TYPE_9__ {int whiteShader; TYPE_1__ glconfig; } ;
struct TYPE_8__ {int (* DrawStretchPic ) (int,int,int,int,int ,int ,int ,int ,int ) ;int (* SetColor ) (int *) ;} ;


 int FUNC_0 (float*) ;
 TYPE_6__* VAR_0 ;
 TYPE_5__* VAR_1 ;
 TYPE_4__* VAR_2 ;
 TYPE_3__ VAR_3 ;
 int VAR_4 ;
 int ** VAR_5 ;
 TYPE_2__ VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int,int,int,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int,int,int,int ,int ,int ,int ,int ) ;
 float* VAR_7 ;

void FUNC_5 (void)
{
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 float VAR_14;




 VAR_11 = VAR_3.glconfig.vidWidth;
 VAR_9 = 0;
 VAR_10 = VAR_3.glconfig.vidHeight;
 VAR_6.SetColor( VAR_5[0] );
 VAR_6.DrawStretchPic(VAR_9, VAR_10 - VAR_0->integer,
  VAR_11, VAR_0->integer, 0, 0, 0, 0, VAR_3.whiteShader );
 VAR_6.SetColor( ((void*)0) );

 for (VAR_8=0 ; VAR_8<VAR_11 ; VAR_8++)
 {
  VAR_12 = (FUNC_0(VAR_7)+VAR_4-1-(VAR_8 % FUNC_0(VAR_7))) % FUNC_0(VAR_7);
  VAR_14 = VAR_7[VAR_12];
  VAR_14 = VAR_14 * VAR_1->integer + VAR_2->integer;

  if (VAR_14 < 0)
   VAR_14 += VAR_0->integer * (1+(int)(-VAR_14 / VAR_0->integer));
  VAR_13 = (int)VAR_14 % VAR_0->integer;
  VAR_6.DrawStretchPic( VAR_9+VAR_11-1-VAR_8, VAR_10 - VAR_13, 1, VAR_13, 0, 0, 0, 0, VAR_3.whiteShader );
 }
}
