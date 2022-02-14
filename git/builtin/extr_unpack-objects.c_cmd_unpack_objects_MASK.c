
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pack_header {void* hdr_entries; void* hdr_version; void* hdr_signature; } ;
struct object_id {int hash; } ;
struct TYPE_2__ {int rawsz; int (* final_fn ) (int ,int *) ;int (* update_fn ) (int *,scalar_t__,scalar_t__) ;int (* init_fn ) (int *) ;} ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,...) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_4 ;
 int FUNC_4 (int *,char const*) ;
 int FUNC_5 (int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ,int ) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_9 (char const*,char*,char const**) ;
 scalar_t__ FUNC_10 (char const*,char*) ;
 int FUNC_11 (char const*,char*) ;
 int VAR_13 ;
 int FUNC_12 (char const*,char**,int) ;
 int FUNC_13 (char const*,int *,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,scalar_t__,scalar_t__) ;
 int FUNC_16 (int ,int *) ;
 TYPE_1__* VAR_14 ;
 int FUNC_17 () ;
 int VAR_15 ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 () ;
 int FUNC_21 (int,scalar_t__,int) ;

int FUNC_22(int VAR_16, const char **VAR_17, const char *VAR_18)
{
 int VAR_19;
 struct object_id VAR_20;

 VAR_11 = 0;

 FUNC_5(VAR_5, ((void*)0));

 VAR_10 = !FUNC_8(2);

 for (VAR_19 = 1 ; VAR_19 < VAR_16; VAR_19++) {
  const char *VAR_21 = VAR_17[VAR_19];

  if (*VAR_21 == '-') {
   if (!FUNC_11(VAR_21, "-n")) {
    VAR_3 = 1;
    continue;
   }
   if (!FUNC_11(VAR_21, "-q")) {
    VAR_10 = 1;
    continue;
   }
   if (!FUNC_11(VAR_21, "-r")) {
    VAR_12 = 1;
    continue;
   }
   if (!FUNC_11(VAR_21, "--strict")) {
    VAR_13 = 1;
    continue;
   }
   if (FUNC_9(VAR_21, "--strict=", &VAR_21)) {
    VAR_13 = 1;
    FUNC_4(&VAR_4, VAR_21);
    continue;
   }
   if (FUNC_10(VAR_21, "--pack_header=")) {
    struct pack_header *VAR_22;
    char *VAR_23;

    VAR_22 = (struct pack_header *)VAR_1;
    VAR_22->hdr_signature = FUNC_7(VAR_0);
    VAR_22->hdr_version = FUNC_7(FUNC_12(VAR_21 + 14, &VAR_23, 10));
    if (*VAR_23 != ',')
     FUNC_1("bad %s", VAR_21);
    VAR_22->hdr_entries = FUNC_7(FUNC_12(VAR_23 + 1, &VAR_23, 10));
    if (*VAR_23)
     FUNC_1("bad %s", VAR_21);
    VAR_7 = sizeof(*VAR_22);
    continue;
   }
   if (FUNC_9(VAR_21, "--max-input-size=", &VAR_21)) {
    VAR_8 = FUNC_13(VAR_21, ((void*)0), 10);
    continue;
   }
   FUNC_18(VAR_15);
  }


  FUNC_18(VAR_15);
 }
 VAR_14->init_fn(&VAR_2);
 FUNC_17();
 VAR_14->update_fn(&VAR_2, VAR_1, VAR_9);
 VAR_14->final_fn(VAR_20.hash, &VAR_2);
 if (VAR_13) {
  FUNC_20();
  if (FUNC_3(&VAR_4))
   FUNC_1(FUNC_0("fsck error in pack objects"));
 }
 if (!FUNC_6(FUNC_2(VAR_14->rawsz), VAR_20.hash))
  FUNC_1("final sha1 did not match");
 FUNC_19(VAR_14->rawsz);


 while (VAR_7) {
  int VAR_24 = FUNC_21(1, VAR_1 + VAR_9, VAR_7);
  if (VAR_24 <= 0)
   break;
  VAR_7 -= VAR_24;
  VAR_9 += VAR_24;
 }


 return VAR_6;
}
