
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct kvm {int srcu; } ;
typedef int gfn_t ;
struct TYPE_2__ {int tss_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct kvm*,int,int ,int) ;
 int FUNC_1 (struct kvm*,int,scalar_t__*,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 TYPE_1__* FUNC_4 (struct kvm*) ;

__attribute__((used)) static int FUNC_5(struct kvm *VAR_6)
{
 gfn_t VAR_7;
 u16 VAR_8 = 0;
 int VAR_9, VAR_10;

 VAR_9 = FUNC_2(&VAR_6->srcu);
 VAR_7 = FUNC_4(VAR_6)->tss_addr >> VAR_0;
 VAR_10 = FUNC_0(VAR_6, VAR_7, 0, VAR_1);
 if (VAR_10 < 0)
  goto out;
 VAR_8 = VAR_3 + VAR_5;
 VAR_10 = FUNC_1(VAR_6, VAR_7++, &VAR_8,
   VAR_4, sizeof(u16));
 if (VAR_10 < 0)
  goto out;
 VAR_10 = FUNC_0(VAR_6, VAR_7++, 0, VAR_1);
 if (VAR_10 < 0)
  goto out;
 VAR_10 = FUNC_0(VAR_6, VAR_7, 0, VAR_1);
 if (VAR_10 < 0)
  goto out;
 VAR_8 = ~0;
 VAR_10 = FUNC_1(VAR_6, VAR_7, &VAR_8,
     VAR_2 - 2 * VAR_1 - 1,
     sizeof(u8));
out:
 FUNC_3(&VAR_6->srcu, VAR_9);
 return VAR_10;
}
