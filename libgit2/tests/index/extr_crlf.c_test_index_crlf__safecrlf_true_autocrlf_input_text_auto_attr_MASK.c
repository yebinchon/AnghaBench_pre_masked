
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_4__ {int id; } ;
typedef TYPE_1__ git_index_entry ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ,char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int ,char*) ;
 TYPE_1__* FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (int *,int ) ;

void FUNC_10(void)
{
 const git_index_entry *VAR_5;
 git_oid VAR_6;

 FUNC_3("./crlf/.gitattributes", "* text=auto\n");

 FUNC_6(VAR_4, "core.autocrlf", "input");
 FUNC_5(VAR_4, "core.safecrlf", 1);

 FUNC_3("./crlf/newfile.txt", VAR_1);

 FUNC_4(FUNC_7(VAR_3, "newfile.txt"));
 VAR_5 = FUNC_8(VAR_3, "newfile.txt", 0);
 FUNC_0(VAR_5);

 FUNC_4(FUNC_9(&VAR_6, VAR_2));
 FUNC_1(&VAR_6, &VAR_5->id);

 FUNC_3("./crlf/newfile2.txt", VAR_0);
 FUNC_2(FUNC_7(VAR_3, "newfile2.txt"));
}
