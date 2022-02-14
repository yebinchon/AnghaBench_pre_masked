
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct multicall_entry {scalar_t__ result; int * args; int op; } ;
struct mc_buffer {int mcidx; scalar_t__ argidx; int cbidx; struct callback* callbacks; struct multicall_entry* entries; int * caller; TYPE_1__* debug; } ;
struct callback {int data; int (* fn ) (int ) ;} ;
struct TYPE_2__ {int * args; int op; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct multicall_entry*,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int VAR_0 ;
 int FUNC_6 (TYPE_1__*,struct multicall_entry*,int) ;
 int FUNC_7 (char*,int,int,int ,...) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 struct mc_buffer* FUNC_11 (int *) ;
 int FUNC_12 (int,scalar_t__,int) ;
 scalar_t__ FUNC_13 (int ,int ,int ,int ,int ,int ) ;

void FUNC_14(void)
{
 struct mc_buffer *VAR_1 = FUNC_11(&VAR_0);
 struct multicall_entry *VAR_2;
 int VAR_3 = 0;
 unsigned long VAR_4;
 int VAR_5;

 FUNC_1(FUNC_8());



 FUNC_5(VAR_4);

 FUNC_12(VAR_1->mcidx, VAR_1->argidx, VAR_1->cbidx);






 switch (VAR_1->mcidx) {
 case 0:

  FUNC_1(VAR_1->argidx != 0);
  break;

 case 1:


  VAR_2 = &VAR_1->entries[0];

  VAR_2->result = FUNC_13(VAR_2->op, VAR_2->args[0], VAR_2->args[1],
          VAR_2->args[2], VAR_2->args[3],
          VAR_2->args[4]);
  VAR_3 = VAR_2->result < 0;
  break;

 default:
  if (FUNC_2(VAR_1->entries, VAR_1->mcidx) != 0)
   FUNC_0();
  for (VAR_5 = 0; VAR_5 < VAR_1->mcidx; VAR_5++)
   if (VAR_1->entries[VAR_5].result < 0)
    VAR_3++;
 }

 if (FUNC_3(VAR_3)) {
  FUNC_7("%d of %d multicall(s) failed: cpu %d\n",
         VAR_3, VAR_1->mcidx, FUNC_9());
  for (VAR_5 = 0; VAR_5 < VAR_1->mcidx; VAR_5++) {
   if (VAR_1->entries[VAR_5].result < 0) {
    FUNC_7("  call %2d: op=%lu arg=[%lx] result=%ld\n",
           VAR_5 + 1,
           VAR_1->entries[VAR_5].op,
           VAR_1->entries[VAR_5].args[0],
           VAR_1->entries[VAR_5].result);

   }
  }
 }

 VAR_1->mcidx = 0;
 VAR_1->argidx = 0;

 for (VAR_5 = 0; VAR_5 < VAR_1->cbidx; VAR_5++) {
  struct callback *VAR_6 = &VAR_1->callbacks[VAR_5];

  (*VAR_6->fn)(VAR_6->data);
 }
 VAR_1->cbidx = 0;

 FUNC_4(VAR_4);
}
