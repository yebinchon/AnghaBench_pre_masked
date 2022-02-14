
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct indent_arg {int indent; } ;
struct devinfo_rman {char* dm_desc; } ;


 scalar_t__ FUNC_0 (struct devinfo_rman*,int ,struct indent_arg*) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;

int
FUNC_2(struct devinfo_rman *VAR_1, void *VAR_2)
{
 struct indent_arg *VAR_3 = (struct indent_arg *)VAR_2;
 int VAR_4, VAR_5;

 VAR_4 = VAR_3->indent;


 VAR_3->indent = 0;
 if (FUNC_0(VAR_1,
     VAR_0, VAR_3) != 0) {


  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
   FUNC_1(" ");
  FUNC_1("%s:\n", VAR_1->dm_desc);


  VAR_3->indent = VAR_4 + 4;
  FUNC_0(VAR_1,
      VAR_0, VAR_3);
 }
 VAR_3->indent = VAR_4;
 return(0);
}
