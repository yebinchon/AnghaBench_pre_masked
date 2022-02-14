
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct object_id {int dummy; } ;
struct all_refs_cb {int name_for_errormsg; int wt; scalar_t__ warned_bad_reflog; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,void*) ;
 int FUNC_2 (struct strbuf*) ;
 int FUNC_3 (int ,struct strbuf*,char const*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(const char *VAR_3,
        const struct object_id *VAR_4,
        int VAR_5, void *VAR_6)
{
 struct all_refs_cb *VAR_7 = VAR_6;
 struct strbuf VAR_8 = VAR_0;

 VAR_7->warned_bad_reflog = 0;
 FUNC_3(VAR_7->wt, &VAR_8, VAR_3);
 VAR_7->name_for_errormsg = VAR_8.buf;
 FUNC_1(FUNC_0(VAR_2),
     VAR_8.buf,
     VAR_1, VAR_6);
 FUNC_2(&VAR_8);
 return 0;
}
