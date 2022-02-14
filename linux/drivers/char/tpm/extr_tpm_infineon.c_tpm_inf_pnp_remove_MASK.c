
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tpm_chip {int dummy; } ;
struct pnp_dev {int dummy; } ;
struct TYPE_2__ {scalar_t__ iotype; int map_size; int map_base; int mem_base; int config_size; int config_port; int data_size; int data_regs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 struct tpm_chip* FUNC_1 (struct pnp_dev*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct tpm_chip*) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_5(struct pnp_dev *VAR_2)
{
 struct tpm_chip *VAR_3 = FUNC_1(VAR_2);

 FUNC_4(VAR_3);

 if (VAR_1.iotype == VAR_0) {
  FUNC_3(VAR_1.data_regs, VAR_1.data_size);
  FUNC_3(VAR_1.config_port,
          VAR_1.config_size);
 } else {
  FUNC_0(VAR_1.mem_base);
  FUNC_2(VAR_1.map_base, VAR_1.map_size);
 }
}
