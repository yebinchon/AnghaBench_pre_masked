
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ref_iterator {int dummy; } ;
struct TYPE_2__ {int refname; } ;
struct packed_ref_iterator {int flags; int oid; TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct packed_ref_iterator*) ;
 scalar_t__ FUNC_1 (struct ref_iterator*) ;
 int FUNC_2 (int ,int *,int) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ref_iterator *VAR_6)
{
 struct packed_ref_iterator *VAR_7 =
  (struct packed_ref_iterator *)VAR_6;
 int VAR_8;

 while ((VAR_8 = FUNC_0(VAR_7)) == VAR_4) {
  if (VAR_7->flags & VAR_1 &&
      FUNC_3(VAR_7->base.refname) != VAR_5)
   continue;

  if (!(VAR_7->flags & VAR_0) &&
      !FUNC_2(VAR_7->base.refname, &VAR_7->oid,
         VAR_7->flags))
   continue;

  return VAR_4;
 }

 if (FUNC_1(VAR_6) != VAR_2)
  VAR_8 = VAR_3;

 return VAR_8;
}
