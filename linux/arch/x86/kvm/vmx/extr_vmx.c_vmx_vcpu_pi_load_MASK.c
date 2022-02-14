
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pi_desc {scalar_t__ nv; scalar_t__ control; unsigned int ndst; scalar_t__ sn; } ;
struct kvm_vcpu {int cpu; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__*,scalar_t__,scalar_t__) ;
 unsigned int FUNC_1 (int) ;
 int FUNC_2 (struct pi_desc*) ;
 int FUNC_3 (struct pi_desc*) ;
 int FUNC_4 (struct pi_desc*) ;
 int FUNC_5 (struct pi_desc*) ;
 int FUNC_6 () ;
 struct pi_desc* FUNC_7 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_8 () ;

__attribute__((used)) static void FUNC_9(struct kvm_vcpu *VAR_1, int VAR_2)
{
 struct pi_desc *VAR_3 = FUNC_7(VAR_1);
 struct pi_desc VAR_4, VAR_5;
 unsigned int VAR_6;







 if (!FUNC_5(VAR_3) && VAR_1->cpu == VAR_2)
  return;
 if (VAR_3->nv == VAR_0 || VAR_1->cpu == VAR_2) {
  FUNC_2(VAR_3);
  goto after_clear_sn;
 }


 do {
  VAR_4.control = VAR_5.control = VAR_3->control;

  VAR_6 = FUNC_1(VAR_2);

  if (FUNC_8())
   VAR_5.ndst = VAR_6;
  else
   VAR_5.ndst = (VAR_6 << 8) & 0xFF00;

  VAR_5.sn = 0;
 } while (FUNC_0(&VAR_3->control, VAR_4.control,
      VAR_5.control) != VAR_4.control);

after_clear_sn:







 FUNC_6();

 if (!FUNC_3(VAR_3))
  FUNC_4(VAR_3);
}
