
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct in_addr {int dummy; } ;
struct hostent {scalar_t__ h_addrtype; int h_length; scalar_t__ h_addr; int h_addr_list; } ;
struct TYPE_5__ {void* port; } ;
struct TYPE_4__ {void* port; struct in_addr target; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (int ,int ,char*,int ) ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (void*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,char*) ;
 struct hostent* FUNC_6 (char*) ;
 int FUNC_7 (int,char**,char*) ;
 char* VAR_5 ;
 int FUNC_8 () ;
 void* VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 char* VAR_12 ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (char*) ;
 void* VAR_13 ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_13 (char*,void*,int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 () ;
 void* VAR_16 ;
 int VAR_17 ;

int FUNC_16 (int VAR_18, char *VAR_19[]) {
  int VAR_20;

  FUNC_11 ();

  VAR_12 = VAR_19[0];

  char VAR_21[256];
  char VAR_22[256];
  int VAR_23 = 0;


  while ((VAR_20 = FUNC_7 (VAR_18, VAR_19, "vdc:a:p:E:P:N:u:l:")) != -1) {
    switch (VAR_20) {
    case 'v':
      VAR_17++;
      break;
    case 'c':
      VAR_8 = FUNC_2(VAR_9);
      if (VAR_8 <= 0 || VAR_8 > VAR_1) {
        VAR_8 = VAR_1;
      }
      break;
    case 'a':
      FUNC_13 (VAR_5, VAR_9, 255);
      break;
    case 'p':
      VAR_11 = FUNC_2(VAR_9);
      break;
    case 'P':
      VAR_13 = FUNC_2(VAR_9);
      break;
    case 'E':
      FUNC_13 (VAR_21, VAR_9, 255);
      VAR_23 = 1;
      break;
    case 'N':
      FUNC_13 (VAR_22, VAR_9, 255);
      break;
    case 'u':
      VAR_16 = VAR_9;
      break;
    case 'l':
      VAR_6 = VAR_9;
      break;
    case 'h':
      FUNC_15 ();
      return 2;
    case 'd':
      VAR_3 ^= 1;
    }
  }

  VAR_2.port = VAR_11;

  if (VAR_18 <= VAR_10) {
    FUNC_15();
    return 2;
  }




  if (FUNC_9(VAR_8 + 16) < 0) {
    FUNC_5 (VAR_15, "fatal: cannot raise open file limit to %s\n", VAR_8+16);
    FUNC_4(1);
  }

  if (!VAR_23) {
    FUNC_1 (0);
  } else {
    FUNC_1 (VAR_21);
  }

  FUNC_8();

  for (VAR_20 = VAR_10; VAR_20 < VAR_18; VAR_20++) {
    FUNC_0 (0, 0, VAR_19[VAR_20], 0);
  }

  FUNC_10 (VAR_22);

  VAR_14 = FUNC_14(0);

  struct hostent *VAR_24;
  if (!(VAR_24 = FUNC_6 (VAR_5)) || VAR_24->h_addrtype != VAR_0 || VAR_24->h_length != 4 || !VAR_24->h_addr_list || !VAR_24->h_addr) {
    FUNC_5 (VAR_15, "cannot resolve %s\n", VAR_5);
    FUNC_4 (2);
  }
  VAR_4.target = *((struct in_addr *) VAR_24->h_addr);
  VAR_4.port = VAR_13;

  VAR_7 = FUNC_3 (&VAR_4, 0);

  FUNC_12();

  return 0;
}
