
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_store {int dummy; } ;
struct ref_iterator {int dummy; } ;
struct files_ref_store {int gitcommondir; int gitdir; } ;


 int VAR_0 ;
 struct files_ref_store* FUNC_0 (struct ref_store*,int ,char*) ;
 struct ref_iterator* FUNC_1 (int ,struct ref_iterator*,struct ref_iterator*,int ,struct files_ref_store*) ;
 struct ref_iterator* FUNC_2 (struct ref_store*,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static struct ref_iterator *FUNC_4(struct ref_store *VAR_2)
{
 struct files_ref_store *VAR_3 =
  FUNC_0(VAR_2, VAR_0,
          "reflog_iterator_begin");

 if (!FUNC_3(VAR_3->gitdir, VAR_3->gitcommondir)) {
  return FUNC_2(VAR_2, VAR_3->gitcommondir);
 } else {
  return FUNC_1(
   0,
   FUNC_2(VAR_2, VAR_3->gitdir),
   FUNC_2(VAR_2, VAR_3->gitcommondir),
   VAR_1, VAR_3);
 }
}
