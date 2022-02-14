
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmgt_guest_info {int vgpu; int kvm; int track_node; int debugfs_cache_entries; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct kvmgt_guest_info*) ;
 int FUNC_5 (struct kvmgt_guest_info*) ;

__attribute__((used)) static bool FUNC_6(struct kvmgt_guest_info *VAR_0)
{
 FUNC_0(VAR_0->debugfs_cache_entries);

 FUNC_2(VAR_0->kvm, &VAR_0->track_node);
 FUNC_3(VAR_0->kvm);
 FUNC_4(VAR_0);
 FUNC_1(VAR_0->vgpu);
 FUNC_5(VAR_0);

 return 1;
}
