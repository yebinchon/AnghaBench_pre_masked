
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oidset {int dummy; } ;
struct object_id {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct oidset*,int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct oidset*,struct object_id const*) ;

int FUNC_3(const struct object_id *VAR_2)
{
 static struct oidset VAR_3;
 static int VAR_4;

 if (!VAR_4) {
  if (FUNC_1()) {
   FUNC_0(VAR_1,
            &VAR_3,
            VAR_0);
  }
  VAR_4 = 1;
 }
 return FUNC_2(&VAR_3, VAR_2);
}
