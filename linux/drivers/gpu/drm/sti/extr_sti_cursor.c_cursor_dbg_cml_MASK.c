
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sti_cursor {scalar_t__ clut_paddr; int clut; } ;
struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,char*,int ) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_0,
      struct sti_cursor *VAR_1, u32 VAR_2)
{
 if (VAR_1->clut_paddr == VAR_2)
  FUNC_0(VAR_0, "\tVirt @: %p", VAR_1->clut);
}
