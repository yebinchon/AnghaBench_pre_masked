
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef int fd_set ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,int *,int *,int ,struct timeval*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(int VAR_2, int VAR_3)
{
 fd_set VAR_4, *VAR_5 = 0, *VAR_6 = 0;
 struct timeval VAR_7;
 int VAR_8;
 VAR_7.tv_sec = 5; VAR_7.tv_usec = 0;
 FUNC_1(&VAR_4);
 FUNC_0(VAR_2, &VAR_4);
 if (VAR_3) VAR_5 = &VAR_4;
 else VAR_6 = &VAR_4;
 VAR_8 = FUNC_5(VAR_2+1, VAR_5, VAR_6, 0, &VAR_7);

 if (VAR_8 == -1) FUNC_4("select");






 return VAR_8;
}
