
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rev_info {int diffopt; } ;
struct object_id {int dummy; } ;
struct object_array_entry {TYPE_1__* item; } ;
struct TYPE_2__ {int flags; struct object_id oid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct object_id const*,struct object_id const*,char*,int *) ;
 int FUNC_1 (struct rev_info*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct rev_info *VAR_2,
        int VAR_3, const char **VAR_4,
        struct object_array_entry *VAR_5,
        struct object_array_entry *VAR_6)
{
 const struct object_id *(VAR_7[2]);
 int VAR_8 = 0;

 if (VAR_3 > 1)
  FUNC_2(VAR_1);





 if (VAR_6->item->flags & VAR_0)
  VAR_8 = 1;
 VAR_7[VAR_8] = &VAR_5->item->oid;
 VAR_7[1 - VAR_8] = &VAR_6->item->oid;
 FUNC_0(VAR_7[0], VAR_7[1], "", &VAR_2->diffopt);
 FUNC_1(VAR_2);
 return 0;
}
