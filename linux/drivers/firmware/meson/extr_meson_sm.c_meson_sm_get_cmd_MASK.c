
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct meson_sm_cmd {unsigned int index; scalar_t__ smc_id; } ;
struct meson_sm_chip {struct meson_sm_cmd* cmd; } ;



__attribute__((used)) static u32 FUNC_0(const struct meson_sm_chip *VAR_0,
       unsigned int VAR_1)
{
 const struct meson_sm_cmd *VAR_2 = VAR_0->cmd;

 while (VAR_2->smc_id && VAR_2->index != VAR_1)
  VAR_2++;

 return VAR_2->smc_id;
}
