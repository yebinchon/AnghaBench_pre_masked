
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct p_timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,char const*) ;
 int FUNC_4 (int ,struct stat*) ;
 int FUNC_5 (int ,struct p_timeval*) ;

__attribute__((used)) static void FUNC_6(struct stat *VAR_1, const char *VAR_2)
{
 git_buf VAR_3 = VAR_0;
 struct p_timeval VAR_4[2];

 VAR_4[0].tv_sec = 1234567890;
 VAR_4[0].tv_usec = 0;
 VAR_4[1].tv_sec = 1234567890;
 VAR_4[1].tv_usec = 0;

 FUNC_3(&VAR_3, "testrepo.git/objects", VAR_2);

 FUNC_0(FUNC_5(FUNC_1(&VAR_3), VAR_4));
 FUNC_0(FUNC_4(FUNC_1(&VAR_3), VAR_1));
 FUNC_2(&VAR_3);
}
