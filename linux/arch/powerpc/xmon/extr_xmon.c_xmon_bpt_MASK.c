
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int msr; scalar_t__ nip; } ;
struct bpt {int ref_count; scalar_t__ address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bpt* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 struct bpt* FUNC_2 (scalar_t__,unsigned long*) ;
 int FUNC_3 (struct pt_regs*,int ) ;

__attribute__((used)) static int FUNC_4(struct pt_regs *VAR_3)
{
 struct bpt *VAR_4;
 unsigned long VAR_5;

 if ((VAR_3->msr & (VAR_1|VAR_2|VAR_0)) != (VAR_1|VAR_0))
  return 0;


 VAR_4 = FUNC_2(VAR_3->nip, &VAR_5);
 if (VAR_4 != ((void*)0) && VAR_5 == 4) {
  VAR_3->nip = VAR_4->address + 4;
  FUNC_1(&VAR_4->ref_count);
  return 1;
 }


 VAR_4 = FUNC_0(VAR_3->nip);
 if (!VAR_4)
  return 0;

 FUNC_3(VAR_3, 0);

 return 1;
}
