
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg_state {int current_prot; unsigned long start_address; unsigned long uxn_pages; int check_wx; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,void*,void*) ;

__attribute__((used)) static void FUNC_1(struct pg_state *VAR_2, unsigned long VAR_3)
{
 if (!VAR_2->check_wx)
  return;

 if ((VAR_2->current_prot & VAR_1) == VAR_1)
  return;

 FUNC_0(1, "arm64/mm: Found non-UXN mapping at address %p/%pS\n",
    (void *)VAR_2->start_address, (void *)VAR_2->start_address);

 VAR_2->uxn_pages += (VAR_3 - VAR_2->start_address) / VAR_0;
}
