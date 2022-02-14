
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct intel_th_device {scalar_t__ id; int name; } ;
struct intel_th {int id; } ;
struct device {int dummy; } ;
typedef int kuid_t ;
typedef int kgid_t ;


 int VAR_0 ;
 char* FUNC_0 (int ,char*,int ,int ,...) ;
 struct intel_th* FUNC_1 (struct intel_th_device*) ;
 struct intel_th_device* FUNC_2 (struct device*) ;

__attribute__((used)) static char *FUNC_3(struct device *VAR_1, umode_t *VAR_2,
         kuid_t *VAR_3, kgid_t *VAR_4)
{
 struct intel_th_device *VAR_5 = FUNC_2(VAR_1);
 struct intel_th *VAR_6 = FUNC_1(VAR_5);
 char *VAR_7;

 if (VAR_5->id >= 0)
  VAR_7 = FUNC_0(VAR_0, "intel_th%d/%s%d", VAR_6->id,
     VAR_5->name, VAR_5->id);
 else
  VAR_7 = FUNC_0(VAR_0, "intel_th%d/%s", VAR_6->id,
     VAR_5->name);

 return VAR_7;
}
