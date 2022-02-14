
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssi_protocol {int netdev; int link; } ;
struct hsi_client {int dummy; } ;
struct device {int dummy; } ;


 struct ssi_protocol* FUNC_0 (struct hsi_client*) ;
 int FUNC_1 (struct hsi_client*,int *) ;
 int FUNC_2 (struct ssi_protocol*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ssi_protocol*) ;
 struct hsi_client* FUNC_5 (struct device*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_0)
{
 struct hsi_client *VAR_1 = FUNC_5(VAR_0);
 struct ssi_protocol *VAR_2 = FUNC_0(VAR_1);

 FUNC_3(&VAR_2->link);
 FUNC_6(VAR_2->netdev);
 FUNC_4(VAR_2);
 FUNC_1(VAR_1, ((void*)0));
 FUNC_2(VAR_2);

 return 0;
}
