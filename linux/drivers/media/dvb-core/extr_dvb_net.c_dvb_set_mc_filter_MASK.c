
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct dvb_net_priv {size_t multi_num; int * multi_macs; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,unsigned char*,int ) ;
 struct dvb_net_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3, unsigned char *VAR_4)
{
 struct dvb_net_priv *VAR_5 = FUNC_1(VAR_3);

 if (VAR_5->multi_num == VAR_0)
  return -VAR_1;

 FUNC_0(VAR_5->multi_macs[VAR_5->multi_num], VAR_4, VAR_2);

 VAR_5->multi_num++;
 return 0;
}
