
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stat {scalar_t__ st_mtime; } ;
struct p_timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_3__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,struct stat*) ;
 int FUNC_4 (int ,struct p_timeval*) ;

__attribute__((used)) static int FUNC_5(void *VAR_0, git_buf *VAR_1)
{
 struct stat VAR_2;
 struct p_timeval VAR_3[2];

 FUNC_0(VAR_0);
 if (FUNC_2(VAR_1->ptr))
  return 0;

 FUNC_1(FUNC_3(VAR_1->ptr, &VAR_2));

 VAR_3[0].tv_sec = VAR_2.st_mtime + 3;
 VAR_3[0].tv_usec = 0;
 VAR_3[1].tv_sec = VAR_2.st_mtime + 3;
 VAR_3[1].tv_usec = 0;

 FUNC_1(FUNC_4(VAR_1->ptr, VAR_3));
 return 0;
}
