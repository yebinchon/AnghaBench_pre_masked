
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tp_entry {scalar_t__ sysindex; int tp_addr; } ;
struct tp_entries {int dummy; } ;


 int FUNC_0 (struct tp_entry*,struct tp_entry*,int ) ;
 int FUNC_1 (struct tp_entries*,struct tp_entry*,int ) ;
 struct tp_entry* FUNC_2 (struct tp_entry*,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5(struct tp_entries *VAR_1,
 struct tp_entry *VAR_2, struct tp_entry **VAR_3)
{
 struct tp_entry *VAR_4;

 FUNC_3(VAR_3 != ((void*)0));

 for (VAR_4 = *VAR_3;
     VAR_4 != ((void*)0) && VAR_2->sysindex == VAR_4->sysindex;
     VAR_4 = FUNC_2(VAR_4, VAR_0)) {
  if (FUNC_4(VAR_2->tp_addr, VAR_4->tp_addr) < 0) {
   FUNC_0(VAR_4, VAR_2, VAR_0);
   if (*VAR_3 == VAR_4)
    (*VAR_3) = VAR_2;
   return;
  }
 }

 if (VAR_4 == ((void*)0))
  FUNC_1(VAR_1, VAR_2, VAR_0);
 else
  FUNC_0(VAR_4, VAR_2, VAR_0);
}
