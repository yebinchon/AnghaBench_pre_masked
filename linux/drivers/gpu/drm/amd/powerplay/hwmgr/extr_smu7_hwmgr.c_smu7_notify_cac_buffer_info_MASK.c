
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smu7_hwmgr {scalar_t__ soft_regs_start; } ;
struct pp_hwmgr {int device; scalar_t__ backend; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (struct pp_hwmgr*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_7,
     uint32_t VAR_8,
     uint32_t VAR_9,
     uint32_t VAR_10,
     uint32_t VAR_11,
     uint32_t VAR_12)
{
 struct smu7_hwmgr *VAR_13 = (struct smu7_hwmgr *)(VAR_7->backend);

 FUNC_0(VAR_7->device, VAR_0,
     VAR_13->soft_regs_start +
     FUNC_1(VAR_7,
     VAR_6, VAR_1),
     VAR_11);

 FUNC_0(VAR_7->device, VAR_0,
     VAR_13->soft_regs_start +
     FUNC_1(VAR_7,
     VAR_6, VAR_2),
     VAR_10);

 FUNC_0(VAR_7->device, VAR_0,
     VAR_13->soft_regs_start +
     FUNC_1(VAR_7,
     VAR_6, VAR_4),
     VAR_9);

 FUNC_0(VAR_7->device, VAR_0,
     VAR_13->soft_regs_start +
     FUNC_1(VAR_7,
     VAR_6, VAR_5),
     VAR_8);

 FUNC_0(VAR_7->device, VAR_0,
     VAR_13->soft_regs_start +
     FUNC_1(VAR_7,
     VAR_6, VAR_3),
     VAR_12);
 return 0;
}
