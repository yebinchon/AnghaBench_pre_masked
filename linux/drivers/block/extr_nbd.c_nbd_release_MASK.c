
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nbd_device {TYPE_1__* config; } ;
struct gendisk {struct nbd_device* private_data; } ;
struct block_device {scalar_t__ bd_openers; } ;
typedef int fmode_t ;
struct TYPE_2__ {int runtime_flags; } ;


 int VAR_0 ;
 struct block_device* FUNC_0 (struct gendisk*,int ) ;
 int FUNC_1 (struct nbd_device*) ;
 int FUNC_2 (struct nbd_device*) ;
 int FUNC_3 (struct nbd_device*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct gendisk *VAR_1, fmode_t VAR_2)
{
 struct nbd_device *VAR_3 = VAR_1->private_data;
 struct block_device *VAR_4 = FUNC_0(VAR_1, 0);

 if (FUNC_4(VAR_0, &VAR_3->config->runtime_flags) &&
   VAR_4->bd_openers == 0)
  FUNC_2(VAR_3);

 FUNC_1(VAR_3);
 FUNC_3(VAR_3);
}
