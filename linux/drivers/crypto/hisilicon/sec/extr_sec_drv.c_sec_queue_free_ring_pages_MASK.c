
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int paddr; int vaddr; } ;
struct TYPE_8__ {int paddr; int vaddr; } ;
struct TYPE_7__ {int paddr; int vaddr; } ;
struct sec_queue {TYPE_1__ ring_cmd; TYPE_4__ ring_cq; TYPE_3__ ring_db; TYPE_2__* dev_info; } ;
struct device {int dummy; } ;
struct TYPE_6__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct sec_queue *VAR_3)
{
 struct device *VAR_4 = VAR_3->dev_info->dev;

 FUNC_0(VAR_4, VAR_2, VAR_3->ring_db.vaddr,
     VAR_3->ring_db.paddr);
 FUNC_0(VAR_4, VAR_1, VAR_3->ring_cq.vaddr,
     VAR_3->ring_cq.paddr);
 FUNC_0(VAR_4, VAR_0, VAR_3->ring_cmd.vaddr,
     VAR_3->ring_cmd.paddr);
}
