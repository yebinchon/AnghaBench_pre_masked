
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slot_results {char* http_code; int curl_result; } ;
struct object_id {int dummy; } ;
struct ref {char* name; struct object_id old_oid; struct ref* next; } ;
struct active_request_slot {int curl; struct slot_results* results; } ;
struct TYPE_2__ {char* url; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,char**,struct object_id*) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (char*) ;
 struct active_request_slot* FUNC_5 () ;
 int FUNC_6 (struct object_id*) ;
 scalar_t__ FUNC_7 (struct object_id*) ;
 scalar_t__ FUNC_8 (char*,char const*,int) ;
 char* FUNC_9 (struct object_id*) ;
 struct ref* VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_10 (struct active_request_slot*) ;
 scalar_t__ FUNC_11 (struct active_request_slot*) ;
 int VAR_6 ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (char const*) ;
 int FUNC_14 (struct object_id*,struct ref*) ;
 char* FUNC_15 (char*,char*,char*) ;

__attribute__((used)) static int FUNC_16(const char *VAR_7, int VAR_8)
{
 struct ref *VAR_9 = VAR_4;
 struct ref *VAR_10 = ((void*)0);
 struct object_id VAR_11;
 char *VAR_12 = ((void*)0);
 int VAR_13;
 int VAR_14 = FUNC_13(VAR_7);
 int VAR_15;
 struct active_request_slot *VAR_16;
 struct slot_results VAR_17;
 char *VAR_18;


 for (VAR_13 = 0; VAR_9; VAR_9 = VAR_9->next) {
  char *VAR_19 = VAR_9->name;
  int VAR_20 = FUNC_13(VAR_19);
  if (VAR_20 < VAR_14 ||
      FUNC_8(VAR_19 + VAR_20 - VAR_14, VAR_7, VAR_14))
   continue;
  if (VAR_20 != VAR_14 && VAR_19[VAR_20 - VAR_14 - 1] != '/')
   continue;
  VAR_13++;
  VAR_10 = VAR_9;
 }
 if (VAR_13 == 0)
  return FUNC_1("No remote branch matches %s", VAR_7);
 if (VAR_13 != 1)
  return FUNC_1("More than one remote branch matches %s",
        VAR_7);





 FUNC_2("HEAD", &VAR_12, &VAR_11);
 if (!VAR_12)
  return FUNC_1("Remote HEAD is not a symref");


 for (VAR_15 = 0; VAR_12 && VAR_15 < VAR_2; VAR_15++) {
  if (!FUNC_12(VAR_10->name, VAR_12))
   return FUNC_1("Remote branch %s is the current HEAD",
         VAR_10->name);
  FUNC_2(VAR_12, &VAR_12, &VAR_11);
 }


 if (!VAR_8) {

  if (VAR_12)
   return FUNC_1("Remote HEAD symrefs too deep");
  if (FUNC_7(&VAR_11))
   return FUNC_1("Unable to resolve remote HEAD");
  if (!FUNC_6(&VAR_11))
   return FUNC_1("Remote HEAD resolves to object %s\nwhich does not exist locally, perhaps you need to fetch?", FUNC_9(&VAR_11));


  if (FUNC_7(&VAR_10->old_oid))
   return FUNC_1("Unable to resolve remote branch %s",
         VAR_10->name);
  if (!FUNC_6(&VAR_10->old_oid))
   return FUNC_1("Remote branch %s resolves to object %s\nwhich does not exist locally, perhaps you need to fetch?", VAR_10->name, FUNC_9(&VAR_10->old_oid));


  if (!FUNC_14(&VAR_11, VAR_10)) {
   return FUNC_1("The branch '%s' is not an ancestor "
         "of your current HEAD.\n"
         "If you are sure you want to delete it,"
         " run:\n\t'git http-push -D %s %s'",
         VAR_10->name, VAR_5->url, VAR_7);
  }
 }


 FUNC_3(VAR_6, "Removing remote branch '%s'\n", VAR_10->name);
 if (VAR_3)
  return 0;
 VAR_18 = FUNC_15("%s%s", VAR_5->url, VAR_10->name);
 VAR_16 = FUNC_5();
 VAR_16->results = &VAR_17;
 FUNC_0(VAR_16->curl, VAR_18, VAR_1);
 if (FUNC_11(VAR_16)) {
  FUNC_10(VAR_16);
  FUNC_4(VAR_18);
  if (VAR_17.curl_result != VAR_0)
   return FUNC_1("DELETE request failed (%d/%ld)",
         VAR_17.curl_result, VAR_17.http_code);
 } else {
  FUNC_4(VAR_18);
  return FUNC_1("Unable to start DELETE request");
 }

 return 0;
}
