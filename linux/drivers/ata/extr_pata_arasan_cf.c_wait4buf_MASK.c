
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct arasan_cf_dev {int dma_status; TYPE_3__* host; TYPE_2__* qc; int cf_completion; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_5__ {TYPE_1__ tf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static inline int FUNC_2(struct arasan_cf_dev *VAR_5)
{
 if (!FUNC_1(&VAR_5->cf_completion, VAR_4)) {
  u32 VAR_6 = VAR_5->qc->tf.flags & VAR_1;

  FUNC_0(VAR_5->host->dev, "%s TimeOut", VAR_6 ? "write" : "read");
  return -VAR_3;
 }


 if (VAR_5->dma_status & VAR_0)
  return -VAR_2;

 return 0;
}
