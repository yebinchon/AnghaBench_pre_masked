
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_6__ {int flags; } ;
typedef TYPE_1__ git_diff_options ;
struct TYPE_7__ {int status; } ;
typedef TYPE_2__ git_diff_delta ;
typedef int git_diff ;
typedef int git_commit ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (char,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int *) ;
 int FUNC_4 (int **,int ,int *,TYPE_1__*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 TYPE_2__* FUNC_7 (int *,size_t) ;
 size_t FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,char*) ;

void FUNC_11(void)
{
 size_t VAR_3;
 git_oid VAR_4;
 git_commit *VAR_5;
 git_diff *VAR_6;
 const git_diff_delta *VAR_7;
 git_diff_options VAR_8 = VAR_1;
 char VAR_9[8] = {'M', 'M', 'R', 'T', 'D', 'R', 'A', 'R'};

 FUNC_10(&VAR_4, "9b19edf33a03a0c59cdfc113bfa5c06179bf9b1a");
 FUNC_1(FUNC_3(&VAR_5, VAR_2, &VAR_4));
 VAR_8.flags |= VAR_0;
 FUNC_1(FUNC_4(&VAR_6, VAR_2, VAR_5, &VAR_8));
 FUNC_1(FUNC_5(VAR_6, ((void*)0)));

 for (VAR_3 = 0; VAR_3 < FUNC_8(VAR_6); VAR_3++) {
  VAR_7 = FUNC_7(VAR_6, VAR_3);
  FUNC_0(VAR_9[VAR_3], FUNC_9(VAR_7->status));
 }

 FUNC_6(VAR_6);
 FUNC_2(VAR_5);
}
