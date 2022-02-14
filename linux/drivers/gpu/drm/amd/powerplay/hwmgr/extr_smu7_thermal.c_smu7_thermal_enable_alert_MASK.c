
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pp_hwmgr {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct pp_hwmgr*,int ) ;

__attribute__((used)) static void FUNC_3(struct pp_hwmgr *VAR_6)
{
 uint32_t VAR_7;

 VAR_7 = FUNC_0(VAR_6->device, VAR_0,
   VAR_1, VAR_5);
 VAR_7 &= ~(VAR_3 | VAR_4);
 FUNC_1(VAR_6->device, VAR_0,
   VAR_1, VAR_5, VAR_7);


 FUNC_2(VAR_6, VAR_2);
}
