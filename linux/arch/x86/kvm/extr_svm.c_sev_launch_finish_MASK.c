
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sev_data_launch_finish {int handle; } ;
struct kvm_sev_info {int handle; } ;
struct kvm_sev_cmd {int error; } ;
struct kvm {int dummy; } ;
struct TYPE_2__ {struct kvm_sev_info sev_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sev_data_launch_finish*) ;
 struct sev_data_launch_finish* FUNC_1 (int,int ) ;
 int FUNC_2 (struct kvm*) ;
 int FUNC_3 (struct kvm*,int ,struct sev_data_launch_finish*,int *) ;
 TYPE_1__* FUNC_4 (struct kvm*) ;

__attribute__((used)) static int FUNC_5(struct kvm *VAR_4, struct kvm_sev_cmd *VAR_5)
{
 struct kvm_sev_info *VAR_6 = &FUNC_4(VAR_4)->sev_info;
 struct sev_data_launch_finish *VAR_7;
 int VAR_8;

 if (!FUNC_2(VAR_4))
  return -VAR_1;

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->handle = VAR_6->handle;
 VAR_8 = FUNC_3(VAR_4, VAR_3, VAR_7, &VAR_5->error);

 FUNC_0(VAR_7);
 return VAR_8;
}
