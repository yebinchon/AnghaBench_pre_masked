
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct mxl {int i2cdev; } ;
struct MBIN_FILE_HEADER_T {int* image_size24; char id; char fmt_version; scalar_t__ image_checksum; } ;


 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct mxl *VAR_0, u8 *VAR_1, u32 VAR_2)
{
 struct MBIN_FILE_HEADER_T *VAR_3 = (struct MBIN_FILE_HEADER_T *) VAR_1;
 u32 VAR_4 = (VAR_3->image_size24[0] << 16) |
  (VAR_3->image_size24[1] << 8) | VAR_3->image_size24[2];
 u8 *VAR_5, VAR_6 = 0;
 u32 VAR_7;

 if (VAR_3->id != 'M' || VAR_3->fmt_version != '1' || VAR_4 > 0x3FFF0) {
  FUNC_0(VAR_0->i2cdev, "Invalid FW Header\n");
  return -1;
 }
 VAR_5 = VAR_1 + sizeof(struct MBIN_FILE_HEADER_T);
 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7 += 1)
  VAR_6 += VAR_5[VAR_7];
 if (VAR_6 != VAR_3->image_checksum) {
  FUNC_0(VAR_0->i2cdev, "Invalid FW Checksum\n");
  return -1;
 }
 return 0;
}
