
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {unsigned int stripe_size; scalar_t__ stripe_sectors_dirty; } ;
struct cached_dev {TYPE_1__ disk; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 unsigned int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static inline bool FUNC_2(struct cached_dev *VAR_0,
        uint64_t VAR_1,
        unsigned int VAR_2)
{
 unsigned int VAR_3 = FUNC_1(&VAR_0->disk, VAR_1);

 while (1) {
  if (FUNC_0(VAR_0->disk.stripe_sectors_dirty + VAR_3))
   return 1;

  if (VAR_2 <= VAR_0->disk.stripe_size)
   return 0;

  VAR_2 -= VAR_0->disk.stripe_size;
  VAR_3++;
 }
}
