
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_update {unsigned int flags; int msg; int old_oid; int new_oid; } ;
struct ref_transaction {scalar_t__ state; scalar_t__ nr; struct ref_update** updates; int alloc; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (struct ref_update**,scalar_t__,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct ref_update*,char const*,char const*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *,struct object_id const*) ;
 int FUNC_4 (char const*) ;

struct ref_update *FUNC_5(
  struct ref_transaction *VAR_3,
  const char *VAR_4, unsigned int VAR_5,
  const struct object_id *VAR_6,
  const struct object_id *VAR_7,
  const char *VAR_8)
{
 struct ref_update *VAR_9;

 if (VAR_3->state != VAR_2)
  FUNC_1("update called for transaction that is not open");

 FUNC_2(VAR_9, VAR_4, VAR_4);
 FUNC_0(VAR_3->updates, VAR_3->nr + 1, VAR_3->alloc);
 VAR_3->updates[VAR_3->nr++] = VAR_9;

 VAR_9->flags = VAR_5;

 if (VAR_5 & VAR_0)
  FUNC_3(&VAR_9->new_oid, VAR_6);
 if (VAR_5 & VAR_1)
  FUNC_3(&VAR_9->old_oid, VAR_7);
 VAR_9->msg = FUNC_4(VAR_8);
 return VAR_9;
}
