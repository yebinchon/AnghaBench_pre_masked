
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct capilib_ncci {int nmsg; struct capilib_msgidqueue* msgidfree; struct capilib_msgidqueue* msgidlast; struct capilib_msgidqueue* msgidqueue; } ;
struct capilib_msgidqueue {scalar_t__ msgid; struct capilib_msgidqueue* next; } ;



__attribute__((used)) static inline int FUNC_0(struct capilib_ncci *VAR_0, u16 VAR_1)
{
 struct capilib_msgidqueue **VAR_2;
 for (VAR_2 = &VAR_0->msgidqueue; *VAR_2; VAR_2 = &(*VAR_2)->next) {
  if ((*VAR_2)->msgid == VAR_1) {
   struct capilib_msgidqueue *VAR_3 = *VAR_2;
   *VAR_2 = VAR_3->next;
   if (VAR_3 == VAR_0->msgidlast)
    VAR_0->msgidlast = ((void*)0);
   VAR_3->next = VAR_0->msgidfree;
   VAR_0->msgidfree = VAR_3;
   VAR_0->nmsg--;
   return 1;
  }
 }
 return 0;
}
