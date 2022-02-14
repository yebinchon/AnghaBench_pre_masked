
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct TYPE_3__ {int oid; } ;
struct object_entry {scalar_t__ type; TYPE_1__ idx; } ;
struct TYPE_4__ {int buf; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 struct object_entry* FUNC_0 (struct object_entry*,struct object_id*) ;
 int FUNC_1 (char*,int ) ;
 struct object_entry* FUNC_2 (int ) ;
 struct object_entry* FUNC_3 (struct object_id*) ;
 int FUNC_4 (struct object_id*,int *) ;
 int FUNC_5 (char const**) ;
 scalar_t__ FUNC_6 (char const*,struct object_id*,char const**) ;

__attribute__((used)) static struct object_entry *FUNC_7(const char **VAR_2)
{
 struct object_id VAR_3;
 struct object_entry *VAR_4;

 if (**VAR_2 == ':') {
  VAR_4 = FUNC_2(FUNC_5(VAR_2));
  if (!VAR_4)
   FUNC_1("Unknown mark: %s", VAR_1.buf);
  FUNC_4(&VAR_3, &VAR_4->idx.oid);
 } else {
  if (FUNC_6(*VAR_2, &VAR_3, VAR_2))
   FUNC_1("Invalid dataref: %s", VAR_1.buf);
  VAR_4 = FUNC_3(&VAR_3);
  if (*(*VAR_2)++ != ' ')
   FUNC_1("Missing space after tree-ish: %s", VAR_1.buf);
 }

 while (!VAR_4 || VAR_4->type != VAR_0)
  VAR_4 = FUNC_0(VAR_4, &VAR_3);
 return VAR_4;
}
