
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vas_tx_win_attr {scalar_t__ tc_mode; scalar_t__ wcreds_max; scalar_t__ rsvd_txbuf_count; scalar_t__ user_win; } ;
typedef enum vas_cop_type { ____Placeholder_vas_cop_type } vas_cop_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static bool FUNC_0(enum vas_cop_type VAR_4,
   struct vas_tx_win_attr *VAR_5)
{
 if (VAR_5->tc_mode != VAR_2)
  return 0;

 if (VAR_4 > VAR_1)
  return 0;

 if (VAR_5->wcreds_max > VAR_3)
  return 0;

 if (VAR_5->user_win &&
   (VAR_4 != VAR_0 || VAR_5->rsvd_txbuf_count))
  return 0;

 return 1;
}
