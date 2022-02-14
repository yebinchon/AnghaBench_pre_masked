
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int flags; } ;
typedef TYPE_2__ git_blame_options ;
struct TYPE_11__ {TYPE_1__* final_signature; int * orig_signature; } ;
typedef TYPE_3__ git_blame_hunk ;
struct TYPE_12__ {int real_email; int real_name; } ;
struct TYPE_9__ {int email; int name; } ;


 size_t FUNC_0 (TYPE_4__*) ;
 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *,int ,char*,TYPE_2__*) ;
 TYPE_3__* FUNC_6 (int ,size_t) ;
 TYPE_4__* VAR_4 ;

void FUNC_7(void)
{
 size_t VAR_5 = 0;
 const git_blame_hunk *VAR_6 = ((void*)0);
 git_blame_options VAR_7 = VAR_0;

 VAR_3 = FUNC_4("mailmap");

 VAR_7.flags |= VAR_1;

 FUNC_3(FUNC_5(&VAR_2, VAR_3, "file.txt", &VAR_7));
 FUNC_1(VAR_2);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4); ++VAR_5) {
  VAR_6 = FUNC_6(VAR_2, VAR_5 + 1);

  FUNC_1(VAR_6->final_signature != ((void*)0));
  FUNC_1(VAR_6->orig_signature != ((void*)0));
  FUNC_2(VAR_6->final_signature->name, VAR_4[VAR_5].real_name);
  FUNC_2(VAR_6->final_signature->email, VAR_4[VAR_5].real_email);
 }
}
