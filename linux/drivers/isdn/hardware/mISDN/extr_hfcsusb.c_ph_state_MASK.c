
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfcsusb {scalar_t__ protocol; } ;
struct dchannel {struct hfcsusb* hw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct dchannel*) ;
 int FUNC_1 (struct dchannel*) ;

__attribute__((used)) static void
FUNC_2(struct dchannel *VAR_2)
{
 struct hfcsusb *VAR_3 = VAR_2->hw;

 if (VAR_3->protocol == VAR_0)
  FUNC_0(VAR_2);
 else if (VAR_3->protocol == VAR_1)
  FUNC_1(VAR_2);
}
