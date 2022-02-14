
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct net_device {int if_flags; } ;
struct ib_device {struct net_device* (* get_netdev ) (struct ib_device*,scalar_t__) ;} ;
typedef scalar_t__ (* roce_netdev_filter ) (struct ib_device*,scalar_t__,struct net_device*,void*) ;
typedef int (* roce_netdev_callback ) (struct ib_device*,scalar_t__,struct net_device*,void*) ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct ib_device*) ;
 scalar_t__ FUNC_2 (struct ib_device*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct ib_device*) ;
 struct net_device* FUNC_4 (struct ib_device*,scalar_t__) ;

void FUNC_5(struct ib_device *VAR_1,
    roce_netdev_filter VAR_2,
    void *VAR_3,
    roce_netdev_callback VAR_4,
    void *VAR_5)
{
 u8 VAR_6;

 for (VAR_6 = FUNC_3(VAR_1); VAR_6 <= FUNC_1(VAR_1);
      VAR_6++)
  if (FUNC_2(VAR_1, VAR_6)) {
   struct net_device *VAR_7 = ((void*)0);

   if (VAR_1->get_netdev)
    VAR_7 = VAR_1->get_netdev(VAR_1, VAR_6);

   if (VAR_7 && (VAR_7->if_flags & VAR_0)) {
    FUNC_0(VAR_7);
    VAR_7 = ((void*)0);
   }

   if (VAR_2(VAR_1, VAR_6, VAR_7, VAR_3))
    VAR_4(VAR_1, VAR_6, VAR_7, VAR_5);

   if (VAR_7)
    FUNC_0(VAR_7);
  }
}
