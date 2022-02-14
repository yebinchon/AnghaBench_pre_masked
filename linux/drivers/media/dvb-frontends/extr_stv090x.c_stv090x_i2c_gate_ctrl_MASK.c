
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct stv090x_state {TYPE_2__* internal; int frontend; TYPE_1__* config; } ;
struct TYPE_4__ {int tuner_lock; } ;
struct TYPE_3__ {int (* tuner_i2c_lock ) (int *,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct stv090x_state*,int ) ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (struct stv090x_state*,int ,int ) ;
 int FUNC_3 (int ,int,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static int FUNC_9(struct stv090x_state *VAR_4, int VAR_5)
{
 u32 VAR_6;
 if (VAR_5) {
  if (VAR_4->config->tuner_i2c_lock)
   VAR_4->config->tuner_i2c_lock(&VAR_4->frontend, 1);
  else
   FUNC_4(&VAR_4->internal->tuner_lock);
 }

 VAR_6 = FUNC_0(VAR_4, VAR_2);
 if (VAR_5) {
  FUNC_3(VAR_0, 1, "Enable Gate");
  FUNC_1(VAR_6, VAR_3, 1);
  if (FUNC_2(VAR_4, VAR_2, VAR_6) < 0)
   goto err;

 } else {
  FUNC_3(VAR_0, 1, "Disable Gate");
  FUNC_1(VAR_6, VAR_3, 0);
  if ((FUNC_2(VAR_4, VAR_2, VAR_6)) < 0)
   goto err;
 }

 if (!VAR_5) {
  if (VAR_4->config->tuner_i2c_lock)
   VAR_4->config->tuner_i2c_lock(&VAR_4->frontend, 0);
  else
   FUNC_5(&VAR_4->internal->tuner_lock);
 }

 return 0;
err:
 FUNC_3(VAR_1, 1, "I/O error");
 if (VAR_4->config->tuner_i2c_lock)
  VAR_4->config->tuner_i2c_lock(&VAR_4->frontend, 0);
 else
  FUNC_5(&VAR_4->internal->tuner_lock);
 return -1;
}
