
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct oidset_iter {int dummy; } ;
struct oidset {int dummy; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (struct object_id const*) ;
 int FUNC_1 (struct oidset*,struct oidset_iter*) ;
 struct object_id* FUNC_2 (struct oidset_iter*) ;
 int FUNC_3 (struct strbuf*,char*,int ) ;

__attribute__((used)) static void FUNC_4(struct strbuf *VAR_0, struct oidset *VAR_1)
{
 struct oidset_iter VAR_2;
 const struct object_id *VAR_3;
 FUNC_1(VAR_1, &VAR_2);

 while ((VAR_3 = FUNC_2(&VAR_2))) {
  FUNC_3(VAR_0, "have %s\n", FUNC_0(VAR_3));
 }
}
