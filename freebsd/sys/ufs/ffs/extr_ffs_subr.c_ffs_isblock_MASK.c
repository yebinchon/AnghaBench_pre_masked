
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ufs1_daddr_t ;
struct fs {scalar_t__ fs_frag; } ;


 int FUNC_0 (char*) ;

int
FUNC_1(struct fs *VAR_0, unsigned char *VAR_1, ufs1_daddr_t VAR_2)
{
 unsigned char VAR_3;

 switch ((int)VAR_0->fs_frag) {
 case 8:
  return (VAR_1[VAR_2] == 0xff);
 case 4:
  VAR_3 = 0x0f << ((VAR_2 & 0x1) << 2);
  return ((VAR_1[VAR_2 >> 1] & VAR_3) == VAR_3);
 case 2:
  VAR_3 = 0x03 << ((VAR_2 & 0x3) << 1);
  return ((VAR_1[VAR_2 >> 2] & VAR_3) == VAR_3);
 case 1:
  VAR_3 = 0x01 << (VAR_2 & 0x7);
  return ((VAR_1[VAR_2 >> 3] & VAR_3) == VAR_3);
 default:



  break;
 }
 return (0);
}
