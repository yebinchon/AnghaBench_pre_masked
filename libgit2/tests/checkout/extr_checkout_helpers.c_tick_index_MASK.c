
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;
struct p_timeval {int tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_6__ {struct timespec mtime; } ;
struct TYPE_7__ {TYPE_1__ stamp; int on_disk; } ;
typedef TYPE_2__ git_index ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int ,struct p_timeval*) ;

void FUNC_5(git_index *VAR_0)
{
 struct timespec VAR_1;
 struct p_timeval VAR_2[2];

 FUNC_0(VAR_0->on_disk);
 FUNC_0(FUNC_2(VAR_0));

 FUNC_1(FUNC_3(VAR_0, 1));
 VAR_1 = VAR_0->stamp.mtime;

 VAR_2[0].tv_sec = VAR_1.tv_sec;
 VAR_2[0].tv_usec = VAR_1.tv_nsec / 1000;
 VAR_2[1].tv_sec = VAR_1.tv_sec + 5;
 VAR_2[1].tv_usec = VAR_1.tv_nsec / 1000;

 FUNC_1(FUNC_4(FUNC_2(VAR_0), VAR_2));
 FUNC_1(FUNC_3(VAR_0, 1));
}
