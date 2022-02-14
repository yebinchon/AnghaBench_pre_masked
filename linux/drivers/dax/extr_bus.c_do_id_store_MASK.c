
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int dummy; } ;
struct dax_id {int list; int dev_name; } ;
struct dax_device_driver {int ids; } ;
typedef int ssize_t ;
typedef enum id_action { ____Placeholder_id_action } id_action ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct dax_id* FUNC_0 (struct dax_device_driver*,char const*) ;
 int VAR_6 ;
 int FUNC_1 (struct device_driver*) ;
 int FUNC_2 (struct dax_id*) ;
 struct dax_id* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,char*,unsigned int,unsigned int) ;
 int FUNC_9 (char const*,char*,unsigned int*,unsigned int*) ;
 int FUNC_10 (int ,char const*,int) ;
 int FUNC_11 (char const*,char*) ;
 struct dax_device_driver* FUNC_12 (struct device_driver*) ;

__attribute__((used)) static ssize_t FUNC_13(struct device_driver *VAR_7, const char *VAR_8,
  size_t VAR_9, enum id_action VAR_10)
{
 struct dax_device_driver *VAR_11 = FUNC_12(VAR_7);
 unsigned int VAR_12, VAR_13;
 char VAR_14[VAR_0];
 struct dax_id *VAR_15;
 ssize_t VAR_16 = VAR_9;
 int VAR_17;

 VAR_17 = FUNC_9(VAR_8, "dax%d.%d", &VAR_12, &VAR_13);
 if (VAR_17 != 2)
  return -VAR_1;
 FUNC_8(VAR_14, "dax%d.%d", VAR_12, VAR_13);
 if (!FUNC_11(VAR_8, VAR_14))
  return -VAR_1;

 FUNC_6(&VAR_6);
 VAR_15 = FUNC_0(VAR_11, VAR_8);
 if (!VAR_15) {
  if (VAR_10 == VAR_4) {
   VAR_15 = FUNC_3(sizeof(*VAR_15), VAR_3);
   if (VAR_15) {
    FUNC_10(VAR_15->dev_name, VAR_8, VAR_0);
    FUNC_4(&VAR_15->list, &VAR_11->ids);
   } else
    VAR_16 = -VAR_2;
  } else
                          ;
 } else if (VAR_10 == VAR_5) {
  FUNC_5(&VAR_15->list);
  FUNC_2(VAR_15);
 } else
                            ;
 FUNC_7(&VAR_6);

 if (VAR_16 < 0)
  return VAR_16;
 if (VAR_10 == VAR_4)
  VAR_16 = FUNC_1(VAR_7);
 if (VAR_16)
  return VAR_16;
 return VAR_9;
}
