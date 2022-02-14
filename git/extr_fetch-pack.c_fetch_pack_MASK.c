
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct shallow_info {int dummy; } ;
struct ref {int dummy; } ;
struct oid_array {scalar_t__ nr; } ;
struct TYPE_2__ {int choice; } ;
struct fetch_pack_args {int connectivity_checked; scalar_t__ deepen; int cloning; TYPE_1__ filter_options; scalar_t__ no_dependents; } ;
struct check_connected_options {int is_deepening_fetch; int shallow_file; } ;
typedef int si ;
typedef enum protocol_version { ____Placeholder_protocol_version } protocol_version ;


 int FUNC_0 (char*) ;
 struct check_connected_options VAR_0 ;
 struct oid_array VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,struct ref**,struct check_connected_options*) ;
 int FUNC_3 (struct shallow_info*) ;
 int FUNC_4 (int ) ;
 struct ref* FUNC_5 (struct fetch_pack_args*,int*,struct ref const*,struct ref**,int,struct shallow_info*,char**) ;
 struct ref* FUNC_6 (struct fetch_pack_args*,int*,struct ref const*,struct ref**,int,struct oid_array*,struct shallow_info*,char**) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (struct ref*) ;
 int VAR_3 ;
 int FUNC_10 (struct shallow_info*,int ,int) ;
 int FUNC_11 (struct oid_array*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (TYPE_1__*,char*) ;
 int FUNC_14 (struct shallow_info*,struct oid_array*) ;
 int VAR_4 ;
 int FUNC_15 (struct ref**,int) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_18 (struct fetch_pack_args*,struct ref**,int,struct shallow_info*) ;

struct ref *FUNC_19(struct fetch_pack_args *VAR_7,
         int VAR_8[],
         const struct ref *VAR_9,
         struct ref **VAR_10, int VAR_11,
         struct oid_array *VAR_12,
         char **VAR_13,
         enum protocol_version VAR_14)
{
 struct ref *VAR_15;
 struct shallow_info VAR_16;
 struct oid_array VAR_17 = VAR_1;

 FUNC_8();
 if (VAR_11)
  VAR_11 = FUNC_15(VAR_10, VAR_11);

 if (VAR_7->no_dependents && !VAR_7->filter_options.choice) {
  FUNC_13(&VAR_7->filter_options, "blob:none");
 }

 if (VAR_14 != VAR_4 && !VAR_9) {
  FUNC_12(VAR_8[1]);
  FUNC_4(FUNC_1("no matching remote head"));
 }
 if (VAR_14 == VAR_4) {
  if (VAR_12->nr)
   FUNC_0("Protocol V2 does not provide shallows at this point in the fetch");
  FUNC_10(&VAR_16, 0, sizeof(VAR_16));
  VAR_15 = FUNC_6(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11,
        &VAR_17, &VAR_16,
        VAR_13);
 } else {
  FUNC_14(&VAR_16, VAR_12);
  VAR_15 = FUNC_5(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11,
     &VAR_16, VAR_13);
 }
 FUNC_16(VAR_6);

 if (!VAR_7->cloning && VAR_7->deepen) {
  struct check_connected_options VAR_18 = VAR_0;
  struct ref *VAR_19 = VAR_15;
  VAR_18.shallow_file = VAR_2;
  if (VAR_7->deepen)
   VAR_18.is_deepening_fetch = 1;
  if (FUNC_2(VAR_3, &VAR_19, &VAR_18)) {
   FUNC_7(FUNC_1("remote did not send all necessary objects"));
   FUNC_9(VAR_15);
   VAR_15 = ((void*)0);
   FUNC_17(&VAR_5);
   goto cleanup;
  }
  VAR_7->connectivity_checked = 1;
 }

 FUNC_18(VAR_7, VAR_10, VAR_11, &VAR_16);
cleanup:
 FUNC_3(&VAR_16);
 FUNC_11(&VAR_17);
 return VAR_15;
}
