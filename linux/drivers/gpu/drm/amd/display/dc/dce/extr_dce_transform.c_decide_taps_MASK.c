
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fixed31_32 {int dummy; } ;


 scalar_t__ FUNC_0 (struct fixed31_32) ;

__attribute__((used)) static uint32_t FUNC_1(struct fixed31_32 VAR_0, uint32_t VAR_1, bool VAR_2)
{
 uint32_t VAR_3;

 if (FUNC_0(VAR_0)) {
  return 1;
 } else if (VAR_1 != 0) {
  VAR_3 = VAR_1;
 } else {
  VAR_3 = 4;
 }

 if (VAR_2) {
  VAR_3 /= 2;
  if (VAR_3 < 2)
   VAR_3 = 2;
 }

 return VAR_3;
}
