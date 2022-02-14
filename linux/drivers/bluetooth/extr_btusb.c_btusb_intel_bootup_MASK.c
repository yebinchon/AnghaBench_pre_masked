
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_bootup {int dummy; } ;
struct btusb_data {int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct btusb_data *VAR_1, const void *VAR_2,
          unsigned int VAR_3)
{
 const struct intel_bootup *VAR_4 = VAR_2;

 if (VAR_3 != sizeof(*VAR_4))
  return;

 if (FUNC_0(VAR_0, &VAR_1->flags))
  FUNC_1(&VAR_1->flags, VAR_0);
}
