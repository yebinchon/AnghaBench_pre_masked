
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int str; } ;
struct kcs_bmc {TYPE_1__ ioreg; int (* io_outputb ) (struct kcs_bmc*,int ,int ) ;} ;


 int FUNC_0 (struct kcs_bmc*,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct kcs_bmc *VAR_0, u8 VAR_1)
{
 VAR_0->io_outputb(VAR_0, VAR_0->ioreg.str, VAR_1);
}
