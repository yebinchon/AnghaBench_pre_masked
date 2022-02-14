
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proto_handler {int dummy; } ;
struct dll {void* handle; int name; } ;
struct TYPE_2__ {int name; } ;
typedef TYPE_1__ moduledata_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct proto_handler*) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct dll*) ;
 char* FUNC_2 () ;
 void* FUNC_3 (char*,int ) ;
 void* FUNC_4 (void*,char*) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (struct dll*) ;
 struct dll* FUNC_7 (int) ;
 int VAR_5 ;
 int FUNC_8 (int ,int ,int ) ;

int
FUNC_9(char *VAR_6)
{
 struct dll *VAR_7;
 void *VAR_8;
 struct proto_handler *VAR_9;
        const char *VAR_10;
 moduledata_t *VAR_11;

        VAR_8 = FUNC_3 (VAR_6, VAR_4);
        if (!VAR_8) {
  FUNC_5(VAR_5, "%s\n", FUNC_2());
  return (VAR_2);
        }

 VAR_11 = FUNC_4(VAR_8, "alias_mod");
        if ((VAR_10 = FUNC_2()) != ((void*)0)) {
  FUNC_5(VAR_5, "%s\n", FUNC_2());
  return (VAR_2);
        }

 VAR_7 = FUNC_7(sizeof(struct dll));
 if (VAR_7 == ((void*)0))
  return (VAR_3);
 FUNC_8(VAR_7->name, VAR_11->name, VAR_0);
 VAR_7->handle = VAR_8;
 if (FUNC_1(VAR_7) == VAR_1) {
  FUNC_6(VAR_7);
  FUNC_5(VAR_5, "dll conflict\n");
  return (VAR_1);
 }

        VAR_9 = FUNC_4(VAR_7->handle, "handlers");
        if ((VAR_10 = FUNC_2()) != ((void*)0)) {
  FUNC_5(VAR_5, "%s\n", VAR_10);
  return (VAR_2);
 }

 FUNC_0(VAR_9);
 return (0);
}
