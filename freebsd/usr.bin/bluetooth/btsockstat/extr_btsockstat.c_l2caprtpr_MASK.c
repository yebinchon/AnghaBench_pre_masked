
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef int this ;
typedef int rt ;
struct TYPE_4__ {int src; scalar_t__ hook; } ;
typedef TYPE_1__ ng_btsocket_l2cap_rtentry_t ;
typedef int * ng_btsocket_l2cap_rtentry_p ;
typedef int kvm_t ;
struct TYPE_5__ {scalar_t__ n_value; } ;


 int * FUNC_0 (TYPE_1__*,int *) ;
 size_t VAR_0 ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 (int *,scalar_t__,char*,int) ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(kvm_t *VAR_3, u_long VAR_4)
{
 ng_btsocket_l2cap_rtentry_p VAR_5 = ((void*)0), VAR_6 = ((void*)0);
 ng_btsocket_l2cap_rtentry_t VAR_7;
 int VAR_8 = 1;

 if (VAR_4 == 0)
  return;

 if (FUNC_3(VAR_3, VAR_4, (char *) &VAR_5, sizeof(VAR_5)) < 0)
  return;

 for ( ; VAR_5 != ((void*)0); VAR_5 = VAR_6) {
  if (FUNC_3(VAR_3, (u_long) VAR_5, (char *) &VAR_7, sizeof(VAR_7)) < 0)
   return;

  VAR_6 = FUNC_0(&VAR_7, VAR_6);

  if (VAR_8) {
   VAR_8 = 0;
   FUNC_2(VAR_2,
"Known %sL2CAP routes\n", (VAR_4 == VAR_1[VAR_0].n_value)? "raw " : "");
   FUNC_2(VAR_2,
"%-8.8s %-8.8s %-17.17s\n", "RTentry",
    "Hook",
    "BD_ADDR");
  }

  FUNC_2(VAR_2,
"%-8lx %-8lx %-17.17d\n",
   (unsigned long) VAR_5,
   (unsigned long) VAR_7.hook,
   FUNC_1(&VAR_7.src, ((void*)0), 0));
 }
}
