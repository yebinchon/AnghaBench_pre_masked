
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct throtl_data {int scale; int low_upgrade_time; int throtl_slice; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;

__attribute__((used)) static uint64_t FUNC_1(uint64_t VAR_1, struct throtl_data *VAR_2)
{

 if (VAR_2->scale < 4096 && FUNC_0(VAR_0,
     VAR_2->low_upgrade_time + VAR_2->scale * VAR_2->throtl_slice))
  VAR_2->scale = (VAR_0 - VAR_2->low_upgrade_time) / VAR_2->throtl_slice;

 return VAR_1 + (VAR_1 >> 1) * VAR_2->scale;
}
