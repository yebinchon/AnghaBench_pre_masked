
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_5__ {int flags; TYPE_2__* payload; int notify_cb; } ;
typedef TYPE_1__ git_diff_options ;
typedef int git_diff ;
struct TYPE_6__ {char* member_0; int member_1; } ;
typedef TYPE_2__ basic_payload ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int *,int *,TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_5 (char*,int) ;

void FUNC_6(void)
{
 git_diff_options VAR_6 = VAR_3;
 git_repository *VAR_7 = FUNC_1("diff");
 git_diff *VAR_8;

 basic_payload VAR_9[] = {
  { "another.txt", VAR_1 },
  { "readme.txt", VAR_1 },
  { "zzzzz/", VAR_0 },
  { ((void*)0), 0 }
 };

 FUNC_2(FUNC_5("diff/zzzzz", 0777));

 VAR_6.flags |= VAR_2 | VAR_4;
 VAR_6.notify_cb = VAR_5;
 VAR_6.payload = VAR_9;

 FUNC_0(FUNC_4(&VAR_8, VAR_7, ((void*)0), &VAR_6));

 FUNC_3(VAR_8);
}
