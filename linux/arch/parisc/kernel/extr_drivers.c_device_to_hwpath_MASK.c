
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parisc_device {int hw_path; } ;
struct hardware_path {int mod; } ;
struct device {struct device* parent; int * bus; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,struct hardware_path*) ;
 int VAR_0 ;
 struct parisc_device* FUNC_2 (struct device*) ;

void FUNC_3(struct device *VAR_1, struct hardware_path *VAR_2)
{
 struct parisc_device *VAR_3;
 if (VAR_1->bus == &VAR_0) {
  VAR_3 = FUNC_2(VAR_1);
  FUNC_1(VAR_1->parent, VAR_2);
  VAR_2->mod = VAR_3->hw_path;
 } else if (FUNC_0(VAR_1)) {
  FUNC_1(VAR_1, VAR_2);
 }
}
