
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parsed_partitions {int access_beyond_eod; TYPE_1__* bdev; } ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {int bd_disk; } ;
typedef int Sector ;


 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (TYPE_1__*,scalar_t__,int *) ;

__attribute__((used)) static inline void *FUNC_2(struct parsed_partitions *VAR_0,
         sector_t VAR_1, Sector *VAR_2)
{
 if (VAR_1 >= FUNC_0(VAR_0->bdev->bd_disk)) {
  VAR_0->access_beyond_eod = 1;
  return ((void*)0);
 }
 return FUNC_1(VAR_0->bdev, VAR_1, VAR_2);
}
