
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t nr; int * val; } ;
struct msr_autoload {TYPE_1__ host; TYPE_1__ guest; } ;
struct vcpu_vmx {struct msr_autoload msr_autoload; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct vcpu_vmx*,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,unsigned int) ;
 int FUNC_4 (int ,size_t) ;

__attribute__((used)) static void FUNC_5(struct vcpu_vmx *VAR_6, unsigned VAR_7)
{
 int VAR_8;
 struct msr_autoload *VAR_9 = &VAR_6->msr_autoload;

 switch (VAR_7) {
 case 128:
  if (FUNC_1()) {
   FUNC_0(VAR_6,
     VAR_0,
     VAR_3);
   return;
  }
  break;
 case 129:
  if (FUNC_2()) {
   FUNC_0(VAR_6,
     VAR_1,
     VAR_4);
   return;
  }
  break;
 }
 VAR_8 = FUNC_3(&VAR_9->guest, VAR_7);
 if (VAR_8 < 0)
  goto skip_guest;
 --VAR_9->guest.nr;
 VAR_9->guest.val[VAR_8] = VAR_9->guest.val[VAR_9->guest.nr];
 FUNC_4(VAR_2, VAR_9->guest.nr);

skip_guest:
 VAR_8 = FUNC_3(&VAR_9->host, VAR_7);
 if (VAR_8 < 0)
  return;

 --VAR_9->host.nr;
 VAR_9->host.val[VAR_8] = VAR_9->host.val[VAR_9->host.nr];
 FUNC_4(VAR_5, VAR_9->host.nr);
}
