
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adf_accel_dev {int dummy; } ;
struct TYPE_2__ {int devfn; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (struct adf_accel_dev*) ;

__attribute__((used)) static int FUNC_3(struct adf_accel_dev *VAR_0)
{
 return ((7 * (FUNC_1(FUNC_2(VAR_0)->devfn) - 1)) +
  FUNC_0(FUNC_2(VAR_0)->devfn) +
  (FUNC_1(FUNC_2(VAR_0)->devfn) - 1));
}
