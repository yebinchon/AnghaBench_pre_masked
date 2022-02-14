
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kimage {int dummy; } ;
struct TYPE_2__ {int (* machine_kexec_prepare ) (struct kimage*) ;} ;


 int FUNC_0 (struct kimage*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (struct kimage*) ;

int FUNC_2(struct kimage *VAR_1)
{
 if (VAR_0.machine_kexec_prepare)
  return VAR_0.machine_kexec_prepare(VAR_1);
 else
  return FUNC_0(VAR_1);
}
