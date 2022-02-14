
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct object {int flags; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,char const*) ;
 int VAR_5 ;
 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (struct object*,void*,unsigned long) ;
 int FUNC_5 (struct object_id const*) ;
 struct object* FUNC_6 (int ,struct object_id const*,int,unsigned long,void*,int*) ;
 scalar_t__ FUNC_7 (char const*,struct object_id const*,int*,unsigned long*,void**) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_8(const struct object_id *VAR_7, const char *VAR_8, void *VAR_9)
{
 struct object *VAR_10;
 enum object_type VAR_11;
 unsigned long VAR_12;
 void *VAR_13;
 int VAR_14;

 if (FUNC_7(VAR_8, VAR_7, &VAR_11, &VAR_12, &VAR_13) < 0) {
  VAR_5 |= VAR_0;
  FUNC_2(FUNC_1("%s: object corrupt or missing: %s"),
        FUNC_5(VAR_7), VAR_8);
  return 0;
 }

 if (!VAR_13 && VAR_11 != VAR_2)
  FUNC_0("read_loose_object streamed a non-blob");

 VAR_10 = FUNC_6(VAR_6, VAR_7, VAR_11, VAR_12,
      VAR_13, &VAR_14);

 if (!VAR_10) {
  VAR_5 |= VAR_0;
  FUNC_2(FUNC_1("%s: object could not be parsed: %s"),
        FUNC_5(VAR_7), VAR_8);
  if (!VAR_14)
   FUNC_3(VAR_13);
  return 0;
 }

 VAR_10->flags &= ~(VAR_3 | VAR_4);
 VAR_10->flags |= VAR_1;
 if (FUNC_4(VAR_10, VAR_13, VAR_12))
  VAR_5 |= VAR_0;

 if (!VAR_14)
  FUNC_3(VAR_13);
 return 0;
}
