
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs {size_t fs_frag; } ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 int* VAR_1 ;
 scalar_t__** VAR_2 ;
 int* VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;

void
FUNC_1(struct fs *VAR_4, int VAR_5, int32_t VAR_6[], int VAR_7, int VAR_8)
{
 int VAR_9;
 int VAR_10, VAR_11;
 int VAR_12, VAR_13;

 VAR_9 = (int)(VAR_2[VAR_4->fs_frag][VAR_5]) << 1;
 VAR_5 <<= 1;
 for (VAR_12 = 1; VAR_12 < VAR_4->fs_frag; VAR_12++) {
  if ((VAR_9 & (1 << (VAR_12 + (VAR_4->fs_frag & (VAR_0 - 1))))) == 0)
   continue;
  VAR_10 = VAR_1[VAR_12];
  VAR_11 = VAR_3[VAR_12];
  for (VAR_13 = VAR_12; VAR_13 <= VAR_4->fs_frag; VAR_13++) {
   if ((VAR_5 & VAR_10) == VAR_11) {
    VAR_6[VAR_12] = FUNC_0(
        FUNC_0(VAR_6[VAR_12], VAR_8) + VAR_7,
        VAR_8);
    VAR_13 += VAR_12;
    VAR_10 <<= VAR_12;
    VAR_11 <<= VAR_12;
   }
   VAR_10 <<= 1;
   VAR_11 <<= 1;
  }
 }
}
