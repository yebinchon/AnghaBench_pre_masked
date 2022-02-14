
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_entry {int type_valid; unsigned int type_; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_1(struct object_entry *VAR_2,
          enum object_type VAR_3)
{
 if (VAR_3 >= VAR_0)
  FUNC_0("OBJ_ANY cannot be set in pack-objects code");

 VAR_2->type_valid = VAR_3 >= VAR_1;
 VAR_2->type_ = (unsigned)VAR_3;
}
