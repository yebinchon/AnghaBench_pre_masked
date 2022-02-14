
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sensor_device_attribute {size_t index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct aem_data {int* energy; int lock; int * power_period; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct aem_data* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 long FUNC_6 (int ) ;
 int FUNC_7 (char*,char*,unsigned long long) ;
 struct sensor_device_attribute* FUNC_8 (struct device_attribute*) ;
 int FUNC_9 (struct aem_data*,size_t) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_2,
         struct device_attribute *VAR_3,
         char *VAR_4)
{
 struct sensor_device_attribute *VAR_5 = FUNC_8(VAR_3);
 struct aem_data *VAR_6 = FUNC_0(VAR_2);
 u64 VAR_7, VAR_8, VAR_9, VAR_10;
 signed long VAR_11;

 FUNC_4(&VAR_6->lock);
 FUNC_9(VAR_6, VAR_5->index);
 VAR_10 = FUNC_2();
 VAR_7 = VAR_6->energy[VAR_5->index];

 VAR_11 = FUNC_6(
   FUNC_3(VAR_6->power_period[VAR_5->index])
     );
 if (VAR_11) {
  FUNC_5(&VAR_6->lock);
  return 0;
 }

 FUNC_9(VAR_6, VAR_5->index);
 VAR_10 = FUNC_2() - VAR_10;
 VAR_8 = VAR_6->energy[VAR_5->index];
 FUNC_5(&VAR_6->lock);

 VAR_9 = (VAR_8 - VAR_7) * VAR_1;

 return FUNC_7(VAR_4, "%llu\n",
  (unsigned long long)FUNC_1(VAR_9 * VAR_0, VAR_10));
}
