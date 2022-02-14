
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {scalar_t__ len; char const* buf; } ;
struct object_id {int dummy; } ;
struct TYPE_2__ {int url; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*,struct object_id*) ;
 scalar_t__ FUNC_4 (char*,struct strbuf*,int *) ;
 int FUNC_5 (struct object_id*) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_6 (char const*,char*,char const**) ;
 int FUNC_7 (struct strbuf*) ;
 int FUNC_8 (struct strbuf*) ;
 char* FUNC_9 (char const*,int) ;
 char* FUNC_10 (char*,int ,char const*) ;

__attribute__((used)) static void FUNC_11(const char *VAR_4, char **VAR_5, struct object_id *VAR_6)
{
 char *VAR_7 = FUNC_10("%s%s", VAR_3->url, VAR_4);
 struct strbuf VAR_8 = VAR_1;
 const char *VAR_9;

 if (FUNC_4(VAR_7, &VAR_8, ((void*)0)) != VAR_0)
  FUNC_1("Couldn't get %s for remote symref\n%s", VAR_7,
      VAR_2);
 FUNC_2(VAR_7);

 FUNC_0(*VAR_5);
 FUNC_5(VAR_6);

 if (VAR_8.len == 0)
  return;


 FUNC_8(&VAR_8);


 if (FUNC_6(VAR_8.buf, "ref: ", &VAR_9)) {
  *VAR_5 = FUNC_9(VAR_9, VAR_8.len - (VAR_9 - VAR_8.buf));
 } else {
  FUNC_3(VAR_8.buf, VAR_6);
 }

 FUNC_7(&VAR_8);
}
