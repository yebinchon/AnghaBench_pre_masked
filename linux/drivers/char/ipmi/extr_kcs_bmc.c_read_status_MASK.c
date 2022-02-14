
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int str; } ;
struct kcs_bmc {TYPE_1__ ioreg; int (* io_inputb ) (struct kcs_bmc*,int ) ;} ;


 int FUNC_0 (struct kcs_bmc*,int ) ;

__attribute__((used)) static inline u8 FUNC_1(struct kcs_bmc *VAR_0)
{
 return VAR_0->io_inputb(VAR_0, VAR_0->ioreg.str);
}
