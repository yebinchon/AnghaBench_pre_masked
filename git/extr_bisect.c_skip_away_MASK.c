
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct commit_list {TYPE_2__* item; struct commit_list* next; } ;
struct TYPE_3__ {int oid; } ;
struct TYPE_4__ {TYPE_1__ object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static struct commit_list *FUNC_3(struct commit_list *VAR_2, int VAR_3)
{
 struct commit_list *VAR_4, *VAR_5;
 int VAR_6, VAR_7, VAR_8;

 VAR_6 = FUNC_0(VAR_3);
 VAR_7 = (VAR_3 * VAR_6 / VAR_0) * FUNC_2(VAR_6) / FUNC_2(VAR_0);

 VAR_4 = VAR_2;
 VAR_5 = ((void*)0);

 for (VAR_8 = 0; VAR_4; VAR_4 = VAR_4->next, VAR_8++) {
  if (VAR_8 == VAR_7) {
   if (!FUNC_1(&VAR_4->item->object.oid, VAR_1))
    return VAR_4;
   if (VAR_5)
    return VAR_5;
   return VAR_2;
  }
  VAR_5 = VAR_4;
 }

 return VAR_2;
}
