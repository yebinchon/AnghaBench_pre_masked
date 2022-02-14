
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int vflag; int family; int proto; scalar_t__ state; int stack; struct addr* laddr; int pcb; struct sock* next; struct addr* faddr; int protoname; } ;
struct TYPE_2__ {int ss_len; } ;
struct addr {struct addr* next; int state; int encaps_port; TYPE_1__ address; } ;
typedef int kvaddr_t ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char*,void*,void*) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 struct sock** VAR_12 ;
 int * VAR_13 ;
 scalar_t__ FUNC_6 (char*,...) ;

__attribute__((used)) static void
FUNC_7(struct sock *VAR_14, int VAR_15)
{
 kvaddr_t VAR_16;
 int VAR_17, VAR_18, VAR_19;
 struct addr *VAR_20, *VAR_21;
 struct sock *VAR_22;

 while (VAR_15 < 29)
  VAR_15 += FUNC_6(" ");
 VAR_15 += FUNC_6("%s", VAR_14->protoname);
 if (VAR_14->vflag & VAR_1)
  VAR_15 += FUNC_6("4");
 if (VAR_14->vflag & VAR_2)
  VAR_15 += FUNC_6("6");
 if (VAR_14->vflag & (VAR_1 | VAR_2))
  VAR_15 += FUNC_6(" ");
 VAR_20 = VAR_14->laddr;
 VAR_21 = VAR_14->faddr;
 VAR_18 = 1;
 while (VAR_20 != ((void*)0) || VAR_21 != ((void*)0)) {
  VAR_19 = 36;
  while (VAR_15 < VAR_19)
   VAR_15 += FUNC_6(" ");
  switch (VAR_14->family) {
  case 132:
  case 131:
   if (VAR_20 != ((void*)0)) {
    VAR_15 += FUNC_3(&VAR_20->address);
    if (VAR_14->family == 131 && VAR_15 >= 58)
     VAR_15 += FUNC_6(" ");
   }
   VAR_19 += VAR_11 ? 46 : 22;
   while (VAR_15 < VAR_19)
    VAR_15 += FUNC_6(" ");
   if (VAR_21 != ((void*)0))
    VAR_15 += FUNC_3(&VAR_21->address);
   VAR_19 += VAR_11 ? 46 : 22;
   break;
  case 130:
   if ((VAR_20 == ((void*)0)) || (VAR_21 == ((void*)0)))
    FUNC_1(1, "laddr = %p or faddr = %p is NULL",
        (void *)VAR_20, (void *)VAR_21);

   if (VAR_20->address.ss_len > 0) {
    VAR_15 += FUNC_3(&VAR_20->address);
    break;
   }

   VAR_16 = *(kvaddr_t*)&(VAR_21->address);
   if (VAR_16 == 0) {
    VAR_15 += FUNC_6("(not connected)");
    VAR_19 += VAR_11 ? 92 : 44;
    break;
   }
   VAR_15 += FUNC_6("-> ");
   for (VAR_17 = 0; VAR_17 < VAR_0; ++VAR_17) {
    for (VAR_22 = VAR_12[VAR_17];
        VAR_22 != ((void*)0);
        VAR_22 = VAR_22->next)
     if (VAR_22->pcb == VAR_16)
      break;
    if (VAR_22 != ((void*)0))
     break;
   }
   if (VAR_22 == ((void*)0) || VAR_22->laddr == ((void*)0) ||
       VAR_22->laddr->address.ss_len == 0)
    VAR_15 += FUNC_6("??");
   else
    VAR_15 += FUNC_3(&VAR_22->laddr->address);
   VAR_19 += VAR_11 ? 92 : 44;
   break;
  default:
   FUNC_0();
  }
  if (VAR_9) {
   if (VAR_21 != ((void*)0) &&
       VAR_14->proto == 129 &&
       VAR_14->state != VAR_4 &&
       VAR_14->state != VAR_3 &&
       VAR_14->state != VAR_5) {
    while (VAR_15 < VAR_19)
     VAR_15 += FUNC_6(" ");
    VAR_15 += FUNC_6("%u",
        FUNC_2(VAR_21->encaps_port));
   }
   VAR_19 += 7;
  }
  if (VAR_10) {
   if (VAR_21 != ((void*)0) &&
       VAR_14->proto == 129 &&
       VAR_14->state != VAR_4 &&
       VAR_14->state != VAR_3 &&
       VAR_14->state != VAR_5) {
    while (VAR_15 < VAR_19)
     VAR_15 += FUNC_6(" ");
    VAR_15 += FUNC_6("%s",
        FUNC_5(VAR_21->state));
   }
   VAR_19 += 13;
  }
  if (VAR_18) {
   if (VAR_10) {
    if (VAR_14->proto == 129 ||
        VAR_14->proto == 128) {
     while (VAR_15 < VAR_19)
      VAR_15 += FUNC_6(" ");
     switch (VAR_14->proto) {
     case 129:
      VAR_15 += FUNC_6("%s",
          FUNC_4(VAR_14->state));
      break;
     case 128:
      if (VAR_14->state >= 0 &&
          VAR_14->state < VAR_7)
       VAR_15 += FUNC_6("%s",
           VAR_13[VAR_14->state]);
      else
       VAR_15 += FUNC_6("?");
      break;
     }
    }
    VAR_19 += 13;
   }
   if (VAR_8 && VAR_14->proto == 128) {
    while (VAR_15 < VAR_19)
     VAR_15 += FUNC_6(" ");
    FUNC_6("%.*s", VAR_6,
        VAR_14->stack);
   }
  }
  if (VAR_20 != ((void*)0))
   VAR_20 = VAR_20->next;
  if (VAR_21 != ((void*)0))
   VAR_21 = VAR_21->next;
  if ((VAR_20 != ((void*)0)) || (VAR_21 != ((void*)0))) {
   FUNC_6("\n");
   VAR_15 = 0;
  }
  VAR_18 = 0;
 }
 FUNC_6("\n");
}
