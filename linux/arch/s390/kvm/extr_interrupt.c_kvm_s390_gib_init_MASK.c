
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
struct kvm_s390_gib {void* nisc; } ;
struct TYPE_6__ {int aiv; } ;
struct TYPE_5__ {void* isc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,...) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_4__ VAR_4 ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (int) ;
 struct kvm_s390_gib* VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

int FUNC_7(u8 VAR_7)
{
 int VAR_8 = 0;

 if (!VAR_4.aiv) {
  FUNC_0(3, "%s", "gib not initialized, no AIV facility");
  goto out;
 }

 VAR_5 = (struct kvm_s390_gib *)FUNC_3(VAR_3 | VAR_2);
 if (!VAR_5) {
  VAR_8 = -VAR_1;
  goto out;
 }

 VAR_6.isc = VAR_7;
 if (FUNC_5(&VAR_6)) {
  FUNC_4("Registering the GIB alert interruption handler failed\n");
  VAR_8 = -VAR_0;
  goto out_free_gib;
 }

 VAR_5->nisc = VAR_7;
 if (FUNC_1((u32)(u64)VAR_5)) {
  FUNC_4("Associating the GIB with the AIV facility failed\n");
  FUNC_2((unsigned long)VAR_5);
  VAR_5 = ((void*)0);
  VAR_8 = -VAR_0;
  goto out_unreg_gal;
 }

 FUNC_0(3, "gib 0x%pK (nisc=%d) initialized", VAR_5, VAR_5->nisc);
 goto out;

out_unreg_gal:
 FUNC_6(&VAR_6);
out_free_gib:
 FUNC_2((unsigned long)VAR_5);
 VAR_5 = ((void*)0);
out:
 return VAR_8;
}
