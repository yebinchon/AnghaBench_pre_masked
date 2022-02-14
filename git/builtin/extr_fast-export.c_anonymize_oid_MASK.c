
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct hashmap {int dummy; } ;
struct TYPE_2__ {size_t rawsz; } ;


 struct object_id const* FUNC_0 (struct hashmap*,int ,struct object_id const*,size_t*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static const struct object_id *FUNC_1(const struct object_id *VAR_2)
{
 static struct hashmap VAR_3;
 size_t VAR_4 = VAR_1->rawsz;
 return FUNC_0(&VAR_3, VAR_0, VAR_2, &VAR_4);
}
