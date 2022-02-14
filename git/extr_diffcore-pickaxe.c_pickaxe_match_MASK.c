
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct userdiff_driver {int dummy; } ;
struct TYPE_12__ {int text; scalar_t__ allow_textconv; } ;
struct diff_options {int pickaxe_opts; int repo; TYPE_1__ flags; int * pickaxe; scalar_t__ objfind; } ;
struct diff_filepair {TYPE_7__* two; TYPE_7__* one; } ;
typedef int regex_t ;
typedef int (* pickaxe_fn ) (TYPE_2__*,TYPE_2__*,struct diff_options*,int *,int ) ;
struct TYPE_13__ {int ptr; void* size; } ;
typedef TYPE_2__ mmfile_t ;
typedef int kwset_t ;
struct TYPE_14__ {int oid; } ;


 scalar_t__ FUNC_0 (TYPE_7__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,TYPE_7__*) ;
 int FUNC_2 (TYPE_7__*) ;
 scalar_t__ FUNC_3 (struct diff_filepair*) ;
 void* FUNC_4 (int ,struct userdiff_driver*,TYPE_7__*,int *) ;
 int FUNC_5 (int ) ;
 struct userdiff_driver* FUNC_6 (int ,TYPE_7__*) ;
 scalar_t__ FUNC_7 (scalar_t__,int *) ;

__attribute__((used)) static int FUNC_8(struct diff_filepair *VAR_1, struct diff_options *VAR_2,
    regex_t *VAR_3, kwset_t VAR_4, pickaxe_fn VAR_5)
{
 struct userdiff_driver *VAR_6 = ((void*)0);
 struct userdiff_driver *VAR_7 = ((void*)0);
 mmfile_t VAR_8, VAR_9;
 int VAR_10;


 if (!FUNC_0(VAR_1->one) && !FUNC_0(VAR_1->two))
  return 0;

 if (VAR_2->objfind) {
  return (FUNC_0(VAR_1->one) &&
    FUNC_7(VAR_2->objfind, &VAR_1->one->oid)) ||
   (FUNC_0(VAR_1->two) &&
    FUNC_7(VAR_2->objfind, &VAR_1->two->oid));
 }

 if (!VAR_2->pickaxe[0])
  return 0;

 if (VAR_2->flags.allow_textconv) {
  VAR_6 = FUNC_6(VAR_2->repo, VAR_1->one);
  VAR_7 = FUNC_6(VAR_2->repo, VAR_1->two);
 }
 if (VAR_6 == VAR_7 && FUNC_3(VAR_1))
  return 0;

 if ((VAR_2->pickaxe_opts & VAR_0) &&
     !VAR_2->flags.text &&
     ((!VAR_6 && FUNC_1(VAR_2->repo, VAR_1->one)) ||
      (!VAR_7 && FUNC_1(VAR_2->repo, VAR_1->two))))
  return 0;

 VAR_8 = FUNC_4(VAR_2->repo, VAR_6, VAR_1->one, &VAR_8);
 VAR_9 = FUNC_4(VAR_2->repo, VAR_7, VAR_1->two, &VAR_9);

 VAR_10 = VAR_5(FUNC_0(VAR_1->one) ? &VAR_8 : ((void*)0),
   FUNC_0(VAR_1->two) ? &VAR_9 : ((void*)0),
   VAR_2, VAR_3, VAR_4);

 if (VAR_6)
  FUNC_5(VAR_8);
 if (VAR_7)
  FUNC_5(VAR_9);
 FUNC_2(VAR_1->one);
 FUNC_2(VAR_1->two);

 return VAR_10;
}
