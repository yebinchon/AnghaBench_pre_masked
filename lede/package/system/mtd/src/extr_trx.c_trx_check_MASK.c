
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trx_header {scalar_t__ magic; int len; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (char const*,char*) ;

int
FUNC_6(int VAR_5, const char *VAR_6, char *VAR_7, int *VAR_8)
{
 const struct trx_header *VAR_9 = (const struct trx_header *) VAR_7;
 int VAR_10;

 if (FUNC_5(VAR_6, "firmware") != 0)
  return 1;

 if (*VAR_8 < 32) {
  *VAR_8 += FUNC_4(VAR_5, VAR_7 + *VAR_8, 32 - *VAR_8);
  if (*VAR_8 < 32) {
   FUNC_2(VAR_4, "Could not get image header, file too small (%d bytes)\n", *VAR_8);
   return 0;
  }
 }

 if (VAR_9->magic != VAR_0 || VAR_9->len < sizeof(struct trx_header)) {
  if (VAR_2 < 2) {
   FUNC_2(VAR_3, "Bad trx header\n");
   FUNC_2(VAR_3, "This is not the correct file format; refusing to flash.\n"
     "Please specify the correct file or use -f to force.\n");
  }
  return 0;
 }


 VAR_10 = FUNC_3(VAR_6);
 if(VAR_10 < 0) {
  FUNC_2(VAR_3, "Could not open mtd device: %s\n", VAR_6);
  FUNC_1(1);
 }

 if(VAR_1 < VAR_9->len) {
  FUNC_2(VAR_3, "Image too big for partition: %s\n", VAR_6);
  FUNC_0(VAR_10);
  return 0;
 }

 FUNC_0(VAR_10);
 return 1;
}
