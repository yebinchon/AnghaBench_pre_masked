
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsi_slave {int dev; } ;
struct TYPE_2__ {int release; int * bus; int * parent; } ;
struct fsi_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct fsi_device* FUNC_0 (int,int ) ;

__attribute__((used)) static struct fsi_device *FUNC_1(struct fsi_slave *VAR_3)
{
 struct fsi_device *VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->dev.parent = &VAR_3->dev;
 VAR_4->dev.bus = &VAR_1;
 VAR_4->dev.release = VAR_2;

 return VAR_4;
}
