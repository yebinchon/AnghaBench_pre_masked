
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vmcs_host_state {int fs_sel; int gs_sel; unsigned long fs_base; unsigned long gs_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,unsigned long) ;

void FUNC_3(struct vmcs_host_state *VAR_4, u16 VAR_5, u16 VAR_6,
   unsigned long VAR_7, unsigned long VAR_8)
{
 if (FUNC_0(VAR_5 != VAR_4->fs_sel)) {
  if (!(VAR_5 & 7))
   FUNC_1(VAR_1, VAR_5);
  else
   FUNC_1(VAR_1, 0);
  VAR_4->fs_sel = VAR_5;
 }
 if (FUNC_0(VAR_6 != VAR_4->gs_sel)) {
  if (!(VAR_6 & 7))
   FUNC_1(VAR_3, VAR_6);
  else
   FUNC_1(VAR_3, 0);
  VAR_4->gs_sel = VAR_6;
 }
 if (FUNC_0(VAR_7 != VAR_4->fs_base)) {
  FUNC_2(VAR_0, VAR_7);
  VAR_4->fs_base = VAR_7;
 }
 if (FUNC_0(VAR_8 != VAR_4->gs_base)) {
  FUNC_2(VAR_2, VAR_8);
  VAR_4->gs_base = VAR_8;
 }
}
