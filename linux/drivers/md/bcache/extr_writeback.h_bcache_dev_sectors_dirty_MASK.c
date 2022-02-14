
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct bcache_device {scalar_t__ nr_stripes; scalar_t__ stripe_sectors_dirty; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline uint64_t FUNC_1(struct bcache_device *VAR_0)
{
 uint64_t VAR_1, VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < VAR_0->nr_stripes; VAR_1++)
  VAR_2 += FUNC_0(VAR_0->stripe_sectors_dirty + VAR_1);

 return VAR_2;
}
