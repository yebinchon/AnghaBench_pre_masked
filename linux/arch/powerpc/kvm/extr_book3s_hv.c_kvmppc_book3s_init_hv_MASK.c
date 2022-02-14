
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct device_node {int dummy; } ;
struct TYPE_7__ {int owner; } ;
struct TYPE_5__ {int xics_phys; } ;
struct TYPE_6__ {TYPE_1__ kvm_hstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_3__ VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 TYPE_3__* VAR_6 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 () ;
 TYPE_2__* VAR_7 ;
 unsigned int FUNC_10 (int ) ;
 int VAR_8 ;
 struct device_node* FUNC_11 (int *,int *,char*) ;
 int FUNC_12 (struct device_node*) ;
 int FUNC_13 (char*) ;
 int VAR_9 ;
 int FUNC_14 () ;

__attribute__((used)) static int FUNC_15(void)
{
 int VAR_10;

 if (!VAR_9) {
  FUNC_13("KVM-HV: Host does not support TLBIE\n");
  return -VAR_1;
 }




 VAR_10 = FUNC_6();
 if (VAR_10 < 0)
  return -VAR_1;

 VAR_10 = FUNC_4();
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_3();
 if (VAR_10)
  return VAR_10;
 VAR_5.owner = VAR_4;
 VAR_6 = &VAR_5;

 FUNC_1();

 FUNC_2();

 VAR_10 = FUNC_7();
 if (VAR_10)
  return VAR_10;

 if (FUNC_9())
  VAR_10 = FUNC_8();





 if (FUNC_0(VAR_0)) {
  unsigned int VAR_11 = FUNC_10(VAR_3);
  if ((VAR_11 >> 16) == VAR_2 &&
      (((VAR_11 & 0xe000) == 0 && (VAR_11 & 0xfff) < 0x202) ||
       ((VAR_11 & 0xe000) == 0x2000 && (VAR_11 & 0xfff) < 0x101)))
   VAR_8 = 1;
 }

 return VAR_10;
}
