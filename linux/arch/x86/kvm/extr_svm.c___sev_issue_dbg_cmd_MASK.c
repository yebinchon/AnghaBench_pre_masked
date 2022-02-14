
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sev_data_dbg {unsigned long dst_addr; unsigned long src_addr; int len; int handle; } ;
struct kvm_sev_info {int handle; } ;
struct kvm {int dummy; } ;
struct TYPE_2__ {struct kvm_sev_info sev_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sev_data_dbg*) ;
 struct sev_data_dbg* FUNC_1 (int,int ) ;
 int FUNC_2 (struct kvm*,int ,struct sev_data_dbg*,int*) ;
 TYPE_1__* FUNC_3 (struct kvm*) ;

__attribute__((used)) static int FUNC_4(struct kvm *VAR_4, unsigned long VAR_5,
          unsigned long VAR_6, int VAR_7,
          int *VAR_8, bool VAR_9)
{
 struct kvm_sev_info *VAR_10 = &FUNC_3(VAR_4)->sev_info;
 struct sev_data_dbg *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_1(sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_11->handle = VAR_10->handle;
 VAR_11->dst_addr = VAR_6;
 VAR_11->src_addr = VAR_5;
 VAR_11->len = VAR_7;

 VAR_12 = FUNC_2(VAR_4,
       VAR_9 ? VAR_3 : VAR_2,
       VAR_11, VAR_8);
 FUNC_0(VAR_11);
 return VAR_12;
}
