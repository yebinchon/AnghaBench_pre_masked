
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int buf; } ;
struct ref_transaction {int dummy; } ;
struct object_id {int dummy; } ;
struct TYPE_2__ {int oid; } ;
struct commit {TYPE_1__ object; } ;


 struct strbuf VAR_0 ;
 int VAR_1 ;
 struct ref_transaction* FUNC_0 (struct strbuf*) ;
 scalar_t__ FUNC_1 (struct ref_transaction*,struct strbuf*) ;
 int FUNC_2 (struct ref_transaction*) ;
 scalar_t__ FUNC_3 (struct ref_transaction*,char*,struct object_id const*,int *,int ,int,struct strbuf*) ;
 int FUNC_4 (struct strbuf*,int,char const*) ;
 int FUNC_5 (struct strbuf*,struct strbuf const*) ;
 int FUNC_6 (struct strbuf*,char) ;
 int FUNC_7 (struct strbuf*,char const*) ;
 int FUNC_8 (struct strbuf*) ;
 char* FUNC_9 (int,char) ;

int FUNC_10(const struct commit *VAR_2,
       const struct object_id *VAR_3,
       const char *VAR_4, const struct strbuf *VAR_5,
       struct strbuf *VAR_6)
{
 struct ref_transaction *VAR_7;
 struct strbuf VAR_8 = VAR_0;
 const char *VAR_9;
 int VAR_10 = 0;

 if (VAR_4) {
  FUNC_7(&VAR_8, VAR_4);
  FUNC_7(&VAR_8, ": ");
 }

 VAR_9 = FUNC_9(VAR_5->buf, '\n');
 if (VAR_9) {
  FUNC_4(&VAR_8, VAR_5->buf, VAR_9 + 1 - VAR_5->buf);
 } else {
  FUNC_5(&VAR_8, VAR_5);
  FUNC_6(&VAR_8, '\n');
 }

 VAR_7 = FUNC_0(VAR_6);
 if (!VAR_7 ||
     FUNC_3(VAR_7, "HEAD", VAR_3,
       VAR_2 ? &VAR_2->object.oid : &VAR_1,
       0, VAR_8.buf, VAR_6) ||
     FUNC_1(VAR_7, VAR_6)) {
  VAR_10 = -1;
 }
 FUNC_2(VAR_7);
 FUNC_8(&VAR_8);

 return VAR_10;
}
