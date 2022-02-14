
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ucode_cpu_info {scalar_t__ valid; } ;
typedef enum ucode_state { ____Placeholder_ucode_state } ucode_state ;
struct TYPE_4__ {int (* request_microcode_fw ) (int,int *,int) ;} ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_2__* VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int,int *,int) ;
 scalar_t__ VAR_7 ;
 struct ucode_cpu_info* VAR_8 ;

__attribute__((used)) static enum ucode_state FUNC_4(int VAR_9, bool VAR_10)
{
 enum ucode_state VAR_11;
 struct ucode_cpu_info *VAR_12 = VAR_8 + VAR_9;

 if (VAR_12->valid)
  return VAR_4;

 if (FUNC_1(VAR_9))
  return VAR_1;


 if (VAR_7 != VAR_0)
  return VAR_3;

 VAR_11 = VAR_5->request_microcode_fw(VAR_9, &VAR_6->dev, VAR_10);
 if (VAR_11 == VAR_2) {
  FUNC_2("CPU%d updated upon init\n", VAR_9);
  FUNC_0(VAR_9);
 }

 return VAR_11;
}
