
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssi_protocol {int netdev; } ;
struct hsi_client {int dummy; } ;


 struct ssi_protocol* FUNC_0 (struct hsi_client*) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct hsi_client *VAR_0)
{
 struct ssi_protocol *VAR_1 = FUNC_0(VAR_0);
 return FUNC_1(VAR_1->netdev);
}
