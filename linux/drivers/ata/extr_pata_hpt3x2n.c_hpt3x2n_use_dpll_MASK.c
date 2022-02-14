
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_port {TYPE_1__* host; } ;
struct TYPE_2__ {scalar_t__ private_data; } ;


 long VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct ata_port *VAR_2, int VAR_3)
{
 long VAR_4 = (long)VAR_2->host->private_data;


 if (VAR_3)
  return VAR_1;
 if (VAR_4 & VAR_0)
  return VAR_1;
 return 0;
}
