
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ref_iterator {int flags; int oid; int refname; } ;
struct TYPE_2__ {int flags; int oid; int refname; } ;
struct merge_ref_iterator {int (* select ) (struct ref_iterator*,struct ref_iterator*,int ) ;struct ref_iterator** current; TYPE_1__ base; struct ref_iterator* iter0; struct ref_iterator* iter1; int cb_data; } ;
typedef enum iterator_selection { ____Placeholder_iterator_selection } iterator_selection ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ref_iterator*) ;
 int FUNC_1 (struct ref_iterator*) ;
 int FUNC_2 (struct ref_iterator*,struct ref_iterator*,int ) ;

__attribute__((used)) static int FUNC_3(struct ref_iterator *VAR_7)
{
 struct merge_ref_iterator *VAR_8 =
  (struct merge_ref_iterator *)VAR_7;
 int VAR_9;

 if (!VAR_8->current) {

  if ((VAR_9 = FUNC_1(VAR_8->iter0)) != VAR_2) {
   VAR_8->iter0 = ((void*)0);
   if (VAR_9 == VAR_1)
    goto error;
  }
  if ((VAR_9 = FUNC_1(VAR_8->iter1)) != VAR_2) {
   VAR_8->iter1 = ((void*)0);
   if (VAR_9 == VAR_1)
    goto error;
  }
 } else {




  if ((VAR_9 = FUNC_1(*VAR_8->current)) != VAR_2) {
   *VAR_8->current = ((void*)0);
   if (VAR_9 == VAR_1)
    goto error;
  }
 }


 while (1) {
  struct ref_iterator **VAR_10;
  enum iterator_selection VAR_11 =
   VAR_8->select(VAR_8->iter0, VAR_8->iter1, VAR_8->cb_data);

  if (VAR_11 == VAR_3) {
   return FUNC_0(VAR_7);
  } else if (VAR_11 == VAR_4) {
   FUNC_0(VAR_7);
   return VAR_1;
  }

  if ((VAR_11 & VAR_0) == 0) {
   VAR_8->current = &VAR_8->iter0;
   VAR_10 = &VAR_8->iter1;
  } else {
   VAR_8->current = &VAR_8->iter1;
   VAR_10 = &VAR_8->iter0;
  }

  if (VAR_11 & VAR_5) {
   if ((VAR_9 = FUNC_1(*VAR_10)) != VAR_2) {
    *VAR_10 = ((void*)0);
    if (VAR_9 == VAR_1)
     goto error;
   }
  }

  if (VAR_11 & VAR_6) {
   VAR_8->base.refname = (*VAR_8->current)->refname;
   VAR_8->base.oid = (*VAR_8->current)->oid;
   VAR_8->base.flags = (*VAR_8->current)->flags;
   return VAR_2;
  }
 }

error:
 FUNC_0(VAR_7);
 return VAR_1;
}
