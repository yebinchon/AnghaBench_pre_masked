
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool_features {scalar_t__ mode; int error_if_no_space; int discard_passdown; int discard_enabled; int zero_new_blocks; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_1(struct pool_features *VAR_1, char *VAR_2,
         unsigned VAR_3, unsigned VAR_4)
{
 unsigned VAR_5 = !VAR_1->zero_new_blocks + !VAR_1->discard_enabled +
  !VAR_1->discard_passdown + (VAR_1->mode == VAR_0) +
  VAR_1->error_if_no_space;
 FUNC_0("%u ", VAR_5);

 if (!VAR_1->zero_new_blocks)
  FUNC_0("skip_block_zeroing ");

 if (!VAR_1->discard_enabled)
  FUNC_0("ignore_discard ");

 if (!VAR_1->discard_passdown)
  FUNC_0("no_discard_passdown ");

 if (VAR_1->mode == VAR_0)
  FUNC_0("read_only ");

 if (VAR_1->error_if_no_space)
  FUNC_0("error_if_no_space ");
}
