
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nullb_device {int zone_size_sects; } ;
typedef unsigned int sector_t ;


 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct nullb_device *VAR_0, sector_t VAR_1)
{
 return VAR_1 >> FUNC_0(VAR_0->zone_size_sects);
}
