
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int timeout; } ;
struct em_i2c_device {scalar_t__ base; TYPE_1__ adap; int msg_done; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 unsigned long FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(struct em_i2c_device *VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;

 FUNC_1(&VAR_4->msg_done);

 VAR_5 = FUNC_2(&VAR_4->msg_done, VAR_4->adap.timeout);

 if (!VAR_5)
  return -VAR_1;

 VAR_6 = FUNC_0(VAR_4->base + VAR_3);
 return VAR_6 & VAR_2 ? -VAR_0 : VAR_6;
}
