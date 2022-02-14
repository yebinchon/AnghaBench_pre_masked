
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_blame_options ;
struct TYPE_7__ {TYPE_1__* final_signature; int * orig_signature; } ;
typedef TYPE_2__ git_blame_hunk ;
struct TYPE_8__ {int replace_email; int replace_name; } ;
struct TYPE_6__ {int email; int name; } ;


 size_t FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int *,int ,char*,int *) ;
 TYPE_2__* FUNC_6 (int ,size_t) ;
 TYPE_3__* VAR_3 ;

void FUNC_7(void)
{
 size_t VAR_4 = 0;
 const git_blame_hunk *VAR_5 = ((void*)0);
 git_blame_options VAR_6 = VAR_0;

 VAR_2 = FUNC_4("mailmap");

 FUNC_3(FUNC_5(&VAR_1, VAR_2, "file.txt", &VAR_6));
 FUNC_1(VAR_1);

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3); ++VAR_4) {
  VAR_5 = FUNC_6(VAR_1, VAR_4 + 1);

  FUNC_1(VAR_5->final_signature != ((void*)0));
  FUNC_1(VAR_5->orig_signature != ((void*)0));
  FUNC_2(VAR_5->final_signature->name, VAR_3[VAR_4].replace_name);
  FUNC_2(VAR_5->final_signature->email, VAR_3[VAR_4].replace_email);
 }
}
