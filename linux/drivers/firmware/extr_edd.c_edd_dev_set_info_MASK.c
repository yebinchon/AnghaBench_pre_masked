
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct edd_device {int index; int * info; int mbr_signature; } ;
struct TYPE_2__ {int * edd_info; int * mbr_signature; } ;


 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_0 (struct edd_device*) ;
 scalar_t__ FUNC_1 (struct edd_device*) ;

__attribute__((used)) static inline void
FUNC_2(struct edd_device *VAR_1, int VAR_2)
{
 VAR_1->index = VAR_2;
 if (FUNC_1(VAR_1))
  VAR_1->mbr_signature = VAR_0.mbr_signature[VAR_2];
 if (FUNC_0(VAR_1))
  VAR_1->info = &VAR_0.edd_info[VAR_2];
}
