
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long u8 ;
struct TYPE_4__ {int host_flags; int channel; scalar_t__ hwif_data; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_5__ {int dn; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;

__attribute__((used)) static inline unsigned long FUNC_0(ide_drive_t *VAR_1, int VAR_2)
{
 ide_hwif_t *VAR_3 = VAR_1->hwif;
 unsigned long VAR_4 = (unsigned long)VAR_3->hwif_data;
 u8 VAR_5 = VAR_1->dn & 1;

 VAR_4 += 0xA0 + VAR_2;
 if (VAR_3->host_flags & VAR_0)
  VAR_4 += VAR_3->channel << 6;
 else
  VAR_4 += VAR_3->channel << 4;
 VAR_4 |= VAR_5 << VAR_5;
 return VAR_4;
}
