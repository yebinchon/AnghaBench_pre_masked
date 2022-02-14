
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xdrproc_t ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_6__ {int success; struct TYPE_6__* next; } ;
typedef TYPE_1__ rpcbs_rmtcalllist ;
struct TYPE_7__ {int success; struct TYPE_7__* next; } ;
typedef TYPE_2__ rpcbs_addrlist ;
typedef TYPE_3__* rpcb_stat_byvers ;
struct TYPE_8__ {int setinfo; int unsetinfo; int* info; TYPE_1__* rmtinfo; TYPE_2__* addrinfo; } ;
typedef int CLIENT ;


 scalar_t__ FUNC_0 (int *,int ,int ,int *,int ,char*,struct timeval) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;


 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;


 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,char*) ;
 int * FUNC_5 (char*,int ,int *) ;
 int FUNC_6 (int) ;
 int * FUNC_7 (int ,int ) ;
 int FUNC_8 (char*,int ,int) ;
 int FUNC_9 (size_t,TYPE_3__*) ;
 int FUNC_10 (size_t,TYPE_3__*) ;
 int FUNC_11 (char*,...) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_12 (int) ;
 int FUNC_13 (char*,char*,...) ;
 int FUNC_14 (char const*) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;

__attribute__((used)) static void
FUNC_15(int VAR_17, char **VAR_18)
{
 rpcb_stat_byvers VAR_19;
 struct timeval VAR_20;
 register CLIENT *VAR_21;
 char *VAR_22;
 int VAR_23, VAR_24;
 rpcbs_addrlist *VAR_25;
 rpcbs_rmtcalllist *VAR_26;
 int VAR_27, VAR_28;

 char VAR_29[64];

 char VAR_30[256];
 char *VAR_31, *VAR_32;
 const char *VAR_33[] = {
  "NULL", "SET", "UNSET", "GETPORT",
  "DUMP", "CALLIT"
 };
 const char *VAR_34[] = {
  "NULL", "SET", "UNSET", "GETADDR", "DUMP", "CALLIT", "TIME",
  "U2T", "T2U"
 };
 const char *VAR_35[] = {
  "NULL", "SET", "UNSET", "GETADDR", "DUMP", "CALLIT", "TIME",
  "U2T", "T2U", "VERADDR", "INDRECT", "GETLIST", "GETSTAT"
 };



 if (VAR_17 >= 1) {
  VAR_22 = VAR_18[0];
  VAR_21 = FUNC_5(VAR_22, VAR_6, ((void*)0));
 } else
  VAR_21 = FUNC_7(VAR_2, VAR_6);
 if (VAR_21 == (CLIENT *)((void*)0)) {
  FUNC_3("rpcinfo: can't contact rpcbind");
  FUNC_6(1);
 }
 VAR_20.tv_sec = 60;
 VAR_20.tv_usec = 0;
 FUNC_8((char *)&VAR_19, 0, sizeof (rpcb_stat_byvers));
 if (FUNC_0(VAR_21, VAR_4, (xdrproc_t) VAR_16, ((void*)0),
  (xdrproc_t) VAR_15, (char *)&VAR_19, VAR_20)
   != VAR_10) {
  FUNC_4(VAR_21, "rpcinfo: can't contact rpcbind: ");
  FUNC_6(1);
 }
 FUNC_11("PORTMAP (version 2) statistics\n");
 VAR_32 = VAR_30;
 for (VAR_23 = 0; VAR_23 <= VAR_12; VAR_23++) {
  VAR_29[0] = '\0';
  switch (VAR_23) {
  case 133:
   FUNC_13(VAR_29, "%d/", VAR_19[VAR_7].setinfo);
   break;
  case 132:
   FUNC_13(VAR_29, "%d/",
    VAR_19[VAR_7].unsetinfo);
   break;
  case 134:
   VAR_27 = 0;
   for (VAR_25 = VAR_19[VAR_7].addrinfo; VAR_25;
    VAR_25 = VAR_25->next)
    VAR_27 += VAR_25->success;
   FUNC_13(VAR_29, "%d/", VAR_27);
   break;
  case 135:
   VAR_27 = 0;
   for (VAR_26 = VAR_19[VAR_7].rmtinfo; VAR_26;
    VAR_26 = VAR_26->next)
    VAR_27 += VAR_26->success;
   FUNC_13(VAR_29, "%d/", VAR_27);
   break;
  default: break;
  }
  VAR_31 = &VAR_29[0] + FUNC_14(VAR_29);
  FUNC_13(VAR_31, "%d", VAR_19[VAR_7].info[VAR_23]);
  VAR_28 = FUNC_14(VAR_29);
  FUNC_11("%s%s", VAR_33[VAR_23],
   FUNC_12((8 * (1 + VAR_28 / 8))
   - FUNC_14(VAR_33[VAR_23])));
  FUNC_13(VAR_32, "%s%s", VAR_29,
   FUNC_12(VAR_27 = ((8 * (1 + VAR_28 / 8))
   - VAR_28)));
  VAR_32 += (VAR_28 + VAR_27);
 }
 FUNC_11("\n%s\n\n", VAR_30);

 if (VAR_19[VAR_7].info[135]) {
  FUNC_11("PMAP_RMTCALL call statistics\n");
  FUNC_10(VAR_7, &VAR_19[VAR_7]);
  FUNC_11("\n");
 }

 if (VAR_19[VAR_7].info[134]) {
  FUNC_11("PMAP_GETPORT call statistics\n");
  FUNC_9(VAR_7, &VAR_19[VAR_7]);
  FUNC_11("\n");
 }

 FUNC_11("RPCBIND (version 3) statistics\n");
 VAR_32 = VAR_30;
 for (VAR_23 = 0; VAR_23 <= VAR_13; VAR_23++) {
  VAR_29[0] = '\0';
  switch (VAR_23) {
  case 129:
   FUNC_13(VAR_29, "%d/", VAR_19[VAR_8].setinfo);
   break;
  case 128:
   FUNC_13(VAR_29, "%d/",
    VAR_19[VAR_8].unsetinfo);
   break;
  case 130:
   VAR_27 = 0;
   for (VAR_25 = VAR_19[VAR_8].addrinfo; VAR_25;
    VAR_25 = VAR_25->next)
    VAR_27 += VAR_25->success;
   FUNC_13(VAR_29, "%d/", VAR_27);
   break;
  case 131:
   VAR_27 = 0;
   for (VAR_26 = VAR_19[VAR_8].rmtinfo; VAR_26;
    VAR_26 = VAR_26->next)
    VAR_27 += VAR_26->success;
   FUNC_13(VAR_29, "%d/", VAR_27);
   break;
  default: break;
  }
  VAR_31 = &VAR_29[0] + FUNC_14(VAR_29);
  FUNC_13(VAR_31, "%d", VAR_19[VAR_8].info[VAR_23]);
  VAR_28 = FUNC_14(VAR_29);
  FUNC_11("%s%s", VAR_34[VAR_23],
   FUNC_12((8 * (1 + VAR_28 / 8))
   - FUNC_14(VAR_34[VAR_23])));
  FUNC_13(VAR_32, "%s%s", VAR_29,
   FUNC_12(VAR_27 = ((8 * (1 + VAR_28 / 8))
   - VAR_28)));
  VAR_32 += (VAR_28 + VAR_27);
 }
 FUNC_11("\n%s\n\n", VAR_30);

 if (VAR_19[VAR_8].info[131]) {
  FUNC_11("RPCB_RMTCALL (version 3) call statistics\n");
  FUNC_10(VAR_8, &VAR_19[VAR_8]);
  FUNC_11("\n");
 }

 if (VAR_19[VAR_8].info[130]) {
  FUNC_11("RPCB_GETADDR (version 3) call statistics\n");
  FUNC_9(VAR_8, &VAR_19[VAR_8]);
  FUNC_11("\n");
 }

 FUNC_11("RPCBIND (version 4) statistics\n");

 for (VAR_24 = 0; VAR_24 <= 9; VAR_24 += 9) {
  VAR_32 = VAR_30;
  for (VAR_23 = VAR_24; VAR_23 <= FUNC_1(8, VAR_14 - 9 + VAR_24); VAR_23++) {
   VAR_29[0] = '\0';
   switch (VAR_23) {
   case 129:
    FUNC_13(VAR_29, "%d/",
     VAR_19[VAR_9].setinfo);
    break;
   case 128:
    FUNC_13(VAR_29, "%d/",
     VAR_19[VAR_9].unsetinfo);
    break;
   case 130:
    VAR_27 = 0;
    for (VAR_25 = VAR_19[VAR_9].addrinfo; VAR_25;
     VAR_25 = VAR_25->next)
     VAR_27 += VAR_25->success;
    FUNC_13(VAR_29, "%d/", VAR_27);
    break;
   case 131:
    VAR_27 = 0;
    for (VAR_26 = VAR_19[VAR_9].rmtinfo; VAR_26;
     VAR_26 = VAR_26->next)
     VAR_27 += VAR_26->success;
    FUNC_13(VAR_29, "%d/", VAR_27);
    break;
   default: break;
   }
   VAR_31 = &VAR_29[0] + FUNC_14(VAR_29);





   if (VAR_23 != 130)
       FUNC_13(VAR_31, "%d", VAR_19[VAR_9].info[VAR_23]);
   else
       FUNC_13(VAR_31, "%d", VAR_19[VAR_9].info[VAR_23] +
       VAR_19[VAR_9].info[VAR_3]);
   VAR_28 = FUNC_14(VAR_29);
   FUNC_11("%s%s", VAR_35[VAR_23],
    FUNC_12((8 * (1 + VAR_28 / 8))
    - FUNC_14(VAR_35[VAR_23])));
   FUNC_13(VAR_32, "%s%s", VAR_29,
    FUNC_12(VAR_27 = ((8 * (1 + VAR_28 / 8))
    - VAR_28)));
   VAR_32 += (VAR_28 + VAR_27);
  }
  FUNC_11("\n%s\n", VAR_30);
 }

 if (VAR_19[VAR_9].info[131] ||
       VAR_19[VAR_9].info[VAR_5]) {
  FUNC_11("\n");
  FUNC_11("RPCB_RMTCALL (version 4) call statistics\n");
  FUNC_10(VAR_9, &VAR_19[VAR_9]);
 }

 if (VAR_19[VAR_9].info[130]) {
  FUNC_11("\n");
  FUNC_11("RPCB_GETADDR (version 4) call statistics\n");
  FUNC_9(VAR_9, &VAR_19[VAR_9]);
 }
 FUNC_2(VAR_21);
}
