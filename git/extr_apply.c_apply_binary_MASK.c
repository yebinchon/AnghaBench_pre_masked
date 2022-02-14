
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct patch {char* old_name; char* new_name; char* old_oid_prefix; char* new_oid_prefix; } ;
struct object_id {int dummy; } ;
struct image {char* buf; unsigned long len; } ;
struct apply_state {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
struct TYPE_2__ {unsigned int hexsz; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct apply_state*,struct image*,struct patch*) ;
 int VAR_0 ;
 int FUNC_2 (struct image*) ;
 int FUNC_3 (int ,char const*,...) ;
 scalar_t__ FUNC_4 (char*,struct object_id*) ;
 scalar_t__ FUNC_5 (struct object_id*) ;
 int FUNC_6 (char*,unsigned long,int ,struct object_id*) ;
 scalar_t__ FUNC_7 (struct object_id*) ;
 char* FUNC_8 (struct object_id*) ;
 char* FUNC_9 (struct object_id*,int*,unsigned long*) ;
 scalar_t__ FUNC_10 (char*,char*) ;
 unsigned int const FUNC_11 (char*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_12(struct apply_state *VAR_2,
   struct image *VAR_3,
   struct patch *VAR_4)
{
 const char *VAR_5 = VAR_4->old_name ? VAR_4->old_name : VAR_4->new_name;
 struct object_id VAR_6;
 const unsigned VAR_7 = VAR_1->hexsz;





 if (FUNC_11(VAR_4->old_oid_prefix) != VAR_7 ||
     FUNC_11(VAR_4->new_oid_prefix) != VAR_7 ||
     FUNC_4(VAR_4->old_oid_prefix, &VAR_6) ||
     FUNC_4(VAR_4->new_oid_prefix, &VAR_6))
  return FUNC_3(FUNC_0("cannot apply binary patch to '%s' "
          "without full index line"), VAR_5);

 if (VAR_4->old_name) {




  FUNC_6(VAR_3->buf, VAR_3->len, VAR_0, &VAR_6);
  if (FUNC_10(FUNC_8(&VAR_6), VAR_4->old_oid_prefix))
   return FUNC_3(FUNC_0("the patch applies to '%s' (%s), "
           "which does not match the "
           "current contents."),
         VAR_5, FUNC_8(&VAR_6));
 }
 else {

  if (VAR_3->len)
   return FUNC_3(FUNC_0("the patch applies to an empty "
           "'%s' but it is not empty"), VAR_5);
 }

 FUNC_4(VAR_4->new_oid_prefix, &VAR_6);
 if (FUNC_7(&VAR_6)) {
  FUNC_2(VAR_3);
  return 0;
 }

 if (FUNC_5(&VAR_6)) {

  enum object_type VAR_8;
  unsigned long VAR_9;
  char *VAR_10;

  VAR_10 = FUNC_9(&VAR_6, &VAR_8, &VAR_9);
  if (!VAR_10)
   return FUNC_3(FUNC_0("the necessary postimage %s for "
           "'%s' cannot be read"),
         VAR_4->new_oid_prefix, VAR_5);
  FUNC_2(VAR_3);
  VAR_3->buf = VAR_10;
  VAR_3->len = VAR_9;
 } else {





  if (FUNC_1(VAR_2, VAR_3, VAR_4))
   return FUNC_3(FUNC_0("binary patch does not apply to '%s'"),
         VAR_5);


  FUNC_6(VAR_3->buf, VAR_3->len, VAR_0, &VAR_6);
  if (FUNC_10(FUNC_8(&VAR_6), VAR_4->new_oid_prefix))
   return FUNC_3(FUNC_0("binary patch to '%s' creates incorrect result (expecting %s, got %s)"),
    VAR_5, VAR_4->new_oid_prefix, FUNC_8(&VAR_6));
 }

 return 0;
}
