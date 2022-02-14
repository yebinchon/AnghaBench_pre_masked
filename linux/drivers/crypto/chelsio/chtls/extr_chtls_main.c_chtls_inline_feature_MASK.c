
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tls_device {int dummy; } ;
struct net_device {int features; } ;
struct chtls_dev {struct net_device** ports; TYPE_1__* lldi; } ;
struct TYPE_2__ {int nports; } ;


 int VAR_0 ;
 struct chtls_dev* FUNC_0 (struct tls_device*) ;

__attribute__((used)) static int FUNC_1(struct tls_device *VAR_1)
{
 struct net_device *VAR_2;
 struct chtls_dev *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_1);

 for (VAR_4 = 0; VAR_4 < VAR_3->lldi->nports; VAR_4++) {
  VAR_2 = VAR_3->ports[VAR_4];
  if (VAR_2->features & VAR_0)
   return 1;
 }
 return 0;
}
