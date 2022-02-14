
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cdrom_ti {scalar_t__ cdti_trk0; scalar_t__ cdti_trk1; } ;
struct TYPE_2__ {unsigned long lba; } ;
struct atapi_toc_entry {TYPE_1__ addr; } ;
typedef int ide_drive_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_0 (int *,scalar_t__,struct atapi_toc_entry**) ;
 int FUNC_1 (int *,unsigned char*,int ,int *,int *,int *,int ,int ) ;
 int FUNC_2 (unsigned long,unsigned char*,unsigned char*,unsigned char*) ;
 int FUNC_3 (unsigned char*,int ,int) ;

__attribute__((used)) static int FUNC_4(ide_drive_t *VAR_4, void *VAR_5)
{
 struct cdrom_ti *VAR_6 = VAR_5;
 struct atapi_toc_entry *VAR_7, *VAR_8;
 unsigned long VAR_9, VAR_10;
 int VAR_11;
 unsigned char VAR_12[VAR_0];

 VAR_11 = FUNC_0(VAR_4, VAR_6->cdti_trk0, &VAR_7);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_0(VAR_4, VAR_6->cdti_trk1, &VAR_8);
 if (VAR_11)
  return VAR_11;

 if (VAR_6->cdti_trk1 != VAR_1)
  ++VAR_8;
 VAR_9 = VAR_7->addr.lba;
 VAR_10 = VAR_8->addr.lba;

 if (VAR_10 <= VAR_9)
  return -VAR_2;

 FUNC_3(VAR_12, 0, VAR_0);

 VAR_12[0] = VAR_3;
 FUNC_2(VAR_9, &VAR_12[3], &VAR_12[4], &VAR_12[5]);
 FUNC_2(VAR_10 - 1, &VAR_12[6], &VAR_12[7], &VAR_12[8]);

 return FUNC_1(VAR_4, VAR_12, 0, ((void*)0), ((void*)0), ((void*)0), 0, 0);
}
