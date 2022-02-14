
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg_state {unsigned long current_address; unsigned long start_address; unsigned long wx_pages; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int,char*,void*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (char*,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct pg_state *VAR_7)
{
 unsigned long VAR_8;

 VAR_8 = (VAR_7->current_address - VAR_7->start_address) / VAR_3;
 VAR_7->wx_pages += VAR_8;
 FUNC_0(VAR_5 & VAR_4,
    "x86/mm: Found insecure W+X mapping at address %pS\n",
    (void *)VAR_7->start_address);
}
