
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(int VAR_1, int VAR_2)
{
 int VAR_3 = 0;

 if (VAR_1 < 4) {
  if (VAR_2 & ~0x0F) {
   VAR_3 = -VAR_0;
   goto error_ret;
  }
 } else if (VAR_1 < 6) {
  if (VAR_2 & ~0x30) {
   VAR_3 = -VAR_0;
   goto error_ret;
  }
 } else if (VAR_2 & ~0xC0)
  VAR_3 = -VAR_0;
error_ret:
 return VAR_3;
}
