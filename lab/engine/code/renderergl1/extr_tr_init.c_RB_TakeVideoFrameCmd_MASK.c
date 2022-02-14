
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int width; int height; void** encodeBuffer; scalar_t__ motionJpeg; int captureBuffer; } ;
typedef TYPE_1__ videoFrameCommand_t ;
typedef void* byte ;
struct TYPE_8__ {scalar_t__ deviceSupportsGamma; } ;
struct TYPE_7__ {int integer; } ;
struct TYPE_6__ {int (* CL_WriteAVIVideoFrame ) (void**,int) ;} ;
typedef int GLint ;


 int VAR_0 ;
 int FUNC_0 (void**,char,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (size_t,int ) ;
 void** FUNC_2 (int ,int ) ;
 size_t FUNC_3 (void**,size_t,int ,int,size_t,void**,int) ;
 int FUNC_4 (void**,size_t) ;
 TYPE_4__ VAR_4 ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int ,int,int,int ,int ,void**) ;
 TYPE_3__* VAR_5 ;
 TYPE_2__ VAR_6 ;
 int FUNC_7 (void**,size_t) ;
 int FUNC_8 (void**,int) ;

const void *FUNC_9( const void *VAR_7 )
{
 const videoFrameCommand_t *VAR_8;
 byte *VAR_9;
 size_t VAR_10, VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15;
 GLint VAR_16;

 VAR_8 = (const videoFrameCommand_t *)VAR_7;

 FUNC_5(VAR_1, &VAR_16);

 VAR_11 = VAR_8->width * 3;


 VAR_12 = FUNC_1(VAR_11, VAR_16);
 VAR_14 = VAR_12 - VAR_11;

 VAR_13 = FUNC_1(VAR_11, VAR_0);
 VAR_15 = VAR_13 - VAR_11;

 VAR_9 = FUNC_2(VAR_8->captureBuffer, VAR_16);

 FUNC_6(0, 0, VAR_8->width, VAR_8->height, VAR_2,
  VAR_3, VAR_9);

 VAR_10 = VAR_12 * VAR_8->height;


 if(VAR_4.deviceSupportsGamma)
  FUNC_4(VAR_9, VAR_10);

 if(VAR_8->motionJpeg)
 {
  VAR_10 = FUNC_3(VAR_8->encodeBuffer, VAR_11 * VAR_8->height,
   VAR_5->integer,
   VAR_8->width, VAR_8->height, VAR_9, VAR_14);
  VAR_6.CL_WriteAVIVideoFrame(VAR_8->encodeBuffer, VAR_10);
 }
 else
 {
  byte *VAR_17, *VAR_18;
  byte *VAR_19, *VAR_20;

  VAR_19 = VAR_9;
  VAR_20 = VAR_8->encodeBuffer;
  VAR_18 = VAR_19 + VAR_10;


  while(VAR_19 < VAR_18)
  {
   VAR_17 = VAR_19 + VAR_11;
   while(VAR_19 < VAR_17)
   {
    *VAR_20++ = VAR_19[2];
    *VAR_20++ = VAR_19[1];
    *VAR_20++ = VAR_19[0];
    VAR_19 += 3;
   }

   FUNC_0(VAR_20, '\0', VAR_15);
   VAR_20 += VAR_15;

   VAR_19 += VAR_14;
  }

  VAR_6.CL_WriteAVIVideoFrame(VAR_8->encodeBuffer, VAR_13 * VAR_8->height);
 }

 return (const void *)(VAR_8 + 1);
}
