
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct TYPE_2__ {int oid; } ;
struct commit {TYPE_1__ object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct commit*) ;
 int FUNC_1 (int ,struct commit*,struct strbuf*) ;
 int FUNC_2 (struct strbuf*,int *,int ) ;
 int FUNC_3 (struct strbuf*,char) ;
 int FUNC_4 (struct strbuf*,char*) ;

__attribute__((used)) static void FUNC_5(struct strbuf *VAR_2, struct commit *VAR_3)
{
 FUNC_4(VAR_2, "  ");
 FUNC_2(VAR_2, &VAR_3->object.oid, VAR_1);
 FUNC_3(VAR_2, ' ');
 if (!FUNC_0(VAR_3))
  FUNC_1(VAR_0, VAR_3, VAR_2);
 FUNC_3(VAR_2, '\n');
}
