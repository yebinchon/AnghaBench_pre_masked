
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rwrt_feature_desc {int curr; int feature_code; } ;
struct cdrom_device_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct cdrom_device_info*,struct rwrt_feature_desc*) ;
 int FUNC_3 (struct cdrom_device_info*) ;

__attribute__((used)) static int FUNC_4(struct cdrom_device_info *VAR_2)
{
 struct rwrt_feature_desc VAR_3;
 int VAR_4;

 if ((VAR_4 = FUNC_3(VAR_2)))
  return VAR_4;

 if ((VAR_4 = FUNC_2(VAR_2, &VAR_3)))
  return VAR_4;
 else if (VAR_0 == FUNC_0(VAR_3.feature_code))
  VAR_4 = !VAR_3.curr;

 FUNC_1(VAR_1, "can open for random write\n");
 return VAR_4;
}
