
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int snap; } ;
typedef TYPE_2__ git_index_iterator ;
struct TYPE_9__ {int member_0; } ;
struct TYPE_11__ {char* path; void* mode; int id; TYPE_1__ member_0; } ;
typedef TYPE_3__ git_index_entry ;
typedef int git_index ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (size_t,size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 size_t FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__**,int *) ;
 int FUNC_8 (TYPE_3__ const**,TYPE_2__*) ;
 int FUNC_9 (int **,int ) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (int *) ;

void FUNC_12(void)
{
 git_index *VAR_3;
 git_index_iterator *VAR_4;
 const git_index_entry *VAR_5;
 git_index_entry VAR_6 = {0};
 size_t VAR_7 = 0, VAR_8 = 0;
 int VAR_9;

 FUNC_2(FUNC_9(&VAR_3, VAR_2));
 FUNC_2(FUNC_7(&VAR_4, VAR_3));

 VAR_7 = FUNC_4(VAR_3);
 FUNC_0(FUNC_11(&VAR_4->snap));






 FUNC_2(FUNC_10(&VAR_6.id, "8312e0a89a9cbab77c732b6bc39b51a783e3a318"));
 VAR_6.path = "newfile";
 VAR_6.mode = VAR_0;
 FUNC_2(FUNC_3(VAR_3, &VAR_6));

 FUNC_2(FUNC_10(&VAR_6.id, "4141414141414141414141414141414141414141"));
 VAR_6.path = "Makefile";
 VAR_6.mode = VAR_0;
 FUNC_2(FUNC_3(VAR_3, &VAR_6));

 while (1) {
  VAR_9 = FUNC_8(&VAR_5, VAR_4);

  if (VAR_9 == VAR_1)
   break;

  VAR_8++;
 }

 FUNC_1(VAR_7, VAR_8);

 FUNC_6(VAR_4);
 FUNC_5(VAR_3);
}
