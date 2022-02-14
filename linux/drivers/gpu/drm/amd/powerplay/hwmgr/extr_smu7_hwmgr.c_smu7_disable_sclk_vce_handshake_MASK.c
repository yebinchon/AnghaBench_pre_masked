
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct smu7_hwmgr {scalar_t__ soft_regs_start; } ;
struct pp_hwmgr {int device; scalar_t__ backend; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct pp_hwmgr*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct pp_hwmgr *VAR_4)
{
 struct smu7_hwmgr *VAR_5 = (struct smu7_hwmgr *)(VAR_4->backend);
 uint32_t VAR_6 = 0;
 uint32_t VAR_7 = VAR_5->soft_regs_start
    + FUNC_2(VAR_4,
     VAR_3, VAR_1);

 VAR_6 = FUNC_0(VAR_4->device,
    VAR_0, VAR_7);
 VAR_6 |= VAR_2;
 FUNC_1(VAR_4->device, VAR_0,
   VAR_7, VAR_6);
 return 0;
}
