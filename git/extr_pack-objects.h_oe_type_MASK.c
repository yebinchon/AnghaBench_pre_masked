
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_entry {int type_; scalar_t__ type_valid; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int VAR_0 ;

__attribute__((used)) static inline enum object_type FUNC_0(const struct object_entry *VAR_1)
{
 return VAR_1->type_valid ? VAR_1->type_ : VAR_0;
}
