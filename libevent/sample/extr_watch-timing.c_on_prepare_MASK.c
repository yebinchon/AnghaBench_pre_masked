
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {long double tv_usec; scalar_t__ tv_sec; } ;
struct evwatch_prepare_cb_info {int dummy; } ;
struct evwatch {int dummy; } ;
struct TYPE_3__ {scalar_t__ tv_sec; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,TYPE_1__*,struct timeval*) ;
 int FUNC_2 (struct evwatch_prepare_cb_info const*,int *) ;
 int VAR_2 ;
 int FUNC_3 (int ,scalar_t__) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(struct evwatch *VAR_4, const struct evwatch_prepare_cb_info *VAR_5, void *VAR_6)
{
 struct timeval VAR_7;
 FUNC_0(&VAR_3, ((void*)0));
 FUNC_2(VAR_5, &VAR_2);
 if (VAR_0.tv_sec != 0) {
  FUNC_1(&VAR_3, &VAR_0, &VAR_7);
  FUNC_3(VAR_1, VAR_7.tv_sec + VAR_7.tv_usec / 1000000.0l);
 }
}
