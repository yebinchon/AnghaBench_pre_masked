
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {unsigned long init_size; int ramdisk_image; int ramdisk_size; int cmd_line_ptr; } ;
struct TYPE_6__ {TYPE_1__ hdr; scalar_t__ ext_cmd_line_ptr; scalar_t__ ext_ramdisk_size; scalar_t__ ext_ramdisk_image; } ;
struct TYPE_5__ {unsigned long start; unsigned long size; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 TYPE_3__* VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_2__* VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_8, unsigned long VAR_9,
      unsigned long VAR_10)
{
 unsigned long VAR_11 = VAR_5->hdr.init_size;
 u64 VAR_12, VAR_13;
 u64 VAR_14, VAR_15;
 char *VAR_16;





 VAR_6[VAR_3].start = VAR_8;
 VAR_6[VAR_3].size = (VAR_10 + VAR_11) - VAR_8;
 FUNC_0(VAR_6[VAR_3].start,
    VAR_6[VAR_3].size);


 VAR_12 = (u64)VAR_5->ext_ramdisk_image << 32;
 VAR_12 |= VAR_5->hdr.ramdisk_image;
 VAR_13 = (u64)VAR_5->ext_ramdisk_size << 32;
 VAR_13 |= VAR_5->hdr.ramdisk_size;
 VAR_6[VAR_2].start = VAR_12;
 VAR_6[VAR_2].size = VAR_13;



 VAR_14 = (u64)VAR_5->ext_cmd_line_ptr << 32;
 VAR_14 |= VAR_5->hdr.cmd_line_ptr;

 VAR_16 = (char *)(unsigned long)VAR_14;
 for (VAR_15 = 0; VAR_16[VAR_15++];)
  ;
 VAR_6[VAR_1].start = VAR_14;
 VAR_6[VAR_1].size = VAR_15;
 FUNC_0(VAR_6[VAR_1].start,
    VAR_6[VAR_1].size);


 VAR_6[VAR_0].start = (unsigned long)VAR_5;
 VAR_6[VAR_0].size = sizeof(*VAR_5);
 FUNC_0(VAR_6[VAR_0].start,
    VAR_6[VAR_0].size);




 FUNC_2();


 VAR_7 = FUNC_1();





}
