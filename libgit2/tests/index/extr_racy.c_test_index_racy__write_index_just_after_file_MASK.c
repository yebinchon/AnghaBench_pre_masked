
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct p_timeval {int tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_15__ {int tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_16__ {TYPE_1__ mtime; } ;
struct TYPE_17__ {TYPE_2__ stamp; } ;
typedef TYPE_3__ git_index ;
typedef int git_diff ;
struct TYPE_18__ {int ptr; } ;
typedef TYPE_4__ git_buf ;


 TYPE_4__ VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int ,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,TYPE_3__*,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_3__*,char*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*,int) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__**,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,struct p_timeval*) ;

void FUNC_16(void)
{
 git_index *VAR_2;
 git_diff *VAR_3;
 git_buf VAR_4 = VAR_0;
 struct p_timeval VAR_5[2];


 FUNC_2(FUNC_13(&VAR_2, VAR_1));
 FUNC_2(FUNC_12(VAR_2));

 FUNC_2(FUNC_4(&VAR_4, FUNC_14(VAR_1), "A"));
 FUNC_1(VAR_4.ptr, "A");

 VAR_5[0].tv_sec = VAR_2->stamp.mtime.tv_sec + 1;
 VAR_5[0].tv_usec = VAR_2->stamp.mtime.tv_nsec / 1000;
 VAR_5[1].tv_sec = VAR_2->stamp.mtime.tv_sec + 1;
 VAR_5[1].tv_usec = VAR_2->stamp.mtime.tv_nsec / 1000;
 FUNC_2(FUNC_15(VAR_4.ptr, VAR_5));






 FUNC_2(FUNC_8(VAR_2, "A"));
 FUNC_2(FUNC_12(VAR_2));

 FUNC_1(VAR_4.ptr, "B");




 VAR_5[0].tv_sec = VAR_2->stamp.mtime.tv_sec + 2;
 VAR_5[0].tv_usec = VAR_2->stamp.mtime.tv_nsec / 1000;
 VAR_5[1].tv_sec = VAR_2->stamp.mtime.tv_sec + 2;
 VAR_5[0].tv_usec = VAR_2->stamp.mtime.tv_nsec / 1000;

 FUNC_2(FUNC_15(FUNC_10(VAR_2), VAR_5));
 FUNC_2(FUNC_15(VAR_4.ptr, VAR_5));

 FUNC_2(FUNC_11(VAR_2, 1));

 FUNC_2(FUNC_6(&VAR_3, VAR_1, VAR_2, ((void*)0)));
 FUNC_0(1, FUNC_7(VAR_3));

 FUNC_3(&VAR_4);
 FUNC_5(VAR_3);
 FUNC_9(VAR_2);
}
