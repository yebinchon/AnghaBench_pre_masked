
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ref_iterator {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct packed_ref_iterator {int oid; TYPE_1__ base; int peeled; } ;
struct object_id {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct object_id*,int *) ;
 int FUNC_2 (int *,struct object_id*) ;

__attribute__((used)) static int FUNC_3(struct ref_iterator *VAR_3,
       struct object_id *VAR_4)
{
 struct packed_ref_iterator *VAR_5 =
  (struct packed_ref_iterator *)VAR_3;

 if ((VAR_5->base.flags & VAR_2)) {
  FUNC_1(VAR_4, &VAR_5->peeled);
  return FUNC_0(&VAR_5->peeled) ? -1 : 0;
 } else if ((VAR_5->base.flags & (VAR_0 | VAR_1))) {
  return -1;
 } else {
  return !!FUNC_2(&VAR_5->oid, VAR_4);
 }
}
