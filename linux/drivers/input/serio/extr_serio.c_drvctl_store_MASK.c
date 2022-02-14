
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int dummy; } ;
struct device_driver {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct device_driver* FUNC_0 (char const*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct serio*,int ) ;
 int VAR_2 ;
 int FUNC_4 (struct serio*) ;
 int FUNC_5 (struct serio*) ;
 int VAR_3 ;
 int FUNC_6 (struct serio*) ;
 int FUNC_7 (struct serio*,int ) ;
 int FUNC_8 (char const*,char*,size_t) ;
 int FUNC_9 (struct device_driver*) ;
 struct serio* FUNC_10 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_11(struct device *VAR_4, struct device_attribute *VAR_5, const char *VAR_6, size_t VAR_7)
{
 struct serio *VAR_8 = FUNC_10(VAR_4);
 struct device_driver *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(&VAR_3);
 if (VAR_10)
  return VAR_10;

 if (!FUNC_8(VAR_6, "none", VAR_7)) {
  FUNC_4(VAR_8);
 } else if (!FUNC_8(VAR_6, "reconnect", VAR_7)) {
  FUNC_6(VAR_8);
 } else if (!FUNC_8(VAR_6, "rescan", VAR_7)) {
  FUNC_4(VAR_8);
  FUNC_5(VAR_8);
  FUNC_7(VAR_8, VAR_1);
 } else if ((VAR_9 = FUNC_0(VAR_6, &VAR_2)) != ((void*)0)) {
  FUNC_4(VAR_8);
  VAR_10 = FUNC_3(VAR_8, FUNC_9(VAR_9));
  FUNC_7(VAR_8, VAR_1);
 } else {
  VAR_10 = -VAR_0;
 }

 FUNC_2(&VAR_3);

 return VAR_10 ? VAR_10 : VAR_7;
}
