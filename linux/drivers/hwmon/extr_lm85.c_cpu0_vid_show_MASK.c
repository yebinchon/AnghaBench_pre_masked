
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm85_data {int vid; int vrm; scalar_t__ has_vid5; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct lm85_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
        struct device_attribute *VAR_1, char *VAR_2)
{
 struct lm85_data *VAR_3 = FUNC_0(VAR_0);
 int VAR_4;

 if (VAR_3->has_vid5) {

  VAR_4 = FUNC_2(VAR_3->vid & 0x3f, VAR_3->vrm);
 } else {

  VAR_4 = FUNC_2(VAR_3->vid & 0x1f, VAR_3->vrm);
 }

 return FUNC_1(VAR_2, "%d\n", VAR_4);
}
