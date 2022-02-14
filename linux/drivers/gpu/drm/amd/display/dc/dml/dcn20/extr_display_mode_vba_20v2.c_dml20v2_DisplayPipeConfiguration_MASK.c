
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int NumberOfActivePlanes; scalar_t__* SourcePixelFormat; scalar_t__* SurfaceTiling; scalar_t__* SourceScan; double* ViewportWidth; double* ViewportHeight; int* ODMCombineEnabled; unsigned int* BlendingAndTiming; double* HActive; double* HRatio; double* DPPPerPlane; double DETBufferSizeInKByte; double* SwathHeightY; double* SwathHeightC; int* DETBufferSizeY; double* DETBufferSizeC; } ;
struct display_mode_lib {TYPE_1__ vba; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (double,int) ;
 double FUNC_1 (double,double) ;

__attribute__((used)) static void FUNC_2(struct display_mode_lib *VAR_15)
{
 double VAR_16;
 double VAR_17;
 double VAR_18;
 double VAR_19;
 double VAR_20;
 double VAR_21;
 double VAR_22;
 double VAR_23;
 double VAR_24;
 double VAR_25;
 double VAR_26;
 double VAR_27;
 double VAR_28;
 double VAR_29;
 double VAR_30;
 unsigned int VAR_31, VAR_32;

 for (VAR_32 = 0; VAR_32 < VAR_15->vba.NumberOfActivePlanes; ++VAR_32) {
  bool VAR_33 = 0;

  if (VAR_15->vba.SourcePixelFormat[VAR_32] == VAR_4) {
   VAR_16 = 8;
   VAR_17 = 0;
  } else if (VAR_15->vba.SourcePixelFormat[VAR_32] == VAR_3) {
   VAR_16 = 4;
   VAR_17 = 0;
  } else if (VAR_15->vba.SourcePixelFormat[VAR_32] == VAR_2) {
   VAR_16 = 2;
   VAR_17 = 0;
  } else if (VAR_15->vba.SourcePixelFormat[VAR_32] == VAR_5) {
   VAR_16 = 1;
   VAR_17 = 0;
  } else if (VAR_15->vba.SourcePixelFormat[VAR_32] == VAR_1) {
   VAR_16 = 1;
   VAR_17 = 2;
  } else {
   VAR_16 = 4.0 / 3.0;
   VAR_17 = 8.0 / 3.0;
  }

  if ((VAR_15->vba.SourcePixelFormat[VAR_32] == VAR_4
    || VAR_15->vba.SourcePixelFormat[VAR_32] == VAR_3
    || VAR_15->vba.SourcePixelFormat[VAR_32] == VAR_2
    || VAR_15->vba.SourcePixelFormat[VAR_32] == VAR_5)) {
   if (VAR_15->vba.SurfaceTiling[VAR_32] == VAR_12) {
    VAR_18 = 1;
   } else if (VAR_15->vba.SourcePixelFormat[VAR_32] == VAR_4) {
    VAR_18 = 4;
   } else if (VAR_15->vba.SourcePixelFormat[VAR_32] == VAR_3
     || VAR_15->vba.SourcePixelFormat[VAR_32] == VAR_2) {
    VAR_18 = 8;
   } else {
    VAR_18 = 16;
   }
   VAR_20 = 256 / FUNC_0(VAR_16, 1)
     / VAR_18;
   VAR_19 = 0;
   VAR_21 = 0;
  } else {
   if (VAR_15->vba.SurfaceTiling[VAR_32] == VAR_12) {
    VAR_18 = 1;
    VAR_19 = 1;
   } else if (VAR_15->vba.SourcePixelFormat[VAR_32] == VAR_1) {
    VAR_18 = 16;
    VAR_19 = 8;
   } else {
    VAR_18 = 8;
    VAR_19 = 8;
   }
   VAR_20 = 256 / FUNC_0(VAR_16, 1)
     / VAR_18;
   VAR_21 = 256 / FUNC_0(VAR_17, 2)
     / VAR_19;
  }

  if (VAR_15->vba.SourceScan[VAR_32] == VAR_6) {
   VAR_22 = VAR_18;
   VAR_23 = VAR_19;
  } else {
   VAR_22 = VAR_20;
   VAR_23 = VAR_21;
  }

  if ((VAR_15->vba.SourcePixelFormat[VAR_32] == VAR_4
    || VAR_15->vba.SourcePixelFormat[VAR_32] == VAR_3
    || VAR_15->vba.SourcePixelFormat[VAR_32] == VAR_2
    || VAR_15->vba.SourcePixelFormat[VAR_32] == VAR_5)) {
   if (VAR_15->vba.SurfaceTiling[VAR_32] == VAR_12
     || (VAR_15->vba.SourcePixelFormat[VAR_32] == VAR_4
       && (VAR_15->vba.SurfaceTiling[VAR_32]
         == VAR_7
         || VAR_15->vba.SurfaceTiling[VAR_32]
           == VAR_8
         || VAR_15->vba.SurfaceTiling[VAR_32]
           == VAR_9
         || VAR_15->vba.SurfaceTiling[VAR_32]
           == VAR_10
         || VAR_15->vba.SurfaceTiling[VAR_32]
           == VAR_11
         || VAR_15->vba.SurfaceTiling[VAR_32]
           == VAR_13
         || VAR_15->vba.SurfaceTiling[VAR_32]
           == VAR_14)
       && VAR_15->vba.SourceScan[VAR_32] == VAR_6)) {
    VAR_24 = VAR_22;
   } else if (VAR_15->vba.SourcePixelFormat[VAR_32] == VAR_5
     && VAR_15->vba.SourceScan[VAR_32] != VAR_6) {
    VAR_24 = VAR_22;
   } else {
    VAR_24 = VAR_22 / 2.0;
   }
   VAR_25 = VAR_23;
  } else {
   if (VAR_15->vba.SurfaceTiling[VAR_32] == VAR_12) {
    VAR_24 = VAR_22;
    VAR_25 = VAR_23;
   } else if (VAR_15->vba.SourcePixelFormat[VAR_32] == VAR_1
     && VAR_15->vba.SourceScan[VAR_32] == VAR_6) {
    VAR_24 = VAR_22 / 2.0;
    VAR_25 = VAR_23;
   } else if (VAR_15->vba.SourcePixelFormat[VAR_32] == VAR_0
     && VAR_15->vba.SourceScan[VAR_32] == VAR_6) {
    VAR_25 = VAR_23 / 2.0;
    VAR_24 = VAR_22;
   } else {
    VAR_24 = VAR_22;
    VAR_25 = VAR_23;
   }
  }

  if (VAR_15->vba.SourceScan[VAR_32] == VAR_6) {
   VAR_26 = VAR_15->vba.ViewportWidth[VAR_32];
  } else {
   VAR_26 = VAR_15->vba.ViewportHeight[VAR_32];
  }

  if (VAR_15->vba.ODMCombineEnabled[VAR_32] == 1) {
   VAR_33 = 1;
  }
  for (VAR_31 = 0; VAR_31 < VAR_15->vba.NumberOfActivePlanes; ++VAR_31) {
   if (VAR_15->vba.BlendingAndTiming[VAR_32] == VAR_31
     && VAR_15->vba.ODMCombineEnabled[VAR_31] == 1) {
    VAR_33 = 1;
   }
  }

  if (VAR_33 == 1) {
   VAR_26 = FUNC_1(
     VAR_26,
     VAR_15->vba.HActive[VAR_32] / 2.0 * VAR_15->vba.HRatio[VAR_32]);
  } else {
   if (VAR_15->vba.DPPPerPlane[VAR_32] == 0)
    VAR_26 = 0;
   else
    VAR_26 = VAR_26 / VAR_15->vba.DPPPerPlane[VAR_32];
  }

  VAR_27 = 256 / FUNC_0(VAR_16, 1) / VAR_22;
  VAR_29 = (FUNC_0(
    (double) (VAR_26 - 1),
    VAR_27) + VAR_27) * VAR_16
    * VAR_22;
  if (VAR_15->vba.SourcePixelFormat[VAR_32] == VAR_0) {
   VAR_29 = FUNC_0(VAR_29, 256)
     + 256;
  }
  if (VAR_23 > 0) {
   VAR_28 = 256.0 / FUNC_0(VAR_17, 2)
     / VAR_23;
   VAR_30 = (FUNC_0(
     (double) (VAR_26 / 2.0 - 1),
     VAR_28) + VAR_28)
     * VAR_17 * VAR_23;
   if (VAR_15->vba.SourcePixelFormat[VAR_32] == VAR_0) {
    VAR_30 = FUNC_0(
      VAR_30,
      256) + 256;
   }
  } else
   VAR_30 = 0.0;

  if (VAR_29 + VAR_30
    <= VAR_15->vba.DETBufferSizeInKByte * 1024.0 / 2.0) {
   VAR_15->vba.SwathHeightY[VAR_32] = VAR_22;
   VAR_15->vba.SwathHeightC[VAR_32] = VAR_23;
  } else {
   VAR_15->vba.SwathHeightY[VAR_32] = VAR_24;
   VAR_15->vba.SwathHeightC[VAR_32] = VAR_25;
  }

  if (VAR_15->vba.SwathHeightC[VAR_32] == 0) {
   VAR_15->vba.DETBufferSizeY[VAR_32] = VAR_15->vba.DETBufferSizeInKByte * 1024;
   VAR_15->vba.DETBufferSizeC[VAR_32] = 0;
  } else if (VAR_15->vba.SwathHeightY[VAR_32] <= VAR_15->vba.SwathHeightC[VAR_32]) {
   VAR_15->vba.DETBufferSizeY[VAR_32] = VAR_15->vba.DETBufferSizeInKByte
     * 1024.0 / 2;
   VAR_15->vba.DETBufferSizeC[VAR_32] = VAR_15->vba.DETBufferSizeInKByte
     * 1024.0 / 2;
  } else {
   VAR_15->vba.DETBufferSizeY[VAR_32] = VAR_15->vba.DETBufferSizeInKByte
     * 1024.0 * 2 / 3;
   VAR_15->vba.DETBufferSizeC[VAR_32] = VAR_15->vba.DETBufferSizeInKByte
     * 1024.0 / 3;
  }
 }
}
