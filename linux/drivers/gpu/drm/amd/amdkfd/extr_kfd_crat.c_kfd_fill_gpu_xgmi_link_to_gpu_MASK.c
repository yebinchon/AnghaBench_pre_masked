
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct kfd_dev {int kgd; } ;
struct crat_subtype_iolink {int length; int flags; int num_hops_xgmi; void* proximity_domain_to; void* proximity_domain_from; int io_interface_type; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (void*,int ,int) ;

__attribute__((used)) static int FUNC_2(int *VAR_5,
   struct kfd_dev *VAR_6,
   struct kfd_dev *VAR_7,
   struct crat_subtype_iolink *VAR_8,
   uint32_t VAR_9,
   uint32_t VAR_10)
{
 *VAR_5 -= sizeof(struct crat_subtype_iolink);
 if (*VAR_5 < 0)
  return -VAR_4;

 FUNC_1((void *)VAR_8, 0, sizeof(struct crat_subtype_iolink));

 VAR_8->type = VAR_3;
 VAR_8->length = sizeof(struct crat_subtype_iolink);
 VAR_8->flags |= VAR_2 |
          VAR_0;

 VAR_8->io_interface_type = VAR_1;
 VAR_8->proximity_domain_from = VAR_9;
 VAR_8->proximity_domain_to = VAR_10;
 VAR_8->num_hops_xgmi =
  FUNC_0(VAR_6->kgd, VAR_7->kgd);
 return 0;
}
