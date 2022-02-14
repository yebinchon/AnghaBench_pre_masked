
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msc {int burst_len; scalar_t__ reg_base; int iter_list; int win_list; int buf_mutex; int mode; int user_count; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct msc *VAR_3)
{
 FUNC_2(&VAR_3->user_count, -1);

 VAR_3->mode = VAR_1;
 FUNC_4(&VAR_3->buf_mutex);
 FUNC_0(&VAR_3->win_list);
 FUNC_0(&VAR_3->iter_list);

 VAR_3->burst_len =
  (FUNC_3(VAR_3->reg_base + VAR_2) & VAR_0) >>
  FUNC_1(VAR_0);

 return 0;
}
