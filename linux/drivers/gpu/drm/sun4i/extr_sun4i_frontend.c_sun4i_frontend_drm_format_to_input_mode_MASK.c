
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int u32 ;
struct drm_format_info {int num_planes; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_0(const struct drm_format_info *VAR_7,
     uint64_t VAR_8, u32 *VAR_9)
{
 bool VAR_10 = (VAR_8 == VAR_0);

 switch (VAR_7->num_planes) {
 case 1:
  *VAR_9 = VAR_4;
  return 0;

 case 2:
  *VAR_9 = VAR_10 ? VAR_3
        : VAR_6;
  return 0;

 case 3:
  *VAR_9 = VAR_10 ? VAR_2
        : VAR_5;
  return 0;

 default:
  return -VAR_1;
 }
}
