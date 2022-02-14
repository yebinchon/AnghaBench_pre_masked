
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ufs1_daddr_t ;
typedef int u_char ;
struct fs {scalar_t__ fs_frag; } ;


 int FUNC_0 (char*) ;

int
FUNC_1(struct fs *VAR_0, u_char *VAR_1, ufs1_daddr_t VAR_2)
{

 switch ((int)VAR_0->fs_frag) {
 case 8:
  return (VAR_1[VAR_2] == 0);
 case 4:
  return ((VAR_1[VAR_2 >> 1] & (0x0f << ((VAR_2 & 0x1) << 2))) == 0);
 case 2:
  return ((VAR_1[VAR_2 >> 2] & (0x03 << ((VAR_2 & 0x3) << 1))) == 0);
 case 1:
  return ((VAR_1[VAR_2 >> 3] & (0x01 << (VAR_2 & 0x7))) == 0);
 default:



  break;
 }
 return (0);
}
