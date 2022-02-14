
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct fs {scalar_t__ fs_fragshift; } ;
typedef size_t int32_t ;


 int FUNC_0 (char*,int) ;

int
FUNC_1(struct fs *VAR_0, u_char *VAR_1, int32_t VAR_2)
{

 switch ((int)VAR_0->fs_fragshift) {
 case 3:
  return (VAR_1[VAR_2] == 0);
 case 2:
  return ((VAR_1[VAR_2 >> 1] & (0x0f << ((VAR_2 & 0x1) << 2))) == 0);
 case 1:
  return ((VAR_1[VAR_2 >> 2] & (0x03 << ((VAR_2 & 0x3) << 1))) == 0);
 case 0:
  return ((VAR_1[VAR_2 >> 3] & (0x01 << (VAR_2 & 0x7))) == 0);
 default:
  FUNC_0("ffs_isfreeblock: unknown fs_fragshift %d",
      (int)VAR_0->fs_fragshift);
 }
}
