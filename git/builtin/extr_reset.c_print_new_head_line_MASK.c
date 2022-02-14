
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {scalar_t__ len; char* buf; } ;
struct TYPE_2__ {int oid; } ;
struct commit {TYPE_1__ object; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 char* FUNC_0 (char*) ;
 char* FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,struct commit*,struct strbuf*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char) ;
 int FUNC_5 (struct strbuf*) ;

__attribute__((used)) static void FUNC_6(struct commit *VAR_3)
{
 struct strbuf VAR_4 = VAR_2;

 FUNC_3(FUNC_0("HEAD is now at %s"),
  FUNC_1(&VAR_3->object.oid, VAR_1));

 FUNC_2(VAR_0, VAR_3, &VAR_4);
 if (VAR_4.len > 0)
  FUNC_3(" %s", VAR_4.buf);
 FUNC_4('\n');
 FUNC_5(&VAR_4);
}
