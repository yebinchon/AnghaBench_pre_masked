
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct in_addr {int dummy; } ;
struct hostent {scalar_t__ h_addrtype; int h_length; scalar_t__ h_addr; int h_addr_list; } ;
struct TYPE_3__ {struct in_addr target; void* port; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (void*) ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 scalar_t__ FUNC_2 (char*) ;
 int VAR_6 ;
 int FUNC_3 (TYPE_1__*,int ) ;
 scalar_t__ VAR_7 ;
 TYPE_1__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (int) ;
 struct hostent* FUNC_5 (char*) ;
 int FUNC_6 (int,char**,char*) ;
 char* VAR_10 ;
 int FUNC_7 () ;
 int FUNC_8 (char*,char*) ;
 void* VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_9 () ;
 void* VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 char* VAR_16 ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 () ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_12 () ;
 int FUNC_13 (void*,char*,scalar_t__*) ;
 int FUNC_14 () ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_15 (char*,void*,int) ;
 int VAR_21 ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int *,int ) ;
 int VAR_22 ;
 scalar_t__ FUNC_18 (int *,char*) ;
 int FUNC_19 (int *) ;
 int VAR_23 ;
 int FUNC_20 () ;
 char* VAR_24 ;
 int VAR_25 ;
 int FUNC_21 (int,char*,scalar_t__,scalar_t__) ;

int FUNC_22 (int VAR_26, char *VAR_27[]) {
  int VAR_28;
  FUNC_12 ();
  VAR_16 = VAR_27[0];
  VAR_7 = 0;
  VAR_9 = 0;
  while ((VAR_28 = FUNC_6 (VAR_26, VAR_27, "A:S:a:b:c:l:p:dhu:v")) != -1) {
    switch (VAR_28) {
    case 'A':
      FUNC_13 (VAR_13, "%16llx", &VAR_4);
      break;
    case 'S':
      FUNC_13 (VAR_13, "%16llx", &VAR_18);
      break;
    case 'a':
      FUNC_15 (VAR_10, VAR_13, 255);
      break;
    case 'b':
      VAR_5 = FUNC_1(VAR_13);
      if (VAR_5 <= 0) VAR_5 = VAR_1;
      break;
    case 'c':
      VAR_12 = FUNC_1 (VAR_13);
      if (VAR_12 <= 0 || VAR_12 > VAR_2) {
        VAR_12 = VAR_2;
      }
      break;
    case 'h':
      FUNC_20();
      return 2;
    case 'l':
      VAR_11 = VAR_13;
      break;
    case 'p':
      VAR_8.port = VAR_15 = FUNC_1(VAR_13);
      break;
    case 'u':
      VAR_24 = VAR_13;
      break;
    case 'v':
      VAR_25++;
      break;
    }
  }

  if (VAR_26 != VAR_14 + 1) {
    FUNC_20 ();
  }

  if (VAR_4 == 0) {
    VAR_3 = 0;
  }

  FUNC_21 (4, "auth_key_id: 0x%llx, session_id: 0x%llx\n", VAR_4, VAR_18);

  FUNC_7 ();

  if (FUNC_10 (VAR_12 + 16) < 0) {
    FUNC_8 ("fatal: cannot raise open file limit to %d\n", VAR_12 + 16);
    FUNC_4 (1);
  }

  FUNC_0 (0);

  if (FUNC_2 (VAR_24) < 0) {
    FUNC_8 ("fatal: cannot change user to %s\n", VAR_24 ? VAR_24 : "(none)");
    FUNC_4 (1);
  }

  FUNC_9 ();

  VAR_19 = FUNC_16 (0);

  struct hostent *VAR_29;
  if (!(VAR_29 = FUNC_5 (VAR_10)) || VAR_29->h_addrtype != VAR_0 || VAR_29->h_length != 4 || !VAR_29->h_addr_list || !VAR_29->h_addr) {
    FUNC_8 ("cannot resolve %s\n", VAR_10);
    FUNC_4 (2);
  }
  VAR_8.target = *((struct in_addr *) VAR_29->h_addr);

  VAR_21 = FUNC_3 (&VAR_8, 0);

  if (FUNC_18 (&VAR_6, VAR_27[VAR_14]) < 0) {
    FUNC_8 ("Error in \"%s\"\n", VAR_27[VAR_14]);
    FUNC_17 (&VAR_6, VAR_20);
    FUNC_4 (1);
  }

  VAR_17 = VAR_22;

  FUNC_19 (&VAR_23);

  FUNC_11 ();

  FUNC_14 ();

  return 0;
}
