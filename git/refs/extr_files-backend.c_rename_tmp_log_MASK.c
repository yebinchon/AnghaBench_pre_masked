
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;
struct rename_cb {char* tmp_renamed_log; int true_errno; } ;
struct files_ref_store {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 char const* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,char*,...) ;
 int FUNC_1 (struct files_ref_store*,struct strbuf*,char const*) ;
 int FUNC_2 (char*,int ,struct rename_cb*) ;
 int VAR_4 ;
 int FUNC_3 (struct strbuf*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct files_ref_store *VAR_5, const char *VAR_6)
{
 struct strbuf VAR_7 = VAR_1;
 struct strbuf VAR_8 = VAR_1;
 struct rename_cb VAR_9;
 int VAR_10;

 FUNC_1(VAR_5, &VAR_7, VAR_6);
 FUNC_1(VAR_5, &VAR_8, VAR_2);
 VAR_9.tmp_renamed_log = VAR_8.buf;
 VAR_10 = FUNC_2(VAR_7.buf, VAR_4, &VAR_9);
 if (VAR_10) {
  if (VAR_3 == VAR_0)
   FUNC_0("directory not empty: %s", VAR_7.buf);
  else
   FUNC_0("unable to move logfile %s to %s: %s",
         VAR_8.buf, VAR_7.buf,
         FUNC_4(VAR_9.true_errno));
 }

 FUNC_3(&VAR_7);
 FUNC_3(&VAR_8);
 return VAR_10;
}
