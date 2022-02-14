
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct packed_git {int dummy; } ;
struct object_id {int dummy; } ;
struct object {int flags; } ;
typedef int off_t ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 struct object* FUNC_1 (int ,struct object_id const*,int) ;
 int FUNC_2 (struct object_id const*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(const struct object_id *VAR_2,
        enum object_type VAR_3,
        int VAR_4,
        uint32_t VAR_5,
        struct packed_git *VAR_6,
        off_t VAR_7)
{
 struct object *VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (!VAR_8)
  FUNC_0("unable to create object '%s'", FUNC_2(VAR_2));

 VAR_8->flags |= VAR_0;
 return 0;
}
