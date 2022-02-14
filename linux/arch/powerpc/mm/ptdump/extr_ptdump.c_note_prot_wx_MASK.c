
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg_state {int current_flags; unsigned long start_address; unsigned long wx_pages; int check_wx; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_1 (int,char*,void*,void*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct pg_state *VAR_3, unsigned long VAR_4)
{
 if (!FUNC_0(VAR_0) || !VAR_3->check_wx)
  return;

 if (!((VAR_3->current_flags & FUNC_2(VAR_1)) == FUNC_2(VAR_1)))
  return;

 FUNC_1(1, "powerpc/mm: Found insecure W+X mapping at address %p/%pS\n",
    (void *)VAR_3->start_address, (void *)VAR_3->start_address);

 VAR_3->wx_pages += (VAR_4 - VAR_3->start_address) / VAR_2;
}
