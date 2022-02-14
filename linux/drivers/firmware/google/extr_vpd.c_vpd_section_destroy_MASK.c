
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpd_section {int enabled; int baseaddr; int raw_name; int bin_attr; int kobj; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int VAR_0 ;
 int FUNC_4 (struct vpd_section*) ;

__attribute__((used)) static int FUNC_5(struct vpd_section *VAR_1)
{
 if (VAR_1->enabled) {
  FUNC_4(VAR_1);
  FUNC_1(VAR_1->kobj);
  FUNC_3(VAR_0, &VAR_1->bin_attr);
  FUNC_0(VAR_1->raw_name);
  FUNC_2(VAR_1->baseaddr);
  VAR_1->enabled = 0;
 }

 return 0;
}
