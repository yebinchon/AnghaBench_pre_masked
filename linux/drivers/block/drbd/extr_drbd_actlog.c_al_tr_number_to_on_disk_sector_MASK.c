
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drbd_device {unsigned int al_tr_number; TYPE_1__* ldev; } ;
typedef scalar_t__ sector_t ;
struct TYPE_4__ {unsigned int al_stripes; unsigned int al_stripe_size_4k; unsigned int al_size_4k; scalar_t__ al_offset; scalar_t__ md_offset; } ;
struct TYPE_3__ {TYPE_2__ md; } ;



__attribute__((used)) static sector_t FUNC_0(struct drbd_device *VAR_0)
{
 const unsigned int VAR_1 = VAR_0->ldev->md.al_stripes;
 const unsigned int VAR_2 = VAR_0->ldev->md.al_stripe_size_4k;


 unsigned int VAR_3 = VAR_0->al_tr_number % (VAR_0->ldev->md.al_size_4k);


 VAR_3 = ((VAR_3 % VAR_1) * VAR_2) + VAR_3/VAR_1;


 VAR_3 *= 8;


 return VAR_0->ldev->md.md_offset + VAR_0->ldev->md.al_offset + VAR_3;
}
