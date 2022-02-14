
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct object_id {int dummy; } ;
struct object_entry {int dummy; } ;
struct TYPE_2__ {int to_pack; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,struct object_entry*) ;
 int FUNC_2 (struct object_id const*) ;
 struct object_entry* FUNC_3 (int ,struct object_id const*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static uint32_t FUNC_4(const struct object_id *VAR_1)
{
 struct object_entry *VAR_2 = FUNC_3(VAR_0.to_pack, VAR_1);

 if (!VAR_2) {
  FUNC_0("Failed to write bitmap index. Packfile doesn't have full closure "
   "(object %s is missing)", FUNC_2(VAR_1));
 }

 return FUNC_1(VAR_0.to_pack, VAR_2);
}
