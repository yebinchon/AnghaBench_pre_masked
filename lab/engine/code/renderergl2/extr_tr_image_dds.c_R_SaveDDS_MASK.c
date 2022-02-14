
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int headerSize; int height; int width; int always_0x00000020; int caps; int pixelFormatFlags; int rgbBitCount; int rBitMask; int gBitMask; int bBitMask; int aBitMask; int caps2; int flags; } ;
typedef TYPE_1__ ddsHeader_t ;
typedef char byte ;
struct TYPE_5__ {char* (* Malloc ) (int) ;int (* Free ) (char*) ;int (* FS_WriteFile ) (char const*,char*,int) ;} ;


 int FUNC_0 (char*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 TYPE_2__ VAR_6 ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char const*,char*,int) ;
 int FUNC_4 (char*) ;

void FUNC_5(const char *VAR_7, byte *VAR_8, int VAR_9, int VAR_10, int VAR_11)
{
 byte *VAR_12;
 ddsHeader_t *VAR_13;
 int VAR_14, VAR_15;

 if (!VAR_11)
  VAR_11 = 1;

 VAR_14 = VAR_9 * VAR_10 * VAR_11 * 4;
 VAR_15 = 4 + sizeof(*VAR_13) + VAR_14;
 VAR_12 = VAR_6.Malloc(VAR_15);

 VAR_12[0] = 'D';
 VAR_12[1] = 'D';
 VAR_12[2] = 'S';
 VAR_12[3] = ' ';

 VAR_13 = (ddsHeader_t *)(VAR_12 + 4);
 FUNC_1(VAR_13, 0, sizeof(ddsHeader_t));

 VAR_13->headerSize = 0x7c;
 VAR_13->flags = VAR_5;
 VAR_13->height = VAR_10;
 VAR_13->width = VAR_9;
 VAR_13->always_0x00000020 = 0x00000020;
 VAR_13->caps = VAR_1 | VAR_2;

 if (VAR_11 == 6)
  VAR_13->caps2 = VAR_0;

 VAR_13->pixelFormatFlags = VAR_4 | VAR_3;
 VAR_13->rgbBitCount = 32;
 VAR_13->rBitMask = 0x000000ff;
 VAR_13->gBitMask = 0x0000ff00;
 VAR_13->bBitMask = 0x00ff0000;
 VAR_13->aBitMask = 0xff000000;

 FUNC_0(VAR_12 + 4 + sizeof(*VAR_13), VAR_8, VAR_14);

 VAR_6.FS_WriteFile(VAR_7, VAR_12, VAR_15);

 VAR_6.Free(VAR_12);
}
