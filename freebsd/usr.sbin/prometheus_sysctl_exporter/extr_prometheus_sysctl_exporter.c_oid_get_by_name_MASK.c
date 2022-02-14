
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oid {int len; int id; } ;


 int FUNC_0 (int,char*,char const*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const*,int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct oid *VAR_0, const char *VAR_1)
{

 VAR_0->len = FUNC_1(VAR_0->id);
 if (FUNC_2(VAR_1, VAR_0->id, &VAR_0->len) != 0)
  FUNC_0(1, "sysctl(%s)", VAR_1);
}
