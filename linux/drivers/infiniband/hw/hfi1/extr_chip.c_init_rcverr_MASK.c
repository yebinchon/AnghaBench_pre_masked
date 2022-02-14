
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_devdata {int rcverr_timer; scalar_t__ rcv_ovfl_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct hfi1_devdata *VAR_4)
{
 FUNC_1(&VAR_4->rcverr_timer, VAR_3, 0);

 VAR_4->rcv_ovfl_cnt = 0;
 return FUNC_0(&VAR_4->rcverr_timer, VAR_2 + VAR_0 * VAR_1);
}
