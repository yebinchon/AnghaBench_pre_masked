
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct capilib_ncci {int nmsg; struct capilib_msgidqueue* msgidqueue; struct capilib_msgidqueue* msgidlast; struct capilib_msgidqueue* msgidfree; } ;
struct capilib_msgidqueue {struct capilib_msgidqueue* next; int msgid; } ;



__attribute__((used)) static inline int FUNC_0(struct capilib_ncci *VAR_0, u16 VAR_1)
{
 struct capilib_msgidqueue *VAR_2;
 if ((VAR_2 = VAR_0->msgidfree) == ((void*)0))
  return 0;
 VAR_0->msgidfree = VAR_2->next;
 VAR_2->msgid = VAR_1;
 VAR_2->next = ((void*)0);
 if (VAR_0->msgidlast)
  VAR_0->msgidlast->next = VAR_2;
 VAR_0->msgidlast = VAR_2;
 if (!VAR_0->msgidqueue)
  VAR_0->msgidqueue = VAR_2;
 VAR_0->nmsg++;
 return 1;
}
