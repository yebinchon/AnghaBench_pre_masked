
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int width; int height; void** encodeBuffer; scalar_t__ motionJpeg; int captureBuffer; } ;
typedef TYPE_1__ videoFrameCommand_t ;
typedef void* byte ;
struct TYPE_10__ {scalar_t__ deviceSupportsGamma; } ;
struct TYPE_9__ {int integer; } ;
struct TYPE_8__ {int (* CL_WriteAVIVideoFrame ) (void**,int) ;} ;
struct TYPE_7__ {scalar_t__ numIndexes; } ;
typedef int GLint ;


 int VAR_0 ;
 int FUNC_0 (void**,char,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (size_t,int ) ;
 void** FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 size_t FUNC_4 (void**,size_t,int ,int,size_t,void**,int) ;
 int FUNC_5 (void**,size_t) ;
 TYPE_5__ VAR_4 ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int ,int,int,int ,int ,void**) ;
 TYPE_4__* VAR_5 ;
 TYPE_3__ VAR_6 ;
 int FUNC_8 (void**,size_t) ;
 int FUNC_9 (void**,int) ;
 TYPE_2__ VAR_7 ;

const void *FUNC_10( const void *VAR_8 )
{
 const videoFrameCommand_t *VAR_9;
 byte *VAR_10;
 size_t VAR_11, VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16;
 GLint VAR_17;


 if(VAR_7.numIndexes)
  FUNC_3();

 VAR_9 = (const videoFrameCommand_t *)VAR_8;

 FUNC_6(VAR_1, &VAR_17);

 VAR_12 = VAR_9->width * 3;


 VAR_13 = FUNC_1(VAR_12, VAR_17);
 VAR_15 = VAR_13 - VAR_12;

 VAR_14 = FUNC_1(VAR_12, VAR_0);
 VAR_16 = VAR_14 - VAR_12;

 VAR_10 = FUNC_2(VAR_9->captureBuffer, VAR_17);

 FUNC_7(0, 0, VAR_9->width, VAR_9->height, VAR_2,
  VAR_3, VAR_10);

 VAR_11 = VAR_13 * VAR_9->height;


 if(VAR_4.deviceSupportsGamma)
  FUNC_5(VAR_10, VAR_11);

 if(VAR_9->motionJpeg)
 {
  VAR_11 = FUNC_4(VAR_9->encodeBuffer, VAR_12 * VAR_9->height,
   VAR_5->integer,
   VAR_9->width, VAR_9->height, VAR_10, VAR_15);
  VAR_6.CL_WriteAVIVideoFrame(VAR_9->encodeBuffer, VAR_11);
 }
 else
 {
  byte *VAR_18, *VAR_19;
  byte *VAR_20, *VAR_21;

  VAR_20 = VAR_10;
  VAR_21 = VAR_9->encodeBuffer;
  VAR_19 = VAR_20 + VAR_11;


  while(VAR_20 < VAR_19)
  {
   VAR_18 = VAR_20 + VAR_12;
   while(VAR_20 < VAR_18)
   {
    *VAR_21++ = VAR_20[2];
    *VAR_21++ = VAR_20[1];
    *VAR_21++ = VAR_20[0];
    VAR_20 += 3;
   }

   FUNC_0(VAR_21, '\0', VAR_16);
   VAR_21 += VAR_16;

   VAR_20 += VAR_15;
  }

  VAR_6.CL_WriteAVIVideoFrame(VAR_9->encodeBuffer, VAR_14 * VAR_9->height);
 }

 return (const void *)(VAR_9 + 1);
}
