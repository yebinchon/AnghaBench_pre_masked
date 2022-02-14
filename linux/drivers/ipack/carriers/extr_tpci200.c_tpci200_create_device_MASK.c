
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tpci200_board {scalar_t__* mod_mem; TYPE_1__* info; } ;
struct ipack_device {int slot; TYPE_2__* region; int release; int bus; } ;
typedef enum ipack_space { ____Placeholder_ipack_space } ipack_space ;
struct TYPE_4__ {int size; scalar_t__ start; } ;
struct TYPE_3__ {int ipack_bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ipack_device*) ;
 int FUNC_1 (struct ipack_device*) ;
 int FUNC_2 (struct ipack_device*) ;
 struct ipack_device* FUNC_3 (int,int ) ;
 int VAR_3 ;
 int* VAR_4 ;
 int * VAR_5 ;

__attribute__((used)) static int FUNC_4(struct tpci200_board *VAR_6, int VAR_7)
{
 int VAR_8;
 enum ipack_space VAR_9;
 struct ipack_device *VAR_10 =
  FUNC_3(sizeof(struct ipack_device), VAR_1);
 if (!VAR_10)
  return -VAR_0;
 VAR_10->slot = VAR_7;
 VAR_10->bus = VAR_6->info->ipack_bus;
 VAR_10->release = VAR_3;

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  VAR_10->region[VAR_9].start =
   VAR_6->mod_mem[VAR_9]
   + VAR_4[VAR_9] * VAR_7;
  VAR_10->region[VAR_9].size = VAR_5[VAR_9];
 }

 VAR_8 = FUNC_1(VAR_10);
 if (VAR_8 < 0) {
  FUNC_2(VAR_10);
  return VAR_8;
 }

 VAR_8 = FUNC_0(VAR_10);
 if (VAR_8 < 0)
  FUNC_2(VAR_10);

 return VAR_8;
}
