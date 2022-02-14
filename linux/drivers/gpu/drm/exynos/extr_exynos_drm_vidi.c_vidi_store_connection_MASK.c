
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vidi_context {int connected; int drm_dev; struct edid* raw_edid; } ;
struct edid {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct device*,char*) ;
 int VAR_0 ;
 struct vidi_context* FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char const*,int ,int*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
    struct device_attribute *VAR_3,
    const char *VAR_4, size_t VAR_5)
{
 struct vidi_context *VAR_6 = FUNC_1(VAR_2);
 int VAR_7;

 VAR_7 = FUNC_3(VAR_4, 0, &VAR_6->connected);
 if (VAR_7)
  return VAR_7;

 if (VAR_6->connected > 1)
  return -VAR_0;


 if (!VAR_6->raw_edid)
  VAR_6->raw_edid = (struct edid *)VAR_1;


 if (VAR_6->raw_edid != (struct edid *)VAR_1) {
  FUNC_0(VAR_2, "edid data is not fake data.\n");
  return -VAR_0;
 }

 FUNC_0(VAR_2, "requested connection.\n");

 FUNC_2(VAR_6->drm_dev);

 return VAR_5;
}
