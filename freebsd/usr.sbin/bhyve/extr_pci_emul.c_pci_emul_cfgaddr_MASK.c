
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_0(struct vmctx *VAR_10, int VAR_11, int VAR_12, int VAR_13, int VAR_14,
   uint32_t *VAR_15, void *VAR_16)
{
 uint32_t VAR_17;

 if (VAR_14 != 4) {
  if (VAR_12)
   *VAR_15 = (VAR_14 == 2) ? 0xffff : 0xff;
  return (0);
 }

 if (VAR_12) {
  VAR_17 = (VAR_5 << 16) | (VAR_9 << 11) | (VAR_7 << 8) | VAR_8;
  if (VAR_6)
   VAR_17 |= VAR_0;
  *VAR_15 = VAR_17;
 } else {
  VAR_17 = *VAR_15;
  VAR_6 = (VAR_17 & VAR_0) == VAR_0;
  VAR_8 = VAR_17 & VAR_3;
  VAR_7 = (VAR_17 >> 8) & VAR_2;
  VAR_9 = (VAR_17 >> 11) & VAR_4;
  VAR_5 = (VAR_17 >> 16) & VAR_1;
 }

 return (0);
}
