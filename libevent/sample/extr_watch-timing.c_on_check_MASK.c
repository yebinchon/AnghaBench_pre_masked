
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_sec; long double tv_usec; } ;
struct evwatch_check_cb_info {int dummy; } ;
struct evwatch {int dummy; } ;


 struct timeval VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct timeval*,int *) ;
 int FUNC_1 (struct timeval*,int *,struct timeval*) ;
 int VAR_2 ;
 int FUNC_2 (int ,scalar_t__) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct evwatch *VAR_4, const struct evwatch_check_cb_info *VAR_5, void *VAR_6)
{
 struct timeval VAR_7, VAR_8;
 FUNC_0(&VAR_0, ((void*)0));
 FUNC_1(&VAR_0, &VAR_3, &VAR_7);
 FUNC_1(&VAR_7, &VAR_2, &VAR_8);
 if (VAR_8.tv_sec >= 0)
  FUNC_2(VAR_1, VAR_8.tv_sec + VAR_8.tv_usec / 1000000.0l);
}
