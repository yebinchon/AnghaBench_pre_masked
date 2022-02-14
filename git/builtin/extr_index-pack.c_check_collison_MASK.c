
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int oid; } ;
struct object_entry {unsigned long size; scalar_t__ type; TYPE_1__ idx; } ;
struct compare_data {int buf; int st; struct object_entry* entry; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
typedef int data ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 unsigned long VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct compare_data*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int*,unsigned long*,int *) ;
 int FUNC_7 (struct object_entry*,int ,struct compare_data*) ;

__attribute__((used)) static int FUNC_8(struct object_entry *VAR_3)
{
 struct compare_data VAR_4;
 enum object_type VAR_5;
 unsigned long VAR_6;

 if (VAR_3->size <= VAR_1 || VAR_3->type != VAR_0)
  return -1;

 FUNC_4(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.entry = VAR_3;
 VAR_4.st = FUNC_6(&VAR_3->idx.oid, &VAR_5, &VAR_6, ((void*)0));
 if (!VAR_4.st)
  return -1;
 if (VAR_6 != VAR_3->size || VAR_5 != VAR_3->type)
  FUNC_2(FUNC_0("SHA1 COLLISION FOUND WITH %s !"),
      FUNC_5(&VAR_3->idx.oid));
 FUNC_7(VAR_3, VAR_2, &VAR_4);
 FUNC_1(VAR_4.st);
 FUNC_3(VAR_4.buf);
 return 0;
}
