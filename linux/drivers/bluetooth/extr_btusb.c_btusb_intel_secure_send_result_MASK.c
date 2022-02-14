
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_secure_send_result {scalar_t__ result; } ;
struct btusb_data {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(struct btusb_data *VAR_3,
        const void *VAR_4, unsigned int VAR_5)
{
 const struct intel_secure_send_result *VAR_6 = VAR_4;

 if (VAR_5 != sizeof(*VAR_6))
  return;

 if (VAR_6->result)
  FUNC_0(VAR_1, &VAR_3->flags);

 if (FUNC_1(VAR_0, &VAR_3->flags) &&
     FUNC_2(VAR_2, &VAR_3->flags))
  FUNC_3(&VAR_3->flags, VAR_0);
}
