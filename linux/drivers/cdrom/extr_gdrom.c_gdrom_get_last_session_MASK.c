
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lba; } ;
struct cdrom_multisession {int xa_flag; TYPE_1__ addr; int addr_format; } ;
struct cdrom_device_info {int dummy; } ;
struct TYPE_6__ {TYPE_2__* toc; } ;
struct TYPE_5__ {int* entry; int first; int last; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct cdrom_device_info *VAR_4,
 struct cdrom_multisession *VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

 if (!VAR_3.toc)
  return -VAR_1;


 VAR_10 = FUNC_1(VAR_3.toc, 1);

 if (VAR_10) {
  VAR_10 = FUNC_1(VAR_3.toc, 0);
  if (VAR_10) {
   FUNC_5("Could not get CD table of contents\n");
   return -VAR_2;
  }
 }

 VAR_6 = FUNC_4(VAR_3.toc->first);
 VAR_7 = FUNC_4(VAR_3.toc->last);

 VAR_8 = FUNC_4(VAR_3.toc->last);
 do {
  VAR_9 = VAR_3.toc->entry[VAR_8 - 1];
  if (FUNC_3(VAR_9))
   break;
  VAR_8--;
 } while (VAR_8 >= VAR_6);

 if ((VAR_8 > 100) || (VAR_8 < FUNC_4(VAR_3.toc->first))) {
  FUNC_5("No data on the last session of the CD\n");
  FUNC_0(((void*)0));
  return -VAR_2;
 }

 VAR_5->addr_format = VAR_0;
 VAR_5->addr.lba = FUNC_2(VAR_9);
 VAR_5->xa_flag = 1;
 return 0;
}
