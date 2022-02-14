
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct temp_data {unsigned int cpu; int update_lock; } ;
struct platform_device {int dummy; } ;
struct platform_data {int cpumask; struct temp_data** core_data; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (unsigned int) ;
 struct platform_device* FUNC_1 (unsigned int) ;
 int FUNC_2 (struct platform_data*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (unsigned int,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_3 ;
 int FUNC_9 (struct platform_device*) ;
 struct platform_data* FUNC_10 (struct platform_device*) ;
 size_t FUNC_11 (unsigned int) ;
 int FUNC_12 (unsigned int) ;
 int ** VAR_4 ;

__attribute__((used)) static int FUNC_13(unsigned int VAR_5)
{
 struct platform_device *VAR_6 = FUNC_1(VAR_5);
 struct platform_data *VAR_7;
 struct temp_data *VAR_8;
 int VAR_9, VAR_10;





 if (VAR_2)
  return 0;


 if (!VAR_6)
  return 0;


 VAR_9 = FUNC_0(VAR_5);
 if (VAR_9 > VAR_0 - 1)
  return 0;

 VAR_7 = FUNC_10(VAR_6);
 VAR_8 = VAR_7->core_data[VAR_9];

 FUNC_4(VAR_5, &VAR_7->cpumask);






 VAR_10 = FUNC_3(&VAR_7->cpumask, FUNC_12(VAR_5));
 if (VAR_10 >= VAR_3) {
  FUNC_2(VAR_7, VAR_9);
 } else if (VAR_8 && VAR_8->cpu == VAR_5) {
  FUNC_7(&VAR_8->update_lock);
  VAR_8->cpu = VAR_10;
  FUNC_8(&VAR_8->update_lock);
 }






 if (FUNC_5(&VAR_7->cpumask)) {
  VAR_4[FUNC_11(VAR_5)] = ((void*)0);
  FUNC_9(VAR_6);
  return 0;
 }





 VAR_8 = VAR_7->core_data[VAR_1];
 if (VAR_8 && VAR_8->cpu == VAR_5) {
  VAR_10 = FUNC_6(&VAR_7->cpumask);
  FUNC_7(&VAR_8->update_lock);
  VAR_8->cpu = VAR_10;
  FUNC_8(&VAR_8->update_lock);
 }
 return 0;
}
