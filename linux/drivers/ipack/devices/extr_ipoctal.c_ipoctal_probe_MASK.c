
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipoctal {struct ipack_device* dev; } ;
struct ipack_device {int dev; int slot; TYPE_1__* bus; } ;
struct TYPE_2__ {int bus_nr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct ipoctal*) ;
 int FUNC_1 (struct ipoctal*,int ,int ) ;
 int FUNC_2 (struct ipoctal*) ;
 struct ipoctal* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct ipack_device *VAR_2)
{
 int VAR_3;
 struct ipoctal *VAR_4;

 VAR_4 = FUNC_3(sizeof(struct ipoctal), VAR_1);
 if (VAR_4 == ((void*)0))
  return -VAR_0;

 VAR_4->dev = VAR_2;
 VAR_3 = FUNC_1(VAR_4, VAR_2->bus->bus_nr, VAR_2->slot);
 if (VAR_3)
  goto out_uninst;

 FUNC_0(&VAR_2->dev, VAR_4);
 return 0;

out_uninst:
 FUNC_2(VAR_4);
 return VAR_3;
}
