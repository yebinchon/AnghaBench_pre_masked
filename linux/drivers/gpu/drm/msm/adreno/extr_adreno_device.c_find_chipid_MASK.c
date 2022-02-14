
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct adreno_rev {unsigned int core; unsigned int major; unsigned int minor; unsigned int patchid; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device_node*,char*,int ,char const**) ;
 int FUNC_3 (struct device_node*,char*,int*) ;
 int FUNC_4 (char const*,char*,unsigned int*,unsigned int*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0, struct adreno_rev *VAR_1)
{
 struct device_node *VAR_2 = VAR_0->of_node;
 const char *VAR_3;
 int VAR_4;
 u32 VAR_5;


 VAR_4 = FUNC_2(VAR_2, "compatible", 0, &VAR_3);
 if (VAR_4 == 0) {
  unsigned int VAR_6, VAR_7;

  if (FUNC_4(VAR_3, "qcom,adreno-%u.%u", &VAR_6, &VAR_7) == 2 ||
      FUNC_4(VAR_3, "amd,imageon-%u.%u", &VAR_6, &VAR_7) == 2) {
   VAR_1->core = VAR_6 / 100;
   VAR_6 %= 100;
   VAR_1->major = VAR_6 / 10;
   VAR_6 %= 10;
   VAR_1->minor = VAR_6;
   VAR_1->patchid = VAR_7;

   return 0;
  }
 }


 VAR_4 = FUNC_3(VAR_2, "qcom,chipid", &VAR_5);
 if (VAR_4) {
  FUNC_0(VAR_0, "could not parse qcom,chipid: %d\n", VAR_4);
  return VAR_4;
 }

 VAR_1->core = (VAR_5 >> 24) & 0xff;
 VAR_1->major = (VAR_5 >> 16) & 0xff;
 VAR_1->minor = (VAR_5 >> 8) & 0xff;
 VAR_1->patchid = (VAR_5 & 0xff);

 FUNC_1(VAR_0, "Using legacy qcom,chipid binding!\n");
 FUNC_1(VAR_0, "Use compatible qcom,adreno-%u%u%u.%u instead.\n",
  VAR_1->core, VAR_1->major, VAR_1->minor, VAR_1->patchid);

 return 0;
}
