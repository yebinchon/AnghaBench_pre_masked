
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct socketlist {scalar_t__ nr; int member_2; int member_1; int * member_0; } ;
struct credentials {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct credentials*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct socketlist*) ;
 int FUNC_4 (struct string_list*,int,struct socketlist*) ;

__attribute__((used)) static int FUNC_5(struct string_list *VAR_0, int VAR_1,
    struct credentials *VAR_2)
{
 struct socketlist VAR_3 = { ((void*)0), 0, 0 };

 FUNC_4(VAR_0, VAR_1, &VAR_3);
 if (VAR_3.nr == 0)
  FUNC_0("unable to allocate any listen sockets on port %u",
      VAR_1);

 FUNC_1(VAR_2);

 FUNC_2("Ready to rumble");

 return FUNC_3(&VAR_3);
}
