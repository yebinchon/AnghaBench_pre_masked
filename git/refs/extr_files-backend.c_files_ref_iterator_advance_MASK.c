
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ref_iterator {int dummy; } ;
struct TYPE_3__ {int flags; int oid; int refname; } ;
struct files_ref_iterator {int flags; TYPE_2__* iter0; TYPE_1__ base; } ;
struct TYPE_4__ {int flags; int oid; int refname; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct ref_iterator*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ref_iterator *VAR_6)
{
 struct files_ref_iterator *VAR_7 =
  (struct files_ref_iterator *)VAR_6;
 int VAR_8;

 while ((VAR_8 = FUNC_1(VAR_7->iter0)) == VAR_4) {
  if (VAR_7->flags & VAR_1 &&
      FUNC_3(VAR_7->iter0->refname) != VAR_5)
   continue;

  if (!(VAR_7->flags & VAR_0) &&
      !FUNC_2(VAR_7->iter0->refname,
         VAR_7->iter0->oid,
         VAR_7->iter0->flags))
   continue;

  VAR_7->base.refname = VAR_7->iter0->refname;
  VAR_7->base.oid = VAR_7->iter0->oid;
  VAR_7->base.flags = VAR_7->iter0->flags;
  return VAR_4;
 }

 VAR_7->iter0 = ((void*)0);
 if (FUNC_0(VAR_6) != VAR_2)
  VAR_8 = VAR_3;

 return VAR_8;
}
