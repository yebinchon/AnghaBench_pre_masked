
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct smu7_hwmgr {int need_long_memory_training; int mem_latency_high; int mem_latency_low; } ;
struct TYPE_2__ {int MC; } ;
struct pp_hwmgr {scalar_t__ chip_id; int device; TYPE_1__ microcode_version_info; scalar_t__ backend; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct pp_hwmgr*) ;
 int FUNC_3 (struct pp_hwmgr*,int ) ;

__attribute__((used)) static int FUNC_4(struct pp_hwmgr *VAR_10)
{
 struct smu7_hwmgr *VAR_11 = (struct smu7_hwmgr *)(VAR_10->backend);

 uint32_t VAR_12;
 uint32_t VAR_13;






 FUNC_2(VAR_10);
 VAR_12 = VAR_10->microcode_version_info.MC & 0xf;

 VAR_11->need_long_memory_training = 0;

 FUNC_1(VAR_10->device, VAR_9,
       VAR_7);
 VAR_13 = FUNC_0(VAR_10->device, VAR_8);

 if (VAR_13 & (1 << 23)) {
  VAR_11->mem_latency_high = VAR_3;
  VAR_11->mem_latency_low = VAR_4;
  if ((VAR_10->chip_id == VAR_0) ||
      (VAR_10->chip_id == VAR_1) ||
      (VAR_10->chip_id == VAR_2))
   FUNC_3(VAR_10, VAR_6);
 } else {
  VAR_11->mem_latency_high = 330;
  VAR_11->mem_latency_low = 330;
  if ((VAR_10->chip_id == VAR_0) ||
      (VAR_10->chip_id == VAR_1) ||
      (VAR_10->chip_id == VAR_2))
   FUNC_3(VAR_10, VAR_5);
 }

 return 0;
}
