
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_13__ {char* xbe_name; int xbe_version; } ;
typedef TYPE_1__ ximgact_binmisc_entry_t ;
typedef int xbe_out ;
typedef int xbe_in ;
typedef size_t uint32_t ;
struct TYPE_12__ {int (* func ) (int,char**,TYPE_1__*) ;char* name; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int * VAR_6 ;
 TYPE_10__* VAR_7 ;
 int FUNC_1 (int,char**) ;
 int VAR_8 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (size_t) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*) ;
 TYPE_1__* FUNC_8 (TYPE_1__*,size_t) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int,char**,TYPE_1__*) ;
 int FUNC_11 (int ,TYPE_1__*,size_t*,TYPE_1__*,size_t) ;
 int FUNC_12 (char*,...) ;

int
FUNC_13(int VAR_9, char **VAR_10)
{
 int VAR_11 = 0, VAR_12 = -1;
 ximgact_binmisc_entry_t VAR_13, *VAR_14 = ((void*)0);
 ximgact_binmisc_entry_t VAR_15, *VAR_16 = ((void*)0);
 size_t VAR_17 = 0;
 size_t VAR_18 = 0, *VAR_19 = ((void*)0);
 uint32_t VAR_20;

 if (FUNC_6(VAR_5) == -1) {
  if (FUNC_4(VAR_5) == -1)
   FUNC_2("Can't load %s kernel module: %s",
       VAR_5, FUNC_9(VAR_8));
 }

 FUNC_0(&VAR_13, sizeof(VAR_13));
 FUNC_0(&VAR_15, sizeof(VAR_15));
 VAR_13.xbe_version = VAR_4;

 if (VAR_9 < 2)
  FUNC_12("Error: requires at least one argument");

 VAR_9--, VAR_10++;
 VAR_12 = FUNC_1(VAR_9, VAR_10);
 if (VAR_12 < 0)
  FUNC_12("Error: Unknown command \"%s\"", VAR_10[0]);
 VAR_9--, VAR_10++;

 VAR_11 = (*VAR_7[VAR_12].func)(VAR_9, VAR_10, &VAR_13);
 if (VAR_11)
  FUNC_12("Can't parse command-line for '%s' command",
      VAR_7[VAR_12].name);

 if (VAR_12 != VAR_0) {
  VAR_14 = &VAR_13;
  VAR_17 = sizeof(VAR_13);
 } else
  VAR_19 = &VAR_18;
 if (VAR_12 == VAR_1) {
  VAR_18 = sizeof(VAR_15);
  VAR_16 = &VAR_15;
  VAR_19 = &VAR_18;
 }

 VAR_11 = FUNC_11(VAR_6[VAR_12], VAR_16, VAR_19,
     VAR_14, VAR_17);

 if (VAR_11)
  switch(VAR_8) {
  case 131:
   FUNC_12("Invalid interpreter name or --interpreter, "
       "--magic, --mask, or --size argument value");
   break;

  case 132:
   FUNC_12("'%s' is not unique in activator list",
       VAR_13.xbe_name);
   break;

  case 130:
   FUNC_12("'%s' is not found in activator list",
       VAR_13.xbe_name);
   break;

  case 129:
   FUNC_2("Fatal: no more room in the activator list "
       "(limited to %d enties)", VAR_3);
   break;

  case 128:
   FUNC_12("Insufficient privileges for '%s' command",
       VAR_7[VAR_12].name);
   break;

  default:
   FUNC_2("Fatal: sysctlbyname() returned: %s",
       FUNC_9(VAR_8));
   break;
  }


 if (VAR_12 == VAR_1)
  FUNC_7(VAR_16);

 if (VAR_12 == VAR_0 && VAR_18 > 0) {
  VAR_16 = FUNC_5(VAR_18);
  if (!VAR_16)
   FUNC_2("Fatal: out of memory");
  while(1) {
   size_t VAR_21 = VAR_18;
   VAR_11 = FUNC_11(VAR_6[VAR_12], VAR_16,
       &VAR_18, ((void*)0), 0);

   if (VAR_11 == -1 && VAR_8 == VAR_2 &&
       VAR_18 == VAR_21) {




    VAR_18 += sizeof(VAR_15);
    VAR_16 = FUNC_8(VAR_16, VAR_18);
    if (!VAR_16)
     FUNC_2("Fatal: out of memory");
   } else
    break;
  }
  if (VAR_11) {
   FUNC_3(VAR_16);
   FUNC_2("Fatal: %s", FUNC_9(VAR_8));
  }
  for(VAR_20 = 0; VAR_20 < (VAR_18 / sizeof(VAR_15)); VAR_20++)
   FUNC_7(&VAR_16[VAR_20]);
 }

 return (VAR_11);
}
