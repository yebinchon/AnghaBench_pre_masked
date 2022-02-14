
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef int fd_set ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,int *,int *,int ,struct timeval*) ;

__attribute__((used)) static int FUNC_4(int VAR_0, int VAR_1)
{
 fd_set VAR_2, *VAR_3 = 0, *VAR_4 = 0;
 struct timeval VAR_5;
 int VAR_6;
 VAR_5.tv_sec = 5; VAR_5.tv_usec = 0;
 FUNC_1(&VAR_2);
 FUNC_0(VAR_0, &VAR_2);
 if (VAR_1) VAR_3 = &VAR_2;
 else VAR_4 = &VAR_2;
 VAR_6 = FUNC_3(VAR_0+1, VAR_3, VAR_4, 0, &VAR_5);
 if (VAR_6 == -1) FUNC_2("select");
 return VAR_6;
}
