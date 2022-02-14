
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smi_info {int si_sm; TYPE_1__* handlers; scalar_t__ thread; } ;
struct TYPE_2__ {int (* start_transaction ) (int ,unsigned char*,unsigned int) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct smi_info*,scalar_t__) ;
 int FUNC_1 (int ,unsigned char*,unsigned int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct smi_info *VAR_2, unsigned char *VAR_3,
     unsigned int VAR_4)
{
 FUNC_0(VAR_2, VAR_1 + VAR_0);

 if (VAR_2->thread)
  FUNC_2(VAR_2->thread);

 VAR_2->handlers->start_transaction(VAR_2->si_sm, VAR_3, VAR_4);
}
