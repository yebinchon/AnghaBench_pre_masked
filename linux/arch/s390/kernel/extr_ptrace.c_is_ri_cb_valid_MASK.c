
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct runtime_instr_cb {int rca; int roa; int rla; int s; int k; scalar_t__ h; scalar_t__ reserved1; int ps; scalar_t__ qs; int pc; scalar_t__ qc; scalar_t__ reserved2; scalar_t__ key; scalar_t__ reserved3; scalar_t__ reserved4; scalar_t__ reserved5; scalar_t__ reserved6; scalar_t__ reserved7; scalar_t__ reserved8; int m; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct runtime_instr_cb *VAR_1)
{
 return (VAR_1->rca & 0x1f) == 0 &&
  (VAR_1->roa & 0xfff) == 0 &&
  (VAR_1->rla & 0xfff) == 0xfff &&
  VAR_1->s == 1 &&
  VAR_1->k == 1 &&
  VAR_1->h == 0 &&
  VAR_1->reserved1 == 0 &&
  VAR_1->ps == 1 &&
  VAR_1->qs == 0 &&
  VAR_1->pc == 1 &&
  VAR_1->qc == 0 &&
  VAR_1->reserved2 == 0 &&
  VAR_1->key == VAR_0 &&
  VAR_1->reserved3 == 0 &&
  VAR_1->reserved4 == 0 &&
  VAR_1->reserved5 == 0 &&
  VAR_1->reserved6 == 0 &&
  VAR_1->reserved7 == 0 &&
  VAR_1->reserved8 == 0 &&
  VAR_1->rla >= VAR_1->roa &&
  VAR_1->rca >= VAR_1->roa &&
  VAR_1->rca <= VAR_1->rla+1 &&
  VAR_1->m < 3;
}
