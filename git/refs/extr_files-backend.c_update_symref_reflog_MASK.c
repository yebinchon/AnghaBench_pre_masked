
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct ref_lock {int old_oid; } ;
struct object_id {int dummy; } ;
struct files_ref_store {int base; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (struct files_ref_store*,char const*,int *,struct object_id*,char const*,int ,struct strbuf*) ;
 int FUNC_2 (int *,char const*,int ,struct object_id*,int *) ;
 int FUNC_3 (struct strbuf*) ;

__attribute__((used)) static void FUNC_4(struct files_ref_store *VAR_2,
     struct ref_lock *VAR_3, const char *VAR_4,
     const char *VAR_5, const char *VAR_6)
{
 struct strbuf VAR_7 = VAR_1;
 struct object_id VAR_8;
 if (VAR_6 &&
     !FUNC_2(&VAR_2->base, VAR_5,
    VAR_0, &VAR_8, ((void*)0)) &&
     FUNC_1(VAR_2, VAR_4, &VAR_3->old_oid,
    &VAR_8, VAR_6, 0, &VAR_7)) {
  FUNC_0("%s", VAR_7.buf);
  FUNC_3(&VAR_7);
 }
}
