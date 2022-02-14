
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mem_ctl_info {struct amd64_pvt* pvt_info; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int section; } ;
struct amd64_pvt {int F3; TYPE_1__ injection; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 () ;
 int VAR_4 ;
 int FUNC_5 (int ,char*,int,int) ;
 int VAR_5 ;
 int FUNC_6 (char const*,int,unsigned long*) ;
 int FUNC_7 (int ,int *,int) ;
 int FUNC_8 (char*) ;
 struct mem_ctl_info* FUNC_9 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_6,
     struct device_attribute *VAR_7,
     const char *VAR_8, size_t VAR_9)
{
 struct mem_ctl_info *VAR_10 = FUNC_9(VAR_6);
 struct amd64_pvt *VAR_11 = VAR_10->pvt_info;
 u32 VAR_12, VAR_13, VAR_14;
 unsigned long VAR_15;
 int VAR_16;

 VAR_16 = FUNC_6(VAR_8, 10, &VAR_15);
 if (VAR_16 < 0)
  return VAR_16;


 VAR_12 = VAR_2 | FUNC_0(VAR_11->injection.section);

 FUNC_3(VAR_11->F3, VAR_0, VAR_12);

 VAR_13 = FUNC_1(VAR_11->injection);

 FUNC_8("Don't forget to decrease MCE polling interval in\n"
   "/sys/bus/machinecheck/devices/machinecheck<CPUNUM>/check_interval\n"
   "so that you can get the error report faster.\n");

 FUNC_7(VAR_4, ((void*)0), 1);


 FUNC_3(VAR_11->F3, VAR_1, VAR_13);

 retry:

 FUNC_2(VAR_11->F3, VAR_1, &VAR_14);
 if (VAR_14 & VAR_3) {
  FUNC_4();
  goto retry;
 }

 FUNC_7(VAR_5, ((void*)0), 1);

 FUNC_5(0, "section=0x%x word_bits=0x%x\n", VAR_12, VAR_13);

 return VAR_9;
}
