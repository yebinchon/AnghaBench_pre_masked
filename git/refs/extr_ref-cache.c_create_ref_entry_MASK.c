
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int oid; } ;
struct TYPE_4__ {TYPE_1__ value; } ;
struct ref_entry {int flag; TYPE_2__ u; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (struct ref_entry*,int ,char const*) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct object_id const*) ;

struct ref_entry *FUNC_2(const char *VAR_1,
       const struct object_id *VAR_2, int VAR_3)
{
 struct ref_entry *VAR_4;

 FUNC_0(VAR_4, VAR_0, VAR_1);
 FUNC_1(&VAR_4->u.value.oid, VAR_2);
 VAR_4->flag = VAR_3;
 return VAR_4;
}
