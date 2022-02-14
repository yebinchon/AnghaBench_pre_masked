
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int file_size; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_index ;
struct TYPE_7__ {int checkout_strategy; } ;
typedef TYPE_2__ git_checkout_options ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_4 ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int **,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

void FUNC_9(void)
{
 git_index *VAR_5;
 const git_index_entry *VAR_6;
 git_checkout_options VAR_7 = VAR_3;
 VAR_7.checkout_strategy = VAR_2;

 FUNC_2(VAR_4, "core.autocrlf", 1);

 FUNC_6(&VAR_5, VAR_4);
 FUNC_8(VAR_5);

 FUNC_3(VAR_4, &VAR_7);

 FUNC_0((VAR_6 = FUNC_5(VAR_5, "all-lf", 0)) != ((void*)0));

 FUNC_1(FUNC_7(VAR_1), VAR_6->file_size);

 FUNC_0((VAR_6 = FUNC_5(VAR_5, "all-crlf", 0)) != ((void*)0));
 FUNC_1(FUNC_7(VAR_0), VAR_6->file_size);

 FUNC_4(VAR_5);
}
