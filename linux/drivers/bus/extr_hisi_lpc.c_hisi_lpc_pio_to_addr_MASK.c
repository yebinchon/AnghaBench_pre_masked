
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hisi_lpc_dev {TYPE_1__* io_host; } ;
struct TYPE_2__ {unsigned long io_start; unsigned long hw_start; } ;



__attribute__((used)) static unsigned long FUNC_0(struct hisi_lpc_dev *VAR_0,
       unsigned long VAR_1)
{
 return VAR_1 - VAR_0->io_host->io_start + VAR_0->io_host->hw_start;
}
