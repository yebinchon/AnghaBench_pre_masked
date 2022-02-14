
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct secasvar {int flags; TYPE_2__* lft_s; TYPE_2__* lft_h; TYPE_2__* replay; TYPE_2__* key_enc; TYPE_2__* key_auth; TYPE_1__* tdb_xform; TYPE_2__* natt; } ;
struct TYPE_6__ {struct TYPE_6__* bitmap; struct TYPE_6__* key_data; } ;
struct TYPE_5__ {int (* xf_zeroize ) (struct secasvar*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (struct secasvar*) ;

__attribute__((used)) static void
FUNC_4(struct secasvar *VAR_2)
{

 if (VAR_2->natt != ((void*)0)) {
  FUNC_2(VAR_2->natt, VAR_0);
  VAR_2->natt = ((void*)0);
 }
 if (VAR_2->flags & VAR_1)
  return;




 if (VAR_2->tdb_xform != ((void*)0)) {
  VAR_2->tdb_xform->xf_zeroize(VAR_2);
  VAR_2->tdb_xform = ((void*)0);
 } else {
  if (VAR_2->key_auth != ((void*)0))
   FUNC_1(VAR_2->key_auth->key_data, FUNC_0(VAR_2->key_auth));
  if (VAR_2->key_enc != ((void*)0))
   FUNC_1(VAR_2->key_enc->key_data, FUNC_0(VAR_2->key_enc));
 }
 if (VAR_2->key_auth != ((void*)0)) {
  if (VAR_2->key_auth->key_data != ((void*)0))
   FUNC_2(VAR_2->key_auth->key_data, VAR_0);
  FUNC_2(VAR_2->key_auth, VAR_0);
  VAR_2->key_auth = ((void*)0);
 }
 if (VAR_2->key_enc != ((void*)0)) {
  if (VAR_2->key_enc->key_data != ((void*)0))
   FUNC_2(VAR_2->key_enc->key_data, VAR_0);
  FUNC_2(VAR_2->key_enc, VAR_0);
  VAR_2->key_enc = ((void*)0);
 }
 if (VAR_2->replay != ((void*)0)) {
  if (VAR_2->replay->bitmap != ((void*)0))
   FUNC_2(VAR_2->replay->bitmap, VAR_0);
  FUNC_2(VAR_2->replay, VAR_0);
  VAR_2->replay = ((void*)0);
 }
 if (VAR_2->lft_h != ((void*)0)) {
  FUNC_2(VAR_2->lft_h, VAR_0);
  VAR_2->lft_h = ((void*)0);
 }
 if (VAR_2->lft_s != ((void*)0)) {
  FUNC_2(VAR_2->lft_s, VAR_0);
  VAR_2->lft_s = ((void*)0);
 }
}
