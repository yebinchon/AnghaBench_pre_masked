
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nx842_devdata {TYPE_1__* counters; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int atomic64_t ;
struct TYPE_2__ {int * decomp_times; int * comp_times; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct device_attribute VAR_2 ;
 struct device_attribute VAR_3 ;
 int VAR_4 ;
 struct nx842_devdata* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int,char*,int,int,...) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_5,
  struct device_attribute *VAR_6, char *VAR_7) {
 char *VAR_8 = VAR_7;
 struct nx842_devdata *VAR_9;
 atomic64_t *VAR_10;
 int VAR_11 = VAR_1;
 int VAR_12;
 int VAR_13;

 FUNC_2();
 VAR_9 = FUNC_1(VAR_4);
 if (!VAR_9) {
  FUNC_3();
  return 0;
 }

 if (VAR_6 == &VAR_2)
  VAR_10 = VAR_9->counters->comp_times;
 else if (VAR_6 == &VAR_3)
  VAR_10 = VAR_9->counters->decomp_times;
 else {
  FUNC_3();
  return 0;
 }

 for (VAR_13 = 0; VAR_13 < (VAR_0 - 2); VAR_13++) {
  VAR_12 = FUNC_4(VAR_8, VAR_11, "%u-%uus:\t%lld\n",
          VAR_13 ? (2<<(VAR_13-1)) : 0, (2<<VAR_13)-1,
          FUNC_0(&VAR_10[VAR_13]));
  VAR_11 -= VAR_12;
  VAR_8 += VAR_12;
 }


 VAR_12 = FUNC_4(VAR_8, VAR_11, "%uus - :\t%lld\n",
   2<<(VAR_0 - 2),
   FUNC_0(&VAR_10[(VAR_0 - 1)]));
 VAR_8 += VAR_12;

 FUNC_3();
 return VAR_8 - VAR_7;
}
