
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned int,unsigned int,unsigned int,int,unsigned int,int) ;

__attribute__((used)) static inline bool FUNC_1(unsigned int VAR_0, unsigned int VAR_1,
           unsigned int VAR_2, unsigned int VAR_3)
{
 if ((VAR_3 && (VAR_1 << 16) > VAR_0 * VAR_3) ||
     (VAR_2 && (VAR_1 << 16) < VAR_0 * VAR_2)) {
  FUNC_0("Scale from %d to %d exceeds HW limits (ratio min %d.%05d, max %d.%05d)\n",
    VAR_0, VAR_1,
    VAR_2 >> 16, 100000 * (VAR_2 & 0xffff) / (1 << 16),
    VAR_3 >> 16, 100000 * (VAR_3 & 0xffff) / (1 << 16));
  return 0;
 }
 return 1;
}
