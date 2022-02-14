
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_domain {int agaw; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,unsigned long long,int ,int ,...) ;
 unsigned long long FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,unsigned long long,unsigned long long) ;
 int FUNC_3 (struct device*,char*,unsigned long long,unsigned long long) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (struct dmar_domain*,unsigned long long,unsigned long long) ;
 struct dmar_domain* VAR_5 ;

__attribute__((used)) static int FUNC_6(struct device *VAR_6,
           struct dmar_domain *VAR_7,
           unsigned long long VAR_8,
           unsigned long long VAR_9)
{




 if (VAR_7 == VAR_5 && VAR_4) {
  FUNC_3(VAR_6, "Ignoring identity map for HW passthrough [0x%Lx - 0x%Lx]\n",
    VAR_8, VAR_9);
  return 0;
 }

 FUNC_2(VAR_6, "Setting identity map [0x%Lx - 0x%Lx]\n", VAR_8, VAR_9);

 if (VAR_9 < VAR_8) {
  FUNC_0(1, "Your BIOS is broken; RMRR ends before it starts!\n"
   "BIOS vendor: %s; Ver: %s; Product Version: %s\n",
   FUNC_4(VAR_0),
   FUNC_4(VAR_1),
       FUNC_4(VAR_2));
  return -VAR_3;
 }

 if (VAR_9 >> FUNC_1(VAR_7->agaw)) {
  FUNC_0(1, "Your BIOS is broken; RMRR exceeds permitted address width (%d bits)\n"
       "BIOS vendor: %s; Ver: %s; Product Version: %s\n",
       FUNC_1(VAR_7->agaw),
       FUNC_4(VAR_0),
       FUNC_4(VAR_1),
       FUNC_4(VAR_2));
  return -VAR_3;
 }

 return FUNC_5(VAR_7, VAR_8, VAR_9);
}
