
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ x86_vendor; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int,int*,int*) ;
 int FUNC_2 (unsigned int,int,int) ;
 int FUNC_3 (unsigned int,int*,int ) ;
 int FUNC_4 (unsigned int,int*,int,int,int ) ;

bool FUNC_5(unsigned int VAR_2, uint32_t VAR_3, uint32_t VAR_4, int *VAR_5)
{
 uint64_t VAR_6 = ((uint64_t)VAR_4 << 32) | VAR_3;

 if (VAR_1.x86_vendor != VAR_0) {
  if (FUNC_0(VAR_2)) {
   if (!FUNC_3(VAR_2, &VAR_6, 0))
    *VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4);
   return 1;
  }
 } else {
  int VAR_7, VAR_8;

  if (FUNC_1(VAR_2, &VAR_7, &VAR_8)) {
   if (!FUNC_4(VAR_2, &VAR_6, VAR_7, VAR_8, 0))
    *VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4);
   return 1;
  }
 }

 return 0;
}
