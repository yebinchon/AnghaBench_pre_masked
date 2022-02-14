
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct TYPE_3__ {int oid; } ;
struct object_entry {TYPE_1__ idx; } ;
struct TYPE_4__ {scalar_t__ next_free; scalar_t__ end; } ;


 int FUNC_0 (int ) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,struct object_id*) ;

__attribute__((used)) static struct object_entry *FUNC_2(struct object_id *VAR_2)
{
 struct object_entry *VAR_3;

 if (VAR_0->next_free == VAR_0->end)
  FUNC_0(VAR_1);

 VAR_3 = VAR_0->next_free++;
 FUNC_1(&VAR_3->idx.oid, VAR_2);
 return VAR_3;
}
