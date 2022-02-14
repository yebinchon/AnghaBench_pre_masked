
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
typedef int byte ;
struct TYPE_6__ {int (* Printf ) (int ,char*) ;} ;
struct TYPE_5__ {TYPE_1__** scratchImage; } ;
struct TYPE_4__ {int width; int height; int uploadWidth; int uploadHeight; int texnum; } ;
typedef int GLuint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ,int ,int ,int,int,int ,int ,int ,int const*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int,int,int ,int ,int const*) ;
 TYPE_3__ VAR_11 ;
 int FUNC_3 (int ,char*) ;
 TYPE_2__ VAR_12 ;

void FUNC_4 (int VAR_13, int VAR_14, int VAR_15, int VAR_16, const byte *VAR_17, int VAR_18, qboolean VAR_19) {
 GLuint VAR_20;

 if (!VAR_12.scratchImage[VAR_18])
 {
  VAR_11.Printf(VAR_10, "RE_UploadCinematic: scratch images not initialized\n");
  return;
 }

 VAR_20 = VAR_12.scratchImage[VAR_18]->texnum;


 if ( VAR_15 != VAR_12.scratchImage[VAR_18]->width || VAR_16 != VAR_12.scratchImage[VAR_18]->height ) {
  VAR_12.scratchImage[VAR_18]->width = VAR_12.scratchImage[VAR_18]->uploadWidth = VAR_15;
  VAR_12.scratchImage[VAR_18]->height = VAR_12.scratchImage[VAR_18]->uploadHeight = VAR_16;
  FUNC_0(VAR_20, VAR_4, 0, VAR_2, VAR_15, VAR_16, 0, VAR_3, VAR_9, VAR_17);
  FUNC_1(VAR_20, VAR_4, VAR_6, VAR_1);
  FUNC_1(VAR_20, VAR_4, VAR_5, VAR_1 );
  FUNC_1(VAR_20, VAR_4, VAR_7, VAR_0);
  FUNC_1(VAR_20, VAR_4, VAR_8, VAR_0);
 } else {
  if (VAR_19) {


   FUNC_2(VAR_20, VAR_4, 0, 0, 0, VAR_15, VAR_16, VAR_3, VAR_9, VAR_17);
  }
 }
}
