
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool_features {int zero_new_blocks; int discard_enabled; int discard_passdown; int error_if_no_space; int mode; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct pool_features *VAR_1)
{
 VAR_1->mode = VAR_0;
 VAR_1->zero_new_blocks = 1;
 VAR_1->discard_enabled = 1;
 VAR_1->discard_passdown = 1;
 VAR_1->error_if_no_space = 0;
}
