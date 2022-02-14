
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct TYPE_2__ {scalar_t__ sizep; int typep; } ;
struct expand_data {scalar_t__ type; unsigned long size; TYPE_1__ info; int rest; struct object_id oid; } ;
struct batch_options {char cmdmode; scalar_t__ buffer_output; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int FUNC_0 (char*,char) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct batch_options*,void*,unsigned long) ;
 int FUNC_3 (char*,int ,...) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int,struct object_id const*,char**,unsigned long*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (struct object_id const*) ;
 void* FUNC_8 (struct object_id const*,int*,unsigned long*) ;
 int VAR_1 ;
 int FUNC_9 (struct object_id const*) ;
 int FUNC_10 (int ,int ,int,struct object_id const*,int,char**,unsigned long*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_11(struct batch_options *VAR_3, struct expand_data *VAR_4)
{
 const struct object_id *VAR_5 = &VAR_4->oid;

 FUNC_1(VAR_4->info.typep);

 if (VAR_4->type == VAR_0) {
  if (VAR_3->buffer_output)
   FUNC_4(VAR_1);
  if (VAR_3->cmdmode) {
   char *VAR_6;
   unsigned long VAR_7;

   if (!VAR_4->rest)
    FUNC_3("missing path for '%s'", FUNC_7(VAR_5));

   if (VAR_3->cmdmode == 'w') {
    if (FUNC_5(VAR_4->rest, 0100644, VAR_5,
        &VAR_6, &VAR_7))
     FUNC_3("could not convert '%s' %s",
         FUNC_7(VAR_5), VAR_4->rest);
   } else if (VAR_3->cmdmode == 'c') {
    enum object_type VAR_8;
    if (!FUNC_10(VAR_2,
           VAR_4->rest, 0100644, VAR_5,
           1, &VAR_6, &VAR_7))
     VAR_6 = FUNC_8(VAR_5,
            &VAR_8,
            &VAR_7);
    if (!VAR_6)
     FUNC_3("could not convert '%s' %s",
         FUNC_7(VAR_5), VAR_4->rest);
   } else
    FUNC_0("invalid cmdmode: %c", VAR_3->cmdmode);
   FUNC_2(VAR_3, VAR_6, VAR_7);
   FUNC_6(VAR_6);
  } else {
   FUNC_9(VAR_5);
  }
 }
 else {
  enum object_type VAR_9;
  unsigned long VAR_10;
  void *VAR_11;

  VAR_11 = FUNC_8(VAR_5, &VAR_9, &VAR_10);
  if (!VAR_11)
   FUNC_3("object %s disappeared", FUNC_7(VAR_5));
  if (VAR_9 != VAR_4->type)
   FUNC_3("object %s changed type!?", FUNC_7(VAR_5));
  if (VAR_4->info.sizep && VAR_10 != VAR_4->size)
   FUNC_3("object %s changed size!?", FUNC_7(VAR_5));

  FUNC_2(VAR_3, VAR_11, VAR_10);
  FUNC_6(VAR_11);
 }
}
