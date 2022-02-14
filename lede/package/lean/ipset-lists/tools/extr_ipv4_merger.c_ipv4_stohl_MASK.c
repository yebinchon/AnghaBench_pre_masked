
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (char const*,char*,int*,int*,int*,int*) ;

__attribute__((used)) static inline u32 FUNC_1(const char *VAR_0)
{
 int VAR_1[4];
 if (FUNC_0(VAR_0, "%d.%d.%d.%d", &VAR_1[0], &VAR_1[1], &VAR_1[2], &VAR_1[3]) == 4) {
  return (((u32)VAR_1[0] & 0xff) << 24) |
    (((u32)VAR_1[1] & 0xff) << 16) |
    (((u32)VAR_1[2] & 0xff) << 8) |
    (((u32)VAR_1[3] & 0xff));
 } else
  return 0xffffffff;
}
