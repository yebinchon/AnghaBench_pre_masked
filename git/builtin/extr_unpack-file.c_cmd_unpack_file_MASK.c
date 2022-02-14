
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;


 int FUNC_0 (struct object_id*) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (char const*,struct object_id*) ;
 int FUNC_3 (int ,int *) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char const*,char*) ;
 int FUNC_6 (char*) ;

int FUNC_7(int VAR_1, const char **VAR_2, const char *VAR_3)
{
 struct object_id VAR_4;

 if (VAR_1 != 2 || !FUNC_5(VAR_2[1], "-h"))
  FUNC_6("git unpack-file <sha1>");
 if (FUNC_2(VAR_2[1], &VAR_4))
  FUNC_1("Not a valid object name %s", VAR_2[1]);

 FUNC_3(VAR_0, ((void*)0));

 FUNC_4(FUNC_0(&VAR_4));
 return 0;
}
