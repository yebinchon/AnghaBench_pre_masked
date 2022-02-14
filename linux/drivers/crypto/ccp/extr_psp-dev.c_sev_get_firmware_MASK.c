
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct firmware {int dummy; } ;
struct device {int dummy; } ;
typedef int fw_name_subset ;
typedef int fw_name_specific ;
struct TYPE_2__ {int x86; int x86_model; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 scalar_t__ FUNC_0 (struct firmware const**,char*,struct device*) ;
 int FUNC_1 (char*,int,char*,int,int) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_4,
       const struct firmware **VAR_5)
{
 char VAR_6[VAR_2];
 char VAR_7[VAR_2];

 FUNC_1(VAR_6, sizeof(VAR_6),
   "amd/amd_sev_fam%.2xh_model%.2xh.sbin",
   VAR_3.x86, VAR_3.x86_model);

 FUNC_1(VAR_7, sizeof(VAR_7),
   "amd/amd_sev_fam%.2xh_model%.1xxh.sbin",
   VAR_3.x86, (VAR_3.x86_model & 0xf0) >> 4);
 if ((FUNC_0(VAR_5, VAR_6, VAR_4) >= 0) ||
     (FUNC_0(VAR_5, VAR_7, VAR_4) >= 0) ||
     (FUNC_0(VAR_5, VAR_1, VAR_4) >= 0))
  return 0;

 return -VAR_0;
}
