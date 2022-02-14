
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct stat {scalar_t__ st_mtime; } ;
struct p_timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
typedef int git_reference ;
typedef int git_oid ;
typedef int git_object ;
typedef int git_index ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ git_diff_options ;
typedef int git_diff ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,int *,TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int ,int ,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int **,int *,int ) ;
 int FUNC_16 (int **,int ) ;
 int FUNC_17 (int **,int ) ;
 int FUNC_18 (int ,int *,int ,int *) ;
 int FUNC_19 (char*,struct stat*) ;
 int FUNC_20 (char*,struct p_timeval*) ;
 int VAR_7 ;

void FUNC_21(void)
{
 git_index *VAR_8;
 git_diff_options VAR_9 = VAR_2;
 git_diff *VAR_10 = ((void*)0);
 git_reference *VAR_11;
 git_object *VAR_12;
 git_oid VAR_13, VAR_14, VAR_15;
 git_buf VAR_16 = VAR_0;
 struct stat VAR_17;
 struct p_timeval VAR_18[2];

 VAR_9.flags |= VAR_1 | VAR_3;

 VAR_6 = FUNC_2("status");

 FUNC_1(FUNC_17(&VAR_8, VAR_6));
 FUNC_1(FUNC_16(&VAR_11, VAR_6));
 FUNC_1(FUNC_15(&VAR_12, VAR_11, VAR_4));

 FUNC_1(FUNC_18(VAR_6, VAR_12, VAR_5, ((void*)0)));

 FUNC_11(&VAR_13, FUNC_8(VAR_8));


 FUNC_3(FUNC_19("status/.git/index", &VAR_17));

 VAR_18[0].tv_sec = VAR_17.st_mtime + 5;
 VAR_18[0].tv_usec = 0;
 VAR_18[1].tv_sec = VAR_17.st_mtime + 5;
 VAR_18[1].tv_usec = 0;

 FUNC_3(FUNC_20("status/.git/index", VAR_18));


 FUNC_1(FUNC_7(&VAR_10, VAR_6, ((void*)0), &VAR_9));
 FUNC_6(VAR_10);

 FUNC_11(&VAR_14, FUNC_8(VAR_8));
 FUNC_0(!FUNC_12(&VAR_13, &VAR_14));


 FUNC_1(FUNC_5(&VAR_16, "status"));
 FUNC_1(FUNC_13(&VAR_16, 0, VAR_7, ((void*)0)));

 FUNC_1(FUNC_7(&VAR_10, VAR_6, ((void*)0), &VAR_9));
 FUNC_6(VAR_10);


 FUNC_11(&VAR_15, FUNC_8(VAR_8));
 FUNC_0(!FUNC_12(&VAR_14, &VAR_15));

 FUNC_4(&VAR_16);
 FUNC_10(VAR_12);
 FUNC_14(VAR_11);
 FUNC_9(VAR_8);
}
