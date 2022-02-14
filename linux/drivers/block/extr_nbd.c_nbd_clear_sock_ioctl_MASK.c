
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nbd_device {TYPE_1__* config; } ;
struct block_device {int dummy; } ;
struct TYPE_2__ {int runtime_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct block_device*,int) ;
 int FUNC_1 (struct block_device*) ;
 int FUNC_2 (struct nbd_device*) ;
 int FUNC_3 (struct nbd_device*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct nbd_device *VAR_1,
     struct block_device *VAR_2)
{
 FUNC_3(VAR_1);
 FUNC_0(VAR_2, 1);
 FUNC_1(VAR_2);
 if (FUNC_4(VAR_0,
          &VAR_1->config->runtime_flags))
  FUNC_2(VAR_1);
}
