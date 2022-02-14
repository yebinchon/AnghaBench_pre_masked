
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_long ;
typedef int physmem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int*,int,int*,size_t*,int *,int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int
FUNC_2(uint32_t *VAR_7)
{

 if (VAR_6 == 0) {
  int VAR_8[2] = { VAR_0, VAR_1 };
  u_long VAR_9;
  size_t VAR_10 = sizeof(VAR_9);

  if (FUNC_0(VAR_8, 2, &VAR_9, &VAR_10, ((void*)0), 0) == -1) {
   FUNC_1(VAR_2,
       "sysctl({ CTL_HW, HW_PHYSMEM }) failed: %m");
   return (VAR_3);
  }

  VAR_6 = VAR_9 / 1024;
 }

 if (VAR_6 > VAR_5)
  *VAR_7 = VAR_5;
 else
  *VAR_7 = VAR_6;
 return (VAR_4);
}
