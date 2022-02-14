
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; int tv_sec; } ;
typedef int nstime_t ;


 int FUNC_0 (struct timeval*,int *) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_2(nstime_t *VAR_0) {
 struct timeval VAR_1;

 FUNC_0(&VAR_1, ((void*)0));
 FUNC_1(VAR_0, VAR_1.tv_sec, VAR_1.tv_usec * 1000);
}
