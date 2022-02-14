
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct bnxt_qplib_pkey_tbl {int max; scalar_t__ active; int tbl; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct bnxt_qplib_pkey_tbl *VAR_0)
{
 FUNC_0(VAR_0->tbl, 0, sizeof(u16) * VAR_0->max);
 VAR_0->active = 0;
}
