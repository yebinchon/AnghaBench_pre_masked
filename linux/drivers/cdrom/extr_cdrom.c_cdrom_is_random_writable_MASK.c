
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rwrt_feature_desc {int feature_code; } ;
struct cdrom_device_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct cdrom_device_info*,struct rwrt_feature_desc*) ;

__attribute__((used)) static int FUNC_2(struct cdrom_device_info *VAR_1, int *VAR_2)
{
 struct rwrt_feature_desc VAR_3;
 int VAR_4;

 *VAR_2 = 0;

 if ((VAR_4 = FUNC_1(VAR_1, &VAR_3)))
  return VAR_4;

 if (VAR_0 == FUNC_0(VAR_3.feature_code))
  *VAR_2 = 1;

 return 0;
}
