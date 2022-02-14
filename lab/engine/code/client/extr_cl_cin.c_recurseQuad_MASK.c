
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int byte ;
struct TYPE_4__ {int *** qStatus; int * linbuf; } ;
struct TYPE_3__ {long screenDelta; long xsize; long ysize; long CIN_WIDTH; long CIN_HEIGHT; long samplesPerLine; long samplesPerPixel; size_t onQuad; } ;


 long VAR_0 ;
 long VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 size_t VAR_4 ;

__attribute__((used)) static void FUNC_0( long VAR_5, long VAR_6, long VAR_7, long VAR_8, long VAR_9 )
{
 byte *VAR_10;
 long VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 long VAR_16;

 VAR_16 = VAR_3[VAR_4].screenDelta;

 VAR_13 = VAR_14 = 0;
 VAR_11 = VAR_3[VAR_4].xsize;
 VAR_12 = VAR_3[VAR_4].ysize;

 if (VAR_11 > VAR_3[VAR_4].CIN_WIDTH) VAR_11 = VAR_3[VAR_4].CIN_WIDTH;
 if (VAR_12 > VAR_3[VAR_4].CIN_HEIGHT) VAR_12 = VAR_3[VAR_4].CIN_HEIGHT;

 if ( (VAR_5 >= VAR_13) && (VAR_5+VAR_7) <= (VAR_11) && (VAR_6+VAR_7) <= (VAR_12) && (VAR_6 >= VAR_14) && VAR_7 <= VAR_0) {
  VAR_15 = VAR_6;
  VAR_10 = VAR_2.linbuf + (VAR_15+((VAR_3[VAR_4].CIN_HEIGHT-VAR_12)>>1)+VAR_9)*(VAR_3[VAR_4].samplesPerLine) + (((VAR_5+VAR_8))*VAR_3[VAR_4].samplesPerPixel);

  VAR_2.qStatus[0][VAR_3[VAR_4].onQuad ] = VAR_10;
  VAR_2.qStatus[1][VAR_3[VAR_4].onQuad++] = VAR_10+VAR_16;
 }

 if ( VAR_7 != VAR_1 ) {
  VAR_7 >>= 1;
  FUNC_0( VAR_5, VAR_6 , VAR_7, VAR_8, VAR_9 );
  FUNC_0( VAR_5+VAR_7, VAR_6 , VAR_7, VAR_8, VAR_9 );
  FUNC_0( VAR_5, VAR_6+VAR_7 , VAR_7, VAR_8, VAR_9 );
  FUNC_0( VAR_5+VAR_7, VAR_6+VAR_7 , VAR_7, VAR_8, VAR_9 );
 }
}
