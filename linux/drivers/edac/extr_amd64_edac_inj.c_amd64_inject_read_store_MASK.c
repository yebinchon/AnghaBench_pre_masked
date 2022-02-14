
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
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,char*,int,int) ;
 int FUNC_4 (char const*,int,unsigned long*) ;
 struct mem_ctl_info* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3,
           struct device_attribute *VAR_4,
           const char *VAR_5, size_t VAR_6)
{
 struct mem_ctl_info *VAR_7 = FUNC_5(VAR_3);
 struct amd64_pvt *VAR_8 = VAR_7->pvt_info;
 unsigned long VAR_9;
 u32 VAR_10, VAR_11;
 int VAR_12;

 VAR_12 = FUNC_4(VAR_5, 10, &VAR_9);
 if (VAR_12 < 0)
  return VAR_12;


 VAR_10 = VAR_2 | FUNC_0(VAR_8->injection.section);

 FUNC_2(VAR_8->F3, VAR_0, VAR_10);

 VAR_11 = FUNC_1(VAR_8->injection);


 FUNC_2(VAR_8->F3, VAR_1, VAR_11);

 FUNC_3(0, "section=0x%x word_bits=0x%x\n", VAR_10, VAR_11);

 return VAR_6;
}
