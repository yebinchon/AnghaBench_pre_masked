
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int msr; scalar_t__ nip; } ;
struct bpt {int ref_count; scalar_t__ address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct pt_regs*) ;
 struct bpt* FUNC_2 (scalar_t__,unsigned long*) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_3(struct pt_regs *VAR_5)
{
 struct bpt *VAR_6;
 unsigned long VAR_7;

 if (VAR_4 && VAR_3)
  FUNC_1(VAR_5);

 if ((VAR_5->msr & (VAR_1|VAR_2|VAR_0)) == (VAR_1|VAR_0)) {
  VAR_6 = FUNC_2(VAR_5->nip, &VAR_7);
  if (VAR_6 != ((void*)0)) {
   VAR_5->nip = VAR_6->address + VAR_7;
   FUNC_0(&VAR_6->ref_count);
  }
 }

 return 0;
}
