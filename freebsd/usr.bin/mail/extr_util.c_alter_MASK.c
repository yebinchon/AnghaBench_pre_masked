
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 (int ,char*,struct timespec*,int ) ;

void
FUNC_2(char *VAR_3)
{
 struct timespec VAR_4[2];

 (void)FUNC_0(VAR_1, &VAR_4[0]);
 VAR_4[0].tv_sec++;
 VAR_4[1].tv_sec = 0;
 VAR_4[1].tv_nsec = VAR_2;
 (void)FUNC_1(VAR_0, VAR_3, VAR_4, 0);
}
