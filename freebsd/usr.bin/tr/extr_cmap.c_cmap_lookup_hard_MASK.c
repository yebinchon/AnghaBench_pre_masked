
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ wint_t ;
struct cmap {scalar_t__ cm_def; TYPE_1__* cm_root; } ;
struct TYPE_3__ {scalar_t__ cmn_from; scalar_t__ cmn_to; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_1__*,scalar_t__) ;

wint_t
FUNC_1(struct cmap *VAR_1, wint_t VAR_2)
{

 if (VAR_1->cm_root != ((void*)0)) {
  VAR_1->cm_root = FUNC_0(VAR_1->cm_root, VAR_2);
  if (VAR_1->cm_root->cmn_from == VAR_2)
   return (VAR_1->cm_root->cmn_to);
 }
 return (VAR_1->cm_def == VAR_0 ? VAR_2 : VAR_1->cm_def);
}
