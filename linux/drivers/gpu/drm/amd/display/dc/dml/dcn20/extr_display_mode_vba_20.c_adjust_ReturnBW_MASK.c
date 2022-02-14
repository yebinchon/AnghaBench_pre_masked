
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double DCFCLK; double ReturnBusWidth; int UrgentLatencyPixelDataOnly; int ROBBufferSizeInKByte; int PixelChunkSizeInKByte; } ;
struct display_mode_lib {TYPE_1__ vba; } ;


 double FUNC_0 (double,double) ;
 double FUNC_1 (double,int) ;

__attribute__((used)) static double FUNC_2(
  struct display_mode_lib *VAR_0,
  double VAR_1,
  bool VAR_2,
  double VAR_3)
{
 double VAR_4;

 if (VAR_2
   && VAR_3
     > VAR_0->vba.DCFCLK * VAR_0->vba.ReturnBusWidth / 4.0)
  VAR_1 =
    FUNC_0(
      VAR_1,
      VAR_3 * 4
        * (1.0
          - VAR_0->vba.UrgentLatencyPixelDataOnly
            / ((VAR_0->vba.ROBBufferSizeInKByte
              - VAR_0->vba.PixelChunkSizeInKByte)
              * 1024
              / VAR_3
              - VAR_0->vba.DCFCLK
                * VAR_0->vba.ReturnBusWidth
                / 4)
          + VAR_0->vba.UrgentLatencyPixelDataOnly));

 VAR_4 = 2.0 * VAR_0->vba.ReturnBusWidth * VAR_0->vba.DCFCLK
   * VAR_0->vba.UrgentLatencyPixelDataOnly
   / (VAR_3 * VAR_0->vba.UrgentLatencyPixelDataOnly
     + (VAR_0->vba.ROBBufferSizeInKByte
       - VAR_0->vba.PixelChunkSizeInKByte)
       * 1024);

 if (VAR_2 && VAR_4 > 1.0 && VAR_4 < 4.0)
  VAR_1 =
    FUNC_0(
      VAR_1,
      4.0 * VAR_3
        * (VAR_0->vba.ROBBufferSizeInKByte
          - VAR_0->vba.PixelChunkSizeInKByte)
        * 1024
        * VAR_0->vba.ReturnBusWidth
        * VAR_0->vba.DCFCLK
        * VAR_0->vba.UrgentLatencyPixelDataOnly
        / FUNC_1(
          (VAR_3
            * VAR_0->vba.UrgentLatencyPixelDataOnly
            + (VAR_0->vba.ROBBufferSizeInKByte
              - VAR_0->vba.PixelChunkSizeInKByte)
              * 1024),
          2));

 return VAR_1;
}
