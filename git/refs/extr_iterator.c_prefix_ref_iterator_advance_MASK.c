
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ref_iterator {scalar_t__ refname; int flags; int oid; scalar_t__ ordered; } ;
struct TYPE_2__ {scalar_t__ refname; int flags; int oid; } ;
struct prefix_ref_iterator {scalar_t__ trim; struct ref_iterator* iter0; TYPE_1__ base; int prefix; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct ref_iterator*) ;
 int FUNC_3 (struct ref_iterator*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct ref_iterator *VAR_3)
{
 struct prefix_ref_iterator *VAR_4 =
  (struct prefix_ref_iterator *)VAR_3;
 int VAR_5;

 while ((VAR_5 = FUNC_3(VAR_4->iter0)) == VAR_2) {
  int VAR_6 = FUNC_1(VAR_4->iter0->refname, VAR_4->prefix);

  if (VAR_6 < 0)
   continue;

  if (VAR_6 > 0) {





   if (VAR_4->iter0->ordered) {
    VAR_5 = FUNC_2(VAR_4->iter0);
    break;
   } else {
    continue;
   }
  }

  if (VAR_4->trim) {
   if (FUNC_4(VAR_4->iter0->refname) <= VAR_4->trim)
    FUNC_0("attempt to trim too many characters");
   VAR_4->base.refname = VAR_4->iter0->refname + VAR_4->trim;
  } else {
   VAR_4->base.refname = VAR_4->iter0->refname;
  }

  VAR_4->base.oid = VAR_4->iter0->oid;
  VAR_4->base.flags = VAR_4->iter0->flags;
  return VAR_2;
 }

 VAR_4->iter0 = ((void*)0);
 if (FUNC_2(VAR_3) != VAR_0)
  return VAR_1;
 return VAR_5;
}
