
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i3c_ccc_cmd_dest {int dummy; } ;
struct i3c_ccc_cmd {int rnw; unsigned int ndests; int err; struct i3c_ccc_cmd_dest* dests; int id; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct i3c_ccc_cmd *VAR_1, bool VAR_2, u8 VAR_3,
        struct i3c_ccc_cmd_dest *VAR_4,
        unsigned int VAR_5)
{
 VAR_1->rnw = VAR_2 ? 1 : 0;
 VAR_1->id = VAR_3;
 VAR_1->dests = VAR_4;
 VAR_1->ndests = VAR_5;
 VAR_1->err = VAR_0;
}
