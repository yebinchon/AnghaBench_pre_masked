
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tree {int * buffer; } ;
struct object_id {int dummy; } ;
struct object_entry {int dummy; } ;
struct object {scalar_t__ type; int flags; scalar_t__ parsed; struct object_id const oid; } ;
struct commit {int dummy; } ;
struct blob {struct object object; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
struct TYPE_2__ {scalar_t__ have_repository; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct object_entry*) ;
 void const* FUNC_4 (struct commit*,int *) ;
 int FUNC_5 (int ,...) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (void*) ;
 scalar_t__ FUNC_7 (struct object*,void*,unsigned long,int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_8 (struct object*,int *,int *) ;
 void* FUNC_9 (struct object_entry*) ;
 int FUNC_10 (struct object_id const*,int ) ;
 struct blob* FUNC_11 (int ,struct object_id const*) ;
 scalar_t__ FUNC_12 (void const*,void*,unsigned long) ;
 int FUNC_13 (int ,struct object_id const*,unsigned long*) ;
 int FUNC_14 (struct object_id const*) ;
 struct object* FUNC_15 (int ,struct object_id const*,int,unsigned long,void*,int*) ;
 int FUNC_16 () ;
 void* FUNC_17 (struct object_id const*,int*,unsigned long*) ;
 int FUNC_18 () ;
 TYPE_1__* VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_19 (int) ;

__attribute__((used)) static void FUNC_20(const void *VAR_10, struct object_entry *VAR_11,
   unsigned long VAR_12, enum object_type VAR_13,
   const struct object_id *VAR_14)
{
 void *VAR_15 = ((void*)0);
 int VAR_16 = 0;

 FUNC_2(VAR_10 || VAR_11);

 if (VAR_7->have_repository) {
  FUNC_16();
  VAR_16 =
   FUNC_10(VAR_14, VAR_1);
  FUNC_18();
 }

 if (VAR_16 && !VAR_10) {
  FUNC_16();
  if (!FUNC_3(VAR_11))
   VAR_16 = 0;
  FUNC_18();
 }
 if (VAR_16) {
  void *VAR_17;
  enum object_type VAR_18;
  unsigned long VAR_19;
  FUNC_16();
  VAR_18 = FUNC_13(VAR_9, VAR_14, &VAR_19);
  if (VAR_18 < 0)
   FUNC_5(FUNC_1("cannot read existing object info %s"), FUNC_14(VAR_14));
  if (VAR_18 != VAR_13 || VAR_19 != VAR_12)
   FUNC_5(FUNC_1("SHA1 COLLISION FOUND WITH %s !"), FUNC_14(VAR_14));
  VAR_17 = FUNC_17(VAR_14, &VAR_18, &VAR_19);
  FUNC_18();
  if (!VAR_10)
   VAR_10 = VAR_15 = FUNC_9(VAR_11);
  if (!VAR_17)
   FUNC_5(FUNC_1("cannot read existing object %s"), FUNC_14(VAR_14));
  if (VAR_12 != VAR_19 || VAR_13 != VAR_18 ||
      FUNC_12(VAR_10, VAR_17, VAR_12) != 0)
   FUNC_5(FUNC_1("SHA1 COLLISION FOUND WITH %s !"), FUNC_14(VAR_14));
  FUNC_6(VAR_17);
 }

 if (VAR_8 || VAR_5) {
  FUNC_16();
  if (VAR_13 == VAR_2) {
   struct blob *VAR_20 = FUNC_11(VAR_9, VAR_14);
   if (VAR_20)
    VAR_20->object.flags |= VAR_0;
   else
    FUNC_5(FUNC_1("invalid blob object %s"), FUNC_14(VAR_14));
   if (VAR_5 &&
       FUNC_7(&VAR_20->object, (void *)VAR_10, VAR_12, &VAR_6))
    FUNC_5(FUNC_1("fsck error in packed object"));
  } else {
   struct object *VAR_21;
   int VAR_22;
   void *VAR_23 = (void *) VAR_10;

   FUNC_2(VAR_10 && "data can only be NULL for large _blobs_");





   VAR_21 = FUNC_15(VAR_9, VAR_14, VAR_13,
        VAR_12, VAR_23,
        &VAR_22);
   if (!VAR_21)
    FUNC_5(FUNC_1("invalid %s"), FUNC_19(VAR_13));
   if (VAR_5 &&
       FUNC_7(VAR_21, VAR_23, VAR_12, &VAR_6))
    FUNC_5(FUNC_1("fsck error in packed object"));
   if (VAR_8 && FUNC_8(VAR_21, ((void*)0), &VAR_6))
    FUNC_5(FUNC_1("Not all child objects of %s are reachable"), FUNC_14(&VAR_21->oid));

   if (VAR_21->type == VAR_4) {
    struct tree *VAR_24 = (struct tree *) VAR_21;
    VAR_24->buffer = ((void*)0);
    VAR_21->parsed = 0;
   }
   if (VAR_21->type == VAR_3) {
    struct commit *VAR_25 = (struct commit *) VAR_21;
    if (FUNC_4(VAR_25, ((void*)0)) != VAR_10)
     FUNC_0("parse_object_buffer transmogrified our buffer");
   }
   VAR_21->flags |= VAR_0;
  }
  FUNC_18();
 }

 FUNC_6(VAR_15);
}
