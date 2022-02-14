
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct object {scalar_t__ type; } ;
struct fetch_negotiator {int (* add_tip ) (struct fetch_negotiator*,struct commit*) ;} ;
struct commit {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct object* FUNC_0 (int ,int ,char const*,int ) ;
 int FUNC_1 (int ,struct object_id const*) ;
 int FUNC_2 (struct fetch_negotiator*,struct commit*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct fetch_negotiator *VAR_2,
          const char *VAR_3,
          const struct object_id *VAR_4)
{
 struct object *VAR_5 = FUNC_0(VAR_1,
         FUNC_1(VAR_1, VAR_4),
         VAR_3, 0);

 if (VAR_5 && VAR_5->type == VAR_0)
  VAR_2->add_tip(VAR_2, (struct commit *)VAR_5);

 return 0;
}
