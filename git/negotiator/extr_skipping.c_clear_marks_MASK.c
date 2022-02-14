
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct object {scalar_t__ type; } ;
struct commit {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct commit*,int) ;
 struct object* FUNC_1 (int ,int ,char const*,int ) ;
 int FUNC_2 (int ,struct object_id const*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(const char *VAR_6, const struct object_id *VAR_7,
         int VAR_8, void *VAR_9)
{
 struct object *VAR_10 = FUNC_1(VAR_5, FUNC_2(VAR_5, VAR_7), VAR_6, 0);

 if (VAR_10 && VAR_10->type == VAR_2)
  FUNC_0((struct commit *)VAR_10,
       VAR_1 | VAR_0 | VAR_4 | VAR_3);
 return 0;
}
