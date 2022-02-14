
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {char* buf; } ;
struct TYPE_2__ {int oid; } ;
struct commit {TYPE_1__ object; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 char* FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,char*,char const*,char*,char*) ;
 int FUNC_2 (struct commit*) ;
 int FUNC_3 (int ,struct commit*,struct strbuf*) ;
 scalar_t__ FUNC_4 () ;
 int VAR_3 ;
 int FUNC_5 (struct strbuf*) ;

__attribute__((used)) static void FUNC_6(const char *VAR_4, struct commit *VAR_5)
{
 struct strbuf VAR_6 = VAR_2;

 if (!FUNC_2(VAR_5))
  FUNC_3(VAR_0, VAR_5, &VAR_6);
 if (FUNC_4()) {
  FUNC_1(VAR_3, "%s %s... %s\n", VAR_4,
   FUNC_0(&VAR_5->object.oid, VAR_1), VAR_6.buf);
 } else {
  FUNC_1(VAR_3, "%s %s %s\n", VAR_4,
   FUNC_0(&VAR_5->object.oid, VAR_1), VAR_6.buf);
 }
 FUNC_5(&VAR_6);
}
