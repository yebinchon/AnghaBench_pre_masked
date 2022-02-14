
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct fwnode_handle {int dummy; } ;
struct acpi_irq_parse_one_ctx {TYPE_1__* fwspec; int * res_flags; scalar_t__ rc; } ;
struct TYPE_2__ {int param_count; int * param; struct fwnode_handle* fwnode; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct fwnode_handle *VAR_0,
         u32 VAR_1, u8 VAR_2,
         u8 VAR_3, u8 VAR_4,
         struct acpi_irq_parse_one_ctx *VAR_5)
{
 if (!VAR_0)
  return;
 VAR_5->rc = 0;
 *VAR_5->res_flags = FUNC_1(VAR_2, VAR_3, VAR_4);
 VAR_5->fwspec->fwnode = VAR_0;
 VAR_5->fwspec->param[0] = VAR_1;
 VAR_5->fwspec->param[1] = FUNC_0(VAR_2, VAR_3);
 VAR_5->fwspec->param_count = 2;
}
