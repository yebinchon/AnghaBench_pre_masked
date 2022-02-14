
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
typedef int recno_t ;
struct TYPE_10__ {int (* put ) (TYPE_2__*,TYPE_1__*,TYPE_1__*,int ) ;} ;
struct TYPE_9__ {char* data; size_t size; } ;
typedef TYPE_1__ DBT ;


 scalar_t__ FUNC_0 (int,size_t) ;
 scalar_t__ FUNC_1 (size_t,int) ;
 char VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_2 (char**,char**) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int *,char*,size_t) ;
 int FUNC_6 (char*,int) ;
 char* FUNC_7 (char*,size_t) ;
 char* FUNC_8 (char*,char) ;
 size_t FUNC_9 (char*) ;
 int FUNC_10 (TYPE_2__*,TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_11 (TYPE_2__*,TYPE_1__*,TYPE_1__*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_12 (char*,int,char*) ;

__attribute__((used)) static void
FUNC_13(char **VAR_6)
{
 DBT VAR_7, VAR_8;
 recno_t VAR_9;
 size_t VAR_10, VAR_11;
 int VAR_12;
 char *VAR_13, *VAR_14, *VAR_15;

 VAR_8.data = ((void*)0);
 VAR_7.data = ((void*)0);
 for (VAR_9 = 0, VAR_11 = 0; (VAR_12 = FUNC_2(&VAR_13, VAR_6)) > 0;) {





  VAR_10 = FUNC_9(VAR_13);
  if (VAR_11 <= VAR_10 + 2) {
   VAR_11 += FUNC_0(256, VAR_10 + 2);
   if ((VAR_8.data = FUNC_7(VAR_8.data, VAR_11)) == ((void*)0))
    FUNC_4(1, "malloc failed");
  }


  if ((VAR_14 = FUNC_8(VAR_13, ':')) == ((void*)0)) {
   FUNC_12("no name field: %.*s", (int)FUNC_1(VAR_10, 20), VAR_13);
   continue;
  }


  switch(VAR_12) {
  case 1:
   ((char *)(VAR_8.data))[0] = VAR_0;
   break;
  case 2:
   ((char *)(VAR_8.data))[0] = VAR_3;
   FUNC_12("record not tc expanded: %.*s", (int)(VAR_14 - VAR_13),
       VAR_13);
   break;
  }


  FUNC_5(&((u_char *)(VAR_8.data))[1], VAR_13, VAR_10 + 1);
  VAR_8.size = VAR_10 + 2;


  VAR_7.data = VAR_13;
  VAR_7.size = VAR_14 - VAR_13;

  switch(VAR_4->put(VAR_4, &VAR_7, &VAR_8, VAR_1)) {
  case -1:
   FUNC_3(1, "put");

  case 1:
   FUNC_12("ignored duplicate: %.*s",
       (int)VAR_7.size, (char *)VAR_7.data);
   continue;
  }
  ++VAR_9;


  *VAR_14 = '\0';
  if (FUNC_8(VAR_13, '|') == ((void*)0))
   continue;
  *VAR_14 = ':';


  ((char *)(VAR_8.data))[0] = VAR_2;
  FUNC_5(&((u_char *)(VAR_8.data))[1], VAR_7.data, VAR_7.size);
  VAR_8.size = VAR_7.size + 1;


  for (VAR_14 = VAR_15 = VAR_13;; ++VAR_14) {
   if (VAR_14 > VAR_15 && (*VAR_14 == ':' || *VAR_14 == '|')) {
    VAR_7.size = VAR_14 - VAR_15;
    VAR_7.data = VAR_15;
    switch(VAR_4->put(VAR_4,
        &VAR_7, &VAR_8, VAR_1)) {
    case -1:
     FUNC_3(1, "put");

    case 1:
     FUNC_12("ignored duplicate: %.*s",
         (int)VAR_7.size, (char *)VAR_7.data);
    }
    VAR_15 = VAR_14 + 1;
   }
   if (*VAR_14 == ':')
    break;
  }
 }

 switch(VAR_12) {
 case -1:
  FUNC_3(1, "file argument");

 case -2:
  FUNC_4(1, "potential reference loop detected");

 }

 if (VAR_5)
  (void)FUNC_6("cap_mkdb: %d capability records\n", VAR_9);
}
