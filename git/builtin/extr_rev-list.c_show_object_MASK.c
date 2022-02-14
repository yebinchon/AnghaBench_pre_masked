
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_list_info {int flags; } ;
struct object {int oid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct object*,char const*,void*) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (char*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,struct object*,char const*) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_5(struct object *VAR_5, const char *VAR_6, void *VAR_7)
{
 struct rev_list_info *VAR_8 = VAR_7;
 if (FUNC_1(VAR_5, VAR_6, VAR_7))
  return;
 FUNC_0(VAR_2, ++VAR_3);
 if (VAR_8->flags & VAR_0)
  return;
 if (VAR_1)
  FUNC_4(VAR_4, VAR_5, VAR_6);
 else
  FUNC_3("%s\n", FUNC_2(&VAR_5->oid));
}
