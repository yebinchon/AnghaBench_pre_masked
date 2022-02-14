
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct object {int flags; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct object*,void*,unsigned long) ;
 int FUNC_3 (struct object_id const*) ;
 struct object* FUNC_4 (int ,struct object_id const*,int,unsigned long,void*,int*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_5(const struct object_id *VAR_6, enum object_type VAR_7,
      unsigned long VAR_8, void *VAR_9, int *VAR_10)
{




 struct object *VAR_11;
 VAR_11 = FUNC_4(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
      VAR_10);
 if (!VAR_11) {
  VAR_4 |= VAR_0;
  return FUNC_1(FUNC_0("%s: object corrupt or missing"),
        FUNC_3(VAR_6));
 }
 VAR_11->flags &= ~(VAR_2 | VAR_3);
 VAR_11->flags |= VAR_1;
 return FUNC_2(VAR_11, VAR_9, VAR_8);
}
