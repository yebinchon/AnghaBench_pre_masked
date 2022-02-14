
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int time_t ;
typedef int myname ;
struct TYPE_4__ {char* data; int size; } ;
typedef TYPE_1__ DBT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char**) ;
 void* FUNC_1 (void*) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,int) ;
 int FUNC_4 (int,char**,char*) ;
 int VAR_5 ;
 char* FUNC_5 (int) ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (int ,int ) ;
 int VAR_8 ;
 char* FUNC_7 (void*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*,char*,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 () ;
 int VAR_9 ;
 void* VAR_10 ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (char**) ;
 scalar_t__ FUNC_16 (char*,char*,TYPE_1__*,TYPE_1__*,int) ;
 char* VAR_11 ;
 int FUNC_17 (int) ;
 int FUNC_18 (scalar_t__,int *,int ,char*,int ,int *) ;
 int VAR_12 ;
 char* VAR_13 ;
 char* VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 int FUNC_19 (char*,char*,char*,int (*) (scalar_t__,int *,int ,char*,int ,int *)) ;

int
FUNC_20(int VAR_17, char *VAR_18[])
{
 int VAR_19;
 DBT VAR_20, VAR_21;
 char VAR_22[VAR_0];
 struct hostlist {
  char *name;
  struct hostlist *next;
 };
 struct hostlist *VAR_23 = ((void*)0);
 struct hostlist *VAR_24;

 while ((VAR_19 = FUNC_4(VAR_17, VAR_18, "d:j:p:h:t:v")) != -1) {
  switch (VAR_19) {
  case 'd':
   VAR_11 = VAR_6;
   break;
  case 'j':
   VAR_12 = FUNC_1(VAR_6);
   if (VAR_12 <= 0)
    VAR_12 = 1;
   break;
  case 'p':
   VAR_10 = VAR_6;
   break;
  case 'h':
   if ((VAR_24 = (struct hostlist *)FUNC_5(sizeof(struct hostlist))) == ((void*)0)) {
    FUNC_14("malloc failed");
    FUNC_17(1);
   }
   VAR_24->name = FUNC_7(VAR_6);
   VAR_24->next = VAR_23;
   VAR_23 = VAR_24;
   break;
  case 't':
   VAR_15 = FUNC_1(VAR_6);
   break;
  case 'v':
   VAR_9++;
   break;
  default:
   FUNC_13();
   break;
  }
 }

 VAR_17 -= VAR_7;
 VAR_18 += VAR_7;

 VAR_13 = VAR_18[0];

 if (VAR_13 == ((void*)0)) {

  FUNC_13();
 }





 if (VAR_11 == ((void*)0)) {
  char *VAR_25;
  if (!FUNC_15(&VAR_25) &&
   !FUNC_0(&VAR_25)) {
   FUNC_14("no domain specified and NIS not running");
   FUNC_13();
  } else
   FUNC_15(&VAR_11);
 }



 if (FUNC_3 ((char *)&VAR_22, sizeof(VAR_22))) {
  FUNC_14("failed to get name of local host: %s",
   FUNC_8(VAR_4));
  FUNC_17(1);
 }

 VAR_20.data = "YP_MASTER_NAME";
 VAR_20.size = sizeof("YP_MASTER_NAME") - 1;

 if (FUNC_16(VAR_11, VAR_13,
     &VAR_20, &VAR_21, 1) != VAR_3) {
  FUNC_14("couldn't open %s map: %s", VAR_13,
    FUNC_8(VAR_4));
  FUNC_17(1);
 }

 if (FUNC_10(VAR_22, VAR_21.data, VAR_21.size) == 0) {



  if (VAR_23 == ((void*)0))
   VAR_8 = 1;
 } else {
  FUNC_14("warning: this host is not the master for %s",
       VAR_13);



 }

 VAR_14 = FUNC_5(VAR_21.size + 1);
 FUNC_11(VAR_14, VAR_21.data, VAR_21.size);
 VAR_14[VAR_21.size] = '\0';


 FUNC_6(VAR_2, VAR_5);
 FUNC_6(VAR_1, VAR_5);


 VAR_16 = FUNC_12((time_t *)((void*)0));

 if (VAR_23) {




  VAR_24 = VAR_23;
  while (VAR_24) {
   FUNC_18(VAR_3, ((void*)0), 0, VAR_24->name,
       FUNC_9(VAR_24->name), ((void*)0));
   VAR_24 = VAR_24->next;
  }
 } else {




  FUNC_19("ypservers", VAR_11,
         "localhost", FUNC_18);
 }

 if (VAR_9 > 1)
  FUNC_14("all jobs dispatched");


 FUNC_17(0);


 FUNC_2(0);
}
