
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pp_hwmgr {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct pp_hwmgr*,int,int) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_3)
{
 uint32_t VAR_4;

 VAR_4 = (FUNC_0(VAR_3->device,
   VAR_0, VAR_2) &
   0x0000ff00) >> 8;

 if (VAR_4 == VAR_1)
  return 0;

 return FUNC_1(VAR_3,
   VAR_4, VAR_1);
}
