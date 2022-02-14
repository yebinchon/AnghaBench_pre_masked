
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_head {scalar_t__ disks; } ;
struct raid5_percpu {int dummy; } ;
typedef void addr_conv_t ;


 scalar_t__ FUNC_0 (struct raid5_percpu*,int) ;

__attribute__((used)) static addr_conv_t *FUNC_1(struct stripe_head *VAR_0,
     struct raid5_percpu *VAR_1, int VAR_2)
{
 return (void *) (FUNC_0(VAR_1, VAR_2) + VAR_0->disks + 2);
}
