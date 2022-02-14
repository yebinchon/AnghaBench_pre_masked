
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7x10_data {void* hyst; int * temp; } ;
typedef int ssize_t ;


 int FUNC_0 (struct adt7x10_data*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long FUNC_1 (int,int) ;
 int FUNC_2 (struct device*,int ,void*) ;
 void* FUNC_3 (long,int ,int ) ;
 struct adt7x10_data* FUNC_4 (struct device*) ;
 int FUNC_5 (char const*,int,long*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_4,
        struct device_attribute *VAR_5,
        const char *VAR_6, size_t VAR_7)
{
 struct adt7x10_data *VAR_8 = FUNC_4(VAR_4);
 int VAR_9, VAR_10;
 long VAR_11;

 VAR_10 = FUNC_5(VAR_6, 10, &VAR_11);
 if (VAR_10)
  return VAR_10;

 VAR_9 = FUNC_0(VAR_8, VAR_8->temp[1]);
 VAR_11 = FUNC_3(VAR_11, VAR_1, VAR_0);
 VAR_8->hyst = FUNC_3(FUNC_1(VAR_9 - VAR_11, 1000),
       0, VAR_3);
 VAR_10 = FUNC_2(VAR_4, VAR_2, VAR_8->hyst);
 if (VAR_10)
  return VAR_10;

 return VAR_7;
}
