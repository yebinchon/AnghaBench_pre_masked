
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct saa7146_dev* dev; int timeout; int queue; } ;
struct saa7146_vv {int vbi_wq; TYPE_1__ vbi_dmaq; } ;
struct saa7146_dev {int dummy; } ;


 int FUNC_0 (char*,struct saa7146_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct saa7146_dev *VAR_1, struct saa7146_vv *VAR_2)
{
 FUNC_0("dev:%p\n", VAR_1);

 FUNC_1(&VAR_2->vbi_dmaq.queue);

 FUNC_3(&VAR_2->vbi_dmaq.timeout, VAR_0, 0);
 VAR_2->vbi_dmaq.dev = VAR_1;

 FUNC_2(&VAR_2->vbi_wq);
}
