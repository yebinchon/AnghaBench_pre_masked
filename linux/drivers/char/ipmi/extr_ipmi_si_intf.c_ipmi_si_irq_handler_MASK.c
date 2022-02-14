
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ si_type; int (* outputb ) (TYPE_1__*,int ,int) ;} ;
struct smi_info {int si_lock; TYPE_1__ io; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 int FUNC_1 (struct smi_info*,int ) ;
 int FUNC_2 (struct smi_info*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;

irqreturn_t FUNC_6(int VAR_6, void *VAR_7)
{
 struct smi_info *VAR_8 = VAR_7;
 unsigned long VAR_9;

 if (VAR_8->io.si_type == VAR_4)

  VAR_8->io.outputb(&VAR_8->io, VAR_2,
         VAR_0
         | VAR_1);

 FUNC_3(&(VAR_8->si_lock), VAR_9);

 FUNC_2(VAR_8, VAR_5);

 FUNC_0("Interrupt");

 FUNC_1(VAR_8, 0);
 FUNC_4(&(VAR_8->si_lock), VAR_9);
 return VAR_3;
}
