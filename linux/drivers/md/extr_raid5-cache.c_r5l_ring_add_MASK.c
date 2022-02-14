
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5l_log {scalar_t__ device_size; } ;
typedef scalar_t__ sector_t ;



__attribute__((used)) static sector_t FUNC_0(struct r5l_log *VAR_0, sector_t VAR_1, sector_t VAR_2)
{
 VAR_1 += VAR_2;
 if (VAR_1 >= VAR_0->device_size)
  VAR_1 = VAR_1 - VAR_0->device_size;
 return VAR_1;
}
