
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shallow_info {int dummy; } ;
struct repository {int dummy; } ;
struct ref {int dummy; } ;
struct packet_reader {int use_sideband; char* me; } ;
struct oidset {int dummy; } ;
struct oid_array {int dummy; } ;
struct fetch_pack_args {int deepen; int negotiation_tips; int no_dependents; int deepen_not; int deepen_since; int depth; } ;
struct fetch_negotiator {int (* release ) (struct fetch_negotiator*) ;} ;
typedef enum fetch_state { ____Placeholder_fetch_state } fetch_state ;


 int VAR_0 ;





 int VAR_1 ;
 struct oidset VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ref**,int,int ) ;
 int FUNC_1 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 struct ref* FUNC_2 (struct ref const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct fetch_pack_args*,struct ref**) ;
 int FUNC_5 (struct repository*,struct fetch_negotiator*) ;
 int FUNC_6 (struct fetch_pack_args*,struct ref**,struct ref**,int) ;
 int FUNC_7 (struct fetch_negotiator*,int ) ;
 int FUNC_8 (struct fetch_pack_args*,int*,char**,struct ref**,int) ;
 scalar_t__ FUNC_9 (char*,int) ;
 int VAR_7 ;
 int FUNC_10 (struct fetch_negotiator*,struct fetch_pack_args*,struct ref**) ;
 int FUNC_11 (struct fetch_negotiator*,int ) ;
 int FUNC_12 (struct oidset*) ;
 int FUNC_13 (struct packet_reader*,int,int *,int ,int) ;
 int FUNC_14 (struct fetch_negotiator*,struct packet_reader*,struct oidset*) ;
 int FUNC_15 (struct packet_reader*,char*,int) ;
 int FUNC_16 (struct fetch_pack_args*,struct packet_reader*,struct oid_array*,struct shallow_info*) ;
 int FUNC_17 (struct packet_reader*,struct ref**,int) ;
 int VAR_8 ;
 int FUNC_18 (struct fetch_negotiator*,int,struct fetch_pack_args*,struct ref*,struct oidset*,int*,int*,int) ;
 scalar_t__ FUNC_19 (char*,char*,int ) ;
 int FUNC_20 (struct ref**,int ) ;
 int FUNC_21 (struct fetch_negotiator*) ;
 struct repository* VAR_9 ;
 int FUNC_22 (char*,char*,struct repository*) ;
 int FUNC_23 (char*,char*,struct repository*) ;
 int VAR_10 ;

__attribute__((used)) static struct ref *FUNC_24(struct fetch_pack_args *VAR_11,
        int VAR_12[2],
        const struct ref *VAR_13,
        struct ref **VAR_14, int VAR_15,
        struct oid_array *VAR_16,
        struct shallow_info *VAR_17,
        char **VAR_18)
{
 struct repository *VAR_19 = VAR_9;
 struct ref *VAR_20 = FUNC_2(VAR_13);
 enum fetch_state VAR_21 = 132;
 struct oidset VAR_22 = VAR_2;
 struct packet_reader VAR_23;
 int VAR_24 = 0, VAR_25 = 0;
 int VAR_26 = VAR_1;
 struct fetch_negotiator VAR_27;
 FUNC_5(VAR_19, &VAR_27);
 FUNC_13(&VAR_23, VAR_12[0], ((void*)0), 0,
      VAR_3 |
      VAR_4);
 if (FUNC_9("GIT_TEST_SIDEBAND_ALL", 1) &&
     FUNC_19("fetch", "sideband-all", 0)) {
  VAR_23.use_sideband = 1;
  VAR_23.me = "fetch-pack";
 }

 while (VAR_21 != 131) {
  switch (VAR_21) {
  case 132:
   FUNC_20(&VAR_20, VAR_8);
   FUNC_0(VAR_14, VAR_15, VAR_6);


   VAR_5 |= VAR_0;
   VAR_10 = 2;
   if (VAR_11->depth > 0 || VAR_11->deepen_since || VAR_11->deepen_not)
    VAR_11->deepen = 1;


   if (!VAR_11->no_dependents) {
    FUNC_10(&VAR_27, VAR_11, &VAR_20);
    FUNC_6(VAR_11, &VAR_20, VAR_14, VAR_15);
    if (FUNC_4(VAR_11, &VAR_20))
     VAR_21 = 131;
    else
     VAR_21 = 128;

    FUNC_11(&VAR_27, VAR_11->negotiation_tips);
    FUNC_7(&VAR_27,
         VAR_7);
   } else {
    FUNC_6(VAR_11, &VAR_20, VAR_14, VAR_15);
    VAR_21 = 128;
   }
   break;
  case 128:
   if (!VAR_25) {
    VAR_25 = 1;
    FUNC_22("fetch-pack",
          "negotiation_v2",
          VAR_9);
   }
   if (FUNC_18(&VAR_27, VAR_12[1], VAR_11, VAR_20,
            &VAR_22,
            &VAR_26, &VAR_24,
            VAR_23.use_sideband))
    VAR_21 = 130;
   else
    VAR_21 = 129;
   break;
  case 129:

   switch (FUNC_14(&VAR_27, &VAR_23, &VAR_22)) {
   case 2:
    VAR_21 = 130;
    break;
   case 1:
    VAR_24 = 0;

   default:
    VAR_21 = 128;
    break;
   }
   break;
  case 130:
   FUNC_23("fetch-pack",
         "negotiation_v2",
         VAR_9);

   if (FUNC_15(&VAR_23, "shallow-info", 1))
    FUNC_16(VAR_11, &VAR_23, VAR_16, VAR_17);

   if (FUNC_15(&VAR_23, "wanted-refs", 1))
    FUNC_17(&VAR_23, VAR_14, VAR_15);


   FUNC_15(&VAR_23, "packfile", 0);
   if (FUNC_8(VAR_11, VAR_12, VAR_18, VAR_14, VAR_15))
    FUNC_3(FUNC_1("git fetch-pack: fetch failed."));

   VAR_21 = 131;
   break;
  case 131:
   continue;
  }
 }

 VAR_27.release(&VAR_27);
 FUNC_12(&VAR_22);
 return VAR_20;
}
