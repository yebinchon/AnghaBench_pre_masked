
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct ref_store {int dummy; } ;
struct ref_iterator {int dummy; } ;
struct files_reflog_iterator {struct ref_store* ref_store; struct dir_iterator* dir_iterator; struct ref_iterator base; } ;
struct dir_iterator {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct ref_iterator*,int *,int ) ;
 struct dir_iterator* FUNC_1 (int ,int ) ;
 struct ref_iterator* FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (struct strbuf*,char*,char const*) ;
 int FUNC_4 (struct strbuf*) ;
 struct files_reflog_iterator* FUNC_5 (int,int) ;

__attribute__((used)) static struct ref_iterator *FUNC_6(struct ref_store *VAR_2,
        const char *VAR_3)
{
 struct dir_iterator *VAR_4;
 struct files_reflog_iterator *VAR_5;
 struct ref_iterator *VAR_6;
 struct strbuf VAR_7 = VAR_0;

 FUNC_3(&VAR_7, "%s/logs", VAR_3);

 VAR_4 = FUNC_1(VAR_7.buf, 0);
 if (!VAR_4) {
  FUNC_4(&VAR_7);
  return FUNC_2();
 }

 VAR_5 = FUNC_5(1, sizeof(*VAR_5));
 VAR_6 = &VAR_5->base;

 FUNC_0(VAR_6, &VAR_1, 0);
 VAR_5->dir_iterator = VAR_4;
 VAR_5->ref_store = VAR_2;
 FUNC_4(&VAR_7);

 return VAR_6;
}
