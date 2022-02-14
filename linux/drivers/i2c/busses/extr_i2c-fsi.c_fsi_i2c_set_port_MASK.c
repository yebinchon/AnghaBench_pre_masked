
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fsi_i2c_port {scalar_t__ port; TYPE_1__* master; } ;
struct fsi_device {int dummy; } ;
struct TYPE_2__ {struct fsi_device* fsi; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct fsi_device*,int ,int*) ;
 int FUNC_3 (struct fsi_device*,int ,int*) ;

__attribute__((used)) static int FUNC_4(struct fsi_i2c_port *VAR_3)
{
 int VAR_4;
 struct fsi_device *VAR_5 = VAR_3->master->fsi;
 u32 VAR_6, VAR_7 = 0;

 VAR_4 = FUNC_2(VAR_5, VAR_0, &VAR_6);
 if (VAR_4)
  return VAR_4;

 if (FUNC_0(VAR_2, VAR_6) == VAR_3->port)
  return 0;

 VAR_6 = (VAR_6 & ~VAR_2) | FUNC_1(VAR_2, VAR_3->port);
 VAR_4 = FUNC_3(VAR_5, VAR_0, &VAR_6);
 if (VAR_4)
  return VAR_4;


 return FUNC_3(VAR_5, VAR_1, &VAR_7);
}
