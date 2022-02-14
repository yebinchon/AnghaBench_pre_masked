
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vcore {scalar_t__ tb_offset_applied; scalar_t__ conferring_threads; scalar_t__ napping_threads; scalar_t__ in_guest; scalar_t__ entry_exit_map; } ;



__attribute__((used)) static void FUNC_0(struct kvmppc_vcore *VAR_0)
{
 VAR_0->entry_exit_map = 0;
 VAR_0->in_guest = 0;
 VAR_0->napping_threads = 0;
 VAR_0->conferring_threads = 0;
 VAR_0->tb_offset_applied = 0;
}
