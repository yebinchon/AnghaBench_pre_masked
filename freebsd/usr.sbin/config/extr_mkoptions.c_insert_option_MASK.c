
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opt_list {char* o_name; char* o_file; scalar_t__ o_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct opt_list*,int ) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(const char *VAR_3, char *VAR_4, char *VAR_5)
{
 struct opt_list *VAR_6;

 FUNC_2(VAR_3, VAR_4);
 VAR_6 = (struct opt_list *) FUNC_1(1, sizeof *VAR_6);
 if (VAR_6 == ((void*)0))
  FUNC_3(VAR_0, "calloc");
 VAR_6->o_name = VAR_4;
 VAR_6->o_file = VAR_5;
 VAR_6->o_flags = 0;
 FUNC_0(&VAR_2, VAR_6, VAR_1);
}
