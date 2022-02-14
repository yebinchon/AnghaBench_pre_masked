
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_kp {int irq; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct omap_kp* FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*,char*,int*) ;
 int FUNC_6 (char const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_3, struct device_attribute *VAR_4,
        const char *VAR_5, size_t VAR_6)
{
 struct omap_kp *VAR_7 = FUNC_0(VAR_3);
 int VAR_8;

 if (FUNC_5(VAR_5, "%u", &VAR_8) != 1)
  return -VAR_0;

 if ((VAR_8 != 1) && (VAR_8 != 0))
  return -VAR_0;

 FUNC_3(&VAR_2);
 if (VAR_8 != VAR_1) {
  if (VAR_8)
   FUNC_2(VAR_7->irq);
  else
   FUNC_1(VAR_7->irq);
  VAR_1 = VAR_8;
 }
 FUNC_4(&VAR_2);

 return FUNC_6(VAR_5, VAR_6);
}
