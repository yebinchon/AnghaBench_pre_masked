
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_sham_dev {long fallback_sz; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 struct omap_sham_dev* FUNC_1 (struct device*) ;
 size_t FUNC_2 (char const*,int ,long*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
         const char *VAR_3, size_t VAR_4)
{
 struct omap_sham_dev *VAR_5 = FUNC_1(VAR_1);
 ssize_t VAR_6;
 long VAR_7;

 VAR_6 = FUNC_2(VAR_3, 0, &VAR_7);
 if (VAR_6)
  return VAR_6;


 if (VAR_7 < 9) {
  FUNC_0(VAR_1, "minimum fallback size 9\n");
  return -VAR_0;
 }

 VAR_5->fallback_sz = VAR_7;

 return VAR_4;
}
