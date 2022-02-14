
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int member_0; char* member_1; TYPE_3__* member_2; } ;
typedef TYPE_1__ racy_payload ;
typedef int git_repository ;
struct TYPE_7__ {int flags; TYPE_1__* payload; int notify_cb; } ;
typedef TYPE_2__ git_diff_options ;
typedef int git_diff ;
struct TYPE_8__ {char* member_0; int member_1; } ;
typedef TYPE_3__ basic_payload ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int *,int *,TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_5 (char*,int) ;

void FUNC_6(void)
{
 git_diff_options VAR_5 = VAR_2;
 git_repository *VAR_6 = FUNC_1("diff");
 git_diff *VAR_7;

 basic_payload VAR_8[] = {
  { "another.txt", VAR_0 },
  { "readme.txt", VAR_0 },
  { ((void*)0), 0 }
 };

 racy_payload VAR_9 = { 1, "diff/zzzzz", VAR_8 };

 FUNC_2(FUNC_5("diff/zzzzz", 0777));

 VAR_5.flags |= VAR_1 | VAR_3;
 VAR_5.notify_cb = VAR_4;
 VAR_5.payload = &VAR_9;

 FUNC_0(FUNC_4(&VAR_7, VAR_6, ((void*)0), &VAR_5));

 FUNC_3(VAR_7);
}
