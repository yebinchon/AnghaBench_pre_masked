
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int byte ;
struct TYPE_4__ {int * mcomp; } ;
struct TYPE_3__ {int samplesPerLine; } ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *,int) ;
 TYPE_2__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *,int) ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;

__attribute__((used)) static void FUNC_5( byte **VAR_6, unsigned char *VAR_7 )
{
unsigned short VAR_8, VAR_9, VAR_10;
unsigned int VAR_11, VAR_12;
int VAR_13;

 VAR_8 = 0;
 VAR_9 = 0;
 VAR_11 = 0;

        VAR_13 = VAR_1[VAR_2].samplesPerLine;

 do {
  if (!VAR_8) {
   VAR_8 = 7;
   VAR_9 = VAR_7[0] + VAR_7[1]*256;
   VAR_7 += 2;
  } else {
   VAR_8--;
  }

  VAR_10 = (unsigned short)(VAR_9&0xc000);
  VAR_9 <<= 2;

  switch (VAR_10) {
   case 0x8000:
    FUNC_2( (byte *)&VAR_5[(*VAR_7)*128], VAR_6[VAR_11], VAR_13 );
    VAR_7++;
    VAR_11 += 5;
    break;
   case 0xc000:
    VAR_11++;
    for(VAR_12=0;VAR_12<4;VAR_12++) {
     if (!VAR_8) {
      VAR_8 = 7;
      VAR_9 = VAR_7[0] + VAR_7[1]*256;
      VAR_7 += 2;
     } else {
      VAR_8--;
     }

     VAR_10 = (unsigned short)(VAR_9&0xc000); VAR_9 <<= 2;

     switch (VAR_10) {
      case 0x8000:
       FUNC_1( (byte *)&VAR_4[(*VAR_7)*32], VAR_6[VAR_11], VAR_13 );
       VAR_7++;
       break;
      case 0xc000:
       FUNC_0( (byte *)&VAR_3[(*VAR_7)*8], VAR_6[VAR_11], VAR_13 );
       VAR_7++;
       FUNC_0( (byte *)&VAR_3[(*VAR_7)*8], VAR_6[VAR_11]+8, VAR_13 );
       VAR_7++;
       FUNC_0( (byte *)&VAR_3[(*VAR_7)*8], VAR_6[VAR_11]+VAR_13*2, VAR_13 );
       VAR_7++;
       FUNC_0( (byte *)&VAR_3[(*VAR_7)*8], VAR_6[VAR_11]+VAR_13*2+8, VAR_13 );
       VAR_7++;
       break;
      case 0x4000:
       FUNC_3( VAR_6[VAR_11] + VAR_0.mcomp[(*VAR_7)], VAR_6[VAR_11], VAR_13 );
       VAR_7++;
       break;
     }
     VAR_11++;
    }
    break;
   case 0x4000:
    FUNC_4( VAR_6[VAR_11] + VAR_0.mcomp[(*VAR_7)], VAR_6[VAR_11], VAR_13 );
    VAR_7++;
    VAR_11 += 5;
    break;
   case 0x0000:
    VAR_11 += 5;
    break;
  }
 } while ( VAR_6[VAR_11] != ((void*)0) );
}
