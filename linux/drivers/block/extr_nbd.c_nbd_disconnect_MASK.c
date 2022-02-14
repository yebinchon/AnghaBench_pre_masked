
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nbd_device {int flags; int disk; struct nbd_config* config; } ;
struct nbd_config {int runtime_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nbd_device*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct nbd_device *VAR_2)
{
 struct nbd_config *VAR_3 = VAR_2->config;

 FUNC_0(FUNC_1(VAR_2->disk), "NBD_DISCONNECT\n");
 FUNC_3(VAR_1, &VAR_3->runtime_flags);
 FUNC_3(VAR_0, &VAR_2->flags);
 FUNC_2(VAR_2);
 return 0;
}
