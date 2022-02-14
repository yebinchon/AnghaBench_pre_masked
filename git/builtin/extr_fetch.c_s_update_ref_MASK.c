
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int buf; } ;
struct ref_transaction {int dummy; } ;
struct ref {int old_oid; int new_oid; int name; } ;
struct TYPE_2__ {char* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 struct ref_transaction* FUNC_3 (struct strbuf*) ;
 int FUNC_4 (struct ref_transaction*,struct strbuf*) ;
 int FUNC_5 (struct ref_transaction*) ;
 scalar_t__ FUNC_6 (struct ref_transaction*,int ,int *,int *,int ,char*,struct strbuf*) ;
 int FUNC_7 (struct strbuf*) ;
 char* FUNC_8 (char*,char*,char const*) ;

__attribute__((used)) static int FUNC_9(const char *VAR_6,
   struct ref *VAR_7,
   int VAR_8)
{
 char *VAR_9;
 char *VAR_10 = FUNC_2("GIT_REFLOG_ACTION");
 struct ref_transaction *VAR_11;
 struct strbuf VAR_12 = VAR_2;
 int VAR_13, VAR_14 = 0;

 if (VAR_5)
  return 0;
 if (!VAR_10)
  VAR_10 = VAR_4.buf;
 VAR_9 = FUNC_8("%s: %s", VAR_10, VAR_6);

 VAR_11 = FUNC_3(&VAR_12);
 if (!VAR_11 ||
     FUNC_6(VAR_11, VAR_7->name,
       &VAR_7->new_oid,
       VAR_8 ? &VAR_7->old_oid : ((void*)0),
       0, VAR_9, &VAR_12))
  goto fail;

 VAR_13 = FUNC_4(VAR_11, &VAR_12);
 if (VAR_13) {
  VAR_14 = (VAR_13 == VAR_3);
  goto fail;
 }

 FUNC_5(VAR_11);
 FUNC_7(&VAR_12);
 FUNC_1(VAR_9);
 return 0;
fail:
 FUNC_5(VAR_11);
 FUNC_0("%s", VAR_12.buf);
 FUNC_7(&VAR_12);
 FUNC_1(VAR_9);
 return VAR_14 ? VAR_0
      : VAR_1;
}
