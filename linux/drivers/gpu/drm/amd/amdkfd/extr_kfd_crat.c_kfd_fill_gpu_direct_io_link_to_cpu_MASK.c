
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct kfd_dev {TYPE_2__* pdev; } ;
struct crat_subtype_iolink {int length; scalar_t__ proximity_domain_to; int proximity_domain_from; int io_interface_type; int flags; int type; } ;
struct TYPE_3__ {scalar_t__ numa_node; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct kfd_dev*) ;
 int FUNC_1 (void*,int ,int) ;

__attribute__((used)) static int FUNC_2(int *VAR_6,
   struct kfd_dev *VAR_7,
   struct crat_subtype_iolink *VAR_8,
   uint32_t VAR_9)
{
 *VAR_6 -= sizeof(struct crat_subtype_iolink);
 if (*VAR_6 < 0)
  return -VAR_4;

 FUNC_1((void *)VAR_8, 0, sizeof(struct crat_subtype_iolink));


 VAR_8->type = VAR_3;
 VAR_8->length = sizeof(struct crat_subtype_iolink);
 VAR_8->flags |= VAR_2;
 if (FUNC_0(VAR_7))
  VAR_8->flags |= VAR_0;




 VAR_8->io_interface_type = VAR_1;
 VAR_8->proximity_domain_from = VAR_9;






 VAR_8->proximity_domain_to = 0;

 return 0;
}
