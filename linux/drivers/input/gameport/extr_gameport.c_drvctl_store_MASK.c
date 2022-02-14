
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gameport {int dummy; } ;
struct device_driver {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct device_driver* FUNC_0 (char const*,int *) ;
 int FUNC_1 (struct gameport*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct gameport*) ;
 int FUNC_3 (struct gameport*) ;
 int VAR_2 ;
 int FUNC_4 (struct gameport*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char const*,char*,size_t) ;
 int FUNC_8 (struct device_driver*) ;
 struct gameport* FUNC_9 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_3, struct device_attribute *VAR_4, const char *VAR_5, size_t VAR_6)
{
 struct gameport *VAR_7 = FUNC_9(VAR_3);
 struct device_driver *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_5(&VAR_2);
 if (VAR_9)
  return VAR_9;

 if (!FUNC_7(VAR_5, "none", VAR_6)) {
  FUNC_2(VAR_7);
 } else if (!FUNC_7(VAR_5, "reconnect", VAR_6)) {
  FUNC_4(VAR_7);
 } else if (!FUNC_7(VAR_5, "rescan", VAR_6)) {
  FUNC_2(VAR_7);
  FUNC_3(VAR_7);
 } else if ((VAR_8 = FUNC_0(VAR_5, &VAR_1)) != ((void*)0)) {
  FUNC_2(VAR_7);
  VAR_9 = FUNC_1(VAR_7, FUNC_8(VAR_8));
 } else {
  VAR_9 = -VAR_0;
 }

 FUNC_6(&VAR_2);

 return VAR_9 ? VAR_9 : VAR_6;
}
