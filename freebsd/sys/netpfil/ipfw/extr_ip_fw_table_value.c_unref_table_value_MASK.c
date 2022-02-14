
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct table_value {scalar_t__ refcnt; } ;
struct table_val_link {int no; } ;
struct namedobj_instance {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct table_val_link*,int ) ;
 int FUNC_2 (struct namedobj_instance*,int *) ;
 int FUNC_3 (struct namedobj_instance*,size_t) ;
 scalar_t__ FUNC_4 (struct namedobj_instance*,size_t) ;

__attribute__((used)) static void
FUNC_5(struct namedobj_instance *VAR_1, struct table_value *VAR_2,
    uint32_t VAR_3)
{
 struct table_val_link *VAR_4;

 FUNC_0(VAR_2[VAR_3].refcnt > 0, ("Refcount is 0 on kidx %d", VAR_3));
 if (--VAR_2[VAR_3].refcnt > 0)
  return;


 VAR_4 = (struct table_val_link *)FUNC_4(VAR_1, VAR_3);
 FUNC_0(VAR_4 != ((void*)0), ("lookup on value kidx %d failed", VAR_3));
 FUNC_2(VAR_1, &VAR_4->no);
 FUNC_3(VAR_1, VAR_3);
 FUNC_1(VAR_4, VAR_0);
}
