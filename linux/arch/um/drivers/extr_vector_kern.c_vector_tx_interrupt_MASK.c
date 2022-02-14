
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vector_private {int tx_poll; scalar_t__ in_write_poll; } ;
struct net_device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct vector_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct net_device *VAR_4 = VAR_3;
 struct vector_private *VAR_5 = FUNC_0(VAR_4);

 if (!FUNC_1(VAR_4))
  return VAR_1;







 if (VAR_5->in_write_poll)
  FUNC_2(&VAR_5->tx_poll);
 return VAR_0;

}
