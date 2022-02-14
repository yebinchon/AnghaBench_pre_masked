
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct gp8psk_fe_state {int lock; int snr; int status_check_interval; scalar_t__ next_status_check; int priv; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* in ) (int ,int ,int ,int ,int*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,int*,int) ;
 int FUNC_1 (int ,int ,int ,int ,int*,int) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct gp8psk_fe_state *VAR_4)
{
 u8 VAR_5[6];
 if (FUNC_2(VAR_3,VAR_4->next_status_check)) {
  VAR_4->ops->in(VAR_4->priv, VAR_0, 0, 0, &VAR_4->lock, 1);
  VAR_4->ops->in(VAR_4->priv, VAR_1, 0, 0, VAR_5, 6);
  VAR_4->snr = (VAR_5[1]) << 8 | VAR_5[0];
  VAR_4->next_status_check = VAR_3 + (VAR_4->status_check_interval*VAR_2)/1000;
 }
 return 0;
}
