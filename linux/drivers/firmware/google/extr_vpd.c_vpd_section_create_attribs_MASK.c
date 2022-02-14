
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; } ;
struct vpd_section {int baseaddr; TYPE_1__ bin_attr; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__*,int ,struct vpd_section*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct vpd_section *VAR_2)
{
 s32 VAR_3;
 int VAR_4;

 VAR_3 = 0;
 do {
  VAR_4 = FUNC_0(VAR_2->bin_attr.size, VAR_2->baseaddr,
     &VAR_3, VAR_1, VAR_2);
 } while (VAR_4 == VAR_0);

 return 0;
}
