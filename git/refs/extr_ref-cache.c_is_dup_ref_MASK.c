
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int oid; } ;
struct TYPE_4__ {TYPE_1__ value; } ;
struct ref_entry {int flag; int name; TYPE_2__ u; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int FUNC_4(const struct ref_entry *VAR_1, const struct ref_entry *VAR_2)
{
 if (FUNC_2(VAR_1->name, VAR_2->name))
  return 0;



 if ((VAR_1->flag & VAR_0) || (VAR_2->flag & VAR_0))

  FUNC_0("Reference directory conflict: %s", VAR_1->name);

 if (!FUNC_1(&VAR_1->u.value.oid, &VAR_2->u.value.oid))
  FUNC_0("Duplicated ref, and SHA1s don't match: %s", VAR_1->name);

 FUNC_3("Duplicated ref: %s", VAR_1->name);
 return 1;
}
