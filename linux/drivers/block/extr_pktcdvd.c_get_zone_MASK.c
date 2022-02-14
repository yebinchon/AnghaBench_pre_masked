
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; } ;
struct pktcdvd_device {int offset; TYPE_1__ settings; } ;
typedef int sector_t ;



__attribute__((used)) static sector_t FUNC_0(sector_t VAR_0, struct pktcdvd_device *VAR_1)
{
 return (VAR_0 + VAR_1->offset) & ~(sector_t)(VAR_1->settings.size - 1);
}
