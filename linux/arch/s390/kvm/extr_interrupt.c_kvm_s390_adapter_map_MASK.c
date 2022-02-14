
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s390_map_info {int addr; int page; int list; int guest_addr; } ;
struct s390_io_adapter {int maps_lock; int maps; int nr_maps; } ;
struct TYPE_2__ {int gmap; } ;
struct kvm {TYPE_1__ arch; } ;
typedef int __u64 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct s390_io_adapter* FUNC_4 (struct kvm*,unsigned int) ;
 int FUNC_5 (int,int,int ,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct s390_map_info*) ;
 struct s390_map_info* FUNC_8 (int,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct kvm *VAR_6, unsigned int VAR_7, __u64 VAR_8)
{
 struct s390_io_adapter *VAR_9 = FUNC_4(VAR_6, VAR_7);
 struct s390_map_info *VAR_10;
 int VAR_11;

 if (!VAR_9 || !VAR_8)
  return -VAR_1;

 VAR_10 = FUNC_8(sizeof(*VAR_10), VAR_4);
 if (!VAR_10) {
  VAR_11 = -VAR_2;
  goto out;
 }
 FUNC_1(&VAR_10->list);
 VAR_10->guest_addr = VAR_8;
 VAR_10->addr = FUNC_6(VAR_6->arch.gmap, VAR_8);
 if (VAR_10->addr == -VAR_0) {
  VAR_11 = -VAR_0;
  goto out;
 }
 VAR_11 = FUNC_5(VAR_10->addr, 1, VAR_3, &VAR_10->page);
 if (VAR_11 < 0)
  goto out;
 FUNC_0(VAR_11 != 1);
 FUNC_3(&VAR_9->maps_lock);
 if (FUNC_2(&VAR_9->nr_maps) < VAR_5) {
  FUNC_9(&VAR_10->list, &VAR_9->maps);
  VAR_11 = 0;
 } else {
  FUNC_10(VAR_10->page);
  VAR_11 = -VAR_1;
 }
 FUNC_11(&VAR_9->maps_lock);
out:
 if (VAR_11)
  FUNC_7(VAR_10);
 return VAR_11;
}
