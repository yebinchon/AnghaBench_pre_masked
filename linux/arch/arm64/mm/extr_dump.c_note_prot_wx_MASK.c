
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg_state {int current_prot; unsigned long start_address; unsigned long wx_pages; int check_wx; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,void*,void*) ;

__attribute__((used)) static void FUNC_1(struct pg_state *VAR_3, unsigned long VAR_4)
{
 if (!VAR_3->check_wx)
  return;
 if ((VAR_3->current_prot & VAR_2) == VAR_2)
  return;
 if ((VAR_3->current_prot & VAR_1) == VAR_1)
  return;

 FUNC_0(1, "arm64/mm: Found insecure W+X mapping at address %p/%pS\n",
    (void *)VAR_3->start_address, (void *)VAR_3->start_address);

 VAR_3->wx_pages += (VAR_4 - VAR_3->start_address) / VAR_0;
}
