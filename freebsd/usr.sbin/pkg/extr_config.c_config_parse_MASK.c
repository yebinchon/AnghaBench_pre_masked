
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_8__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ type; } ;
typedef TYPE_1__ ucl_object_t ;
typedef int * ucl_object_iter_t ;
struct sbuf {int dummy; } ;
struct config_value {void* value; } ;
struct config_entry {void* value; void* list; } ;
typedef scalar_t__ pkg_conf_file_t ;
struct TYPE_10__ {int type; int main_only; void* value; void* list; scalar_t__ envset; int key; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (void*) ;
 int FUNC_1 (void*,struct config_value*,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_8__* VAR_6 ;
 struct config_entry* FUNC_2 (int,int) ;
 int FUNC_3 (struct config_entry*) ;
 void* FUNC_4 (int) ;
 int VAR_7 ;
 int FUNC_5 (struct sbuf*) ;
 int FUNC_6 (struct sbuf*,char*) ;
 int FUNC_7 (struct sbuf*) ;
 int FUNC_8 (struct sbuf*) ;
 int FUNC_9 (struct sbuf*) ;
 struct sbuf* FUNC_10 () ;
 int FUNC_11 (struct sbuf*,char const) ;
 scalar_t__ FUNC_12 (char const*,char*) ;
 scalar_t__ FUNC_13 (int ,int ) ;
 void* FUNC_14 (char*) ;
 size_t FUNC_15 (char const*) ;
 TYPE_1__* FUNC_16 (TYPE_1__ const*,int **,int) ;
 char* FUNC_17 (TYPE_1__ const*) ;
 scalar_t__ FUNC_18 (TYPE_1__ const*) ;
 char* FUNC_19 (TYPE_1__ const*) ;
 int FUNC_20 (char*,int ) ;

__attribute__((used)) static void
FUNC_21(const ucl_object_t *VAR_8, pkg_conf_file_t VAR_9)
{
 struct sbuf *VAR_10 = FUNC_10();
 const ucl_object_t *VAR_11, *VAR_12;
 ucl_object_iter_t VAR_13 = ((void*)0), VAR_14 = ((void*)0);
 struct config_entry *VAR_15;
 struct config_value *VAR_16;
 const char *VAR_17;
 int VAR_18;
 size_t VAR_19;


 VAR_15 = FUNC_2(VAR_2, sizeof(struct config_entry));

 while ((VAR_11 = FUNC_16(VAR_8, &VAR_13, 1))) {
  VAR_17 = FUNC_17(VAR_11);
  if (VAR_17 == ((void*)0))
   continue;
  FUNC_5(VAR_10);

  if (VAR_9 == VAR_0) {
   for (VAR_19 = 0; VAR_19 < FUNC_15(VAR_17); ++VAR_19)
    FUNC_11(VAR_10, VAR_17[VAR_19]);
   FUNC_9(VAR_10);
  } else if (VAR_9 == VAR_1) {
   if (FUNC_12(VAR_17, "url") == 0)
    FUNC_6(VAR_10, "PACKAGESITE");
   else if (FUNC_12(VAR_17, "mirror_type") == 0)
    FUNC_6(VAR_10, "MIRROR_TYPE");
   else if (FUNC_12(VAR_17, "signature_type") == 0)
    FUNC_6(VAR_10, "SIGNATURE_TYPE");
   else if (FUNC_12(VAR_17, "fingerprints") == 0)
    FUNC_6(VAR_10, "FINGERPRINTS");
   else if (FUNC_12(VAR_17, "pubkey") == 0)
    FUNC_6(VAR_10, "PUBKEY");
   else if (FUNC_12(VAR_17, "enabled") == 0) {
    if ((VAR_11->type != VAR_4) ||
        !FUNC_18(VAR_11))
     goto cleanup;
   } else
    continue;
   FUNC_9(VAR_10);
  }

  for (VAR_18 = 0; VAR_18 < VAR_2; VAR_18++) {
   if (FUNC_13(FUNC_7(VAR_10), VAR_6[VAR_18].key) == 0)
    break;
  }


  if (VAR_18 == VAR_2)
   continue;


  if (VAR_6[VAR_18].envset)
   continue;


  switch (VAR_6[VAR_18].type) {
  case 128:
   if (VAR_11->type != VAR_3) {
    FUNC_20("Skipping invalid array "
        "value for %s.\n", VAR_6[VAR_18].key);
    continue;
   }
   VAR_15[VAR_18].list =
       FUNC_4(sizeof(*VAR_15[VAR_18].list));
   FUNC_0(VAR_15[VAR_18].list);

   while ((VAR_12 = FUNC_16(VAR_11, &VAR_14, 1))) {
    if (VAR_12->type != VAR_5)
     continue;
    VAR_16 = FUNC_4(sizeof(struct config_value));
    VAR_16->value =
        FUNC_14(FUNC_19(VAR_12));
    FUNC_1(VAR_15[VAR_18].list, VAR_16,
        VAR_7);
   }
   break;
  case 129:
   VAR_15[VAR_18].value =
       FUNC_14(FUNC_18(VAR_11) ? "yes" : "no");
   break;
  default:

   VAR_15[VAR_18].value = FUNC_14(FUNC_19(VAR_11));
   break;
  }
 }


 for (VAR_18 = 0; VAR_18 < VAR_2; VAR_18++) {
  if (VAR_6[VAR_18].envset)
   continue;

  if (VAR_9 != VAR_0 && VAR_6[VAR_18].main_only == 1)
   continue;
  switch (VAR_6[VAR_18].type) {
  case 128:
   VAR_6[VAR_18].list = VAR_15[VAR_18].list;
   break;
  default:
   VAR_6[VAR_18].value = VAR_15[VAR_18].value;
   break;
  }
 }

cleanup:
 FUNC_3(VAR_15);
 FUNC_8(VAR_10);
}
