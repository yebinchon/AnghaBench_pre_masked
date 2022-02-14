
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5l_log {scalar_t__ r5c_journal_mode; } ;


 scalar_t__ VAR_0 ;

bool FUNC_0(struct r5l_log *VAR_1)
{
 return (VAR_1 != ((void*)0) &&
  VAR_1->r5c_journal_mode == VAR_0);
}
