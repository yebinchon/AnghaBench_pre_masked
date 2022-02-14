
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tp_entry {scalar_t__ sysindex; } ;


 struct tp_entry* FUNC_0 (struct tp_entry*,int ) ;
 int VAR_0 ;

struct tp_entry *
FUNC_1(struct tp_entry *VAR_1)
{
 struct tp_entry *VAR_2;

 if ((VAR_2 = FUNC_0(VAR_1, VAR_0)) == ((void*)0) ||
     VAR_2->sysindex != VAR_1->sysindex)
  return (((void*)0));

 return (VAR_2);
}
