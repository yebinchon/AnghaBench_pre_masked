
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ expires; } ;
struct pmac_i2c_host_kw {scalar_t__ state; int lock; TYPE_1__ timeout_timer; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct pmac_i2c_host_kw*,int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_5, void *VAR_6)
{
 struct pmac_i2c_host_kw *VAR_7 = VAR_6;
 unsigned long VAR_8;

 FUNC_4(&VAR_7->lock, VAR_8);
 FUNC_1(&VAR_7->timeout_timer);
 FUNC_2(VAR_7, FUNC_3(VAR_3));
 if (VAR_7->state != VAR_4) {
  VAR_7->timeout_timer.expires = VAR_2 + VAR_1;
  FUNC_0(&VAR_7->timeout_timer);
 }
 FUNC_5(&VAR_7->lock, VAR_8);
 return VAR_0;
}
