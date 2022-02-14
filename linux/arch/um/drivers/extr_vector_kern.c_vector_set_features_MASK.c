
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vector_private {int req_size; int max_packet; int headroom; } ;
struct net_device {int dummy; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct vector_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_2,
 netdev_features_t VAR_3)
{
 struct vector_private *VAR_4 = FUNC_0(VAR_2);




 if (VAR_3 & VAR_0)

  VAR_4->req_size = 65536;
 else

  VAR_4->req_size = VAR_4->max_packet + VAR_4->headroom + VAR_1;
 return 0;
}
