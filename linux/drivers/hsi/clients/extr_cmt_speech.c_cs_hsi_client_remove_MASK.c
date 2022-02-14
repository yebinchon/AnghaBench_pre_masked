
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct cs_hsi_iface {int dummy; } ;
struct TYPE_2__ {int lock; struct cs_hsi_iface* hi; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cs_hsi_iface*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_2)
{
 struct cs_hsi_iface *VAR_3;

 FUNC_1(VAR_2, "hsi_client_remove\n");
 FUNC_2(&VAR_1);
 FUNC_3(&VAR_0.lock);
 VAR_3 = VAR_0.hi;
 VAR_0.hi = ((void*)0);
 FUNC_4(&VAR_0.lock);
 if (VAR_3)
  FUNC_0(VAR_3);

 return 0;
}
