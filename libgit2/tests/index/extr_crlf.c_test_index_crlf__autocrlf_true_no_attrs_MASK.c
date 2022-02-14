
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_3__ {int id; } ;
typedef TYPE_1__ git_index_entry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,char*) ;
 TYPE_1__* FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int *,int ) ;

void FUNC_7(void)
{
 const git_index_entry *VAR_7;
 git_oid VAR_8;

 FUNC_3(VAR_6, "core.autocrlf", 1);

 FUNC_1("./crlf/newfile.txt",
  (VAR_4 == VAR_3) ? VAR_0 : VAR_1);

 FUNC_2(FUNC_4(VAR_5, "newfile.txt"));
 VAR_7 = FUNC_5(VAR_5, "newfile.txt", 0);

 FUNC_2(FUNC_6(&VAR_8, VAR_2));
 FUNC_0(&VAR_8, &VAR_7->id);
}
