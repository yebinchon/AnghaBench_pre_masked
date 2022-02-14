
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct TYPE_3__ {int oid; } ;
struct object_entry {TYPE_1__ idx; } ;
struct TYPE_4__ {int buf; } ;


 int FUNC_0 (struct object_entry*,struct object_id*) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (char*,int ) ;
 struct object_entry* FUNC_2 (int ) ;
 struct object_entry* FUNC_3 (struct object_id*) ;
 int FUNC_4 (struct object_id*,int *) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*,struct object_id*,char const**) ;

__attribute__((used)) static void FUNC_7(const char *VAR_1)
{
 struct object_entry *VAR_2;
 struct object_id VAR_3;


 if (*VAR_1 == ':') {
  VAR_2 = FUNC_2(FUNC_5(VAR_1));
  if (!VAR_2)
   FUNC_1("Unknown mark: %s", VAR_0.buf);
  FUNC_4(&VAR_3, &VAR_2->idx.oid);
 } else {
  if (FUNC_6(VAR_1, &VAR_3, &VAR_1))
   FUNC_1("Invalid dataref: %s", VAR_0.buf);
  if (*VAR_1)
   FUNC_1("Garbage after SHA1: %s", VAR_0.buf);
  VAR_2 = FUNC_3(&VAR_3);
 }

 FUNC_0(VAR_2, &VAR_3);
}
