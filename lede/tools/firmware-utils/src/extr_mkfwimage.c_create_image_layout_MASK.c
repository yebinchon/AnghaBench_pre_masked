
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct TYPE_7__ {int partition_index; int partition_baseaddr; scalar_t__ partition_length; int partition_memaddr; int partition_entryaddr; int filename; int partition_name; } ;
typedef TYPE_2__ part_data_t ;
struct TYPE_8__ {int part_count; TYPE_1__* fwinfo; TYPE_2__* parts; } ;
typedef TYPE_3__ image_info_t ;
struct TYPE_9__ {int kern_start; int kern_entry; scalar_t__ firmware_max_length; } ;
typedef TYPE_4__ fw_layout_t ;
struct TYPE_6__ {char* name; TYPE_4__ fw_layout; } ;


 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char const*,int) ;

__attribute__((used)) static int FUNC_4(const char* VAR_0, const char* VAR_1, char* VAR_2, image_info_t* VAR_3)
{
 part_data_t* VAR_4 = &VAR_3->parts[0];
 part_data_t* VAR_5 = &VAR_3->parts[1];

 fw_layout_t* VAR_6 = &VAR_3->fwinfo->fw_layout;

 FUNC_1("board = %s\n", VAR_3->fwinfo->name);
 FUNC_2(VAR_4->partition_name, "kernel");
 VAR_4->partition_index = 1;
 VAR_4->partition_baseaddr = VAR_6->kern_start;
 if ( (VAR_4->partition_length = FUNC_0(VAR_0)) == (u_int32_t)-1) return (-1);
 VAR_4->partition_memaddr = VAR_6->kern_entry;
 VAR_4->partition_entryaddr = VAR_6->kern_entry;
 FUNC_3(VAR_4->filename, VAR_0, sizeof(VAR_4->filename));

 if (FUNC_0(VAR_1) + VAR_4->partition_length > VAR_6->firmware_max_length)
  return (-2);

 FUNC_2(VAR_5->partition_name, "rootfs");
 VAR_5->partition_index = 2;
 VAR_5->partition_baseaddr = VAR_4->partition_baseaddr + VAR_4->partition_length;
 VAR_5->partition_length = VAR_6->firmware_max_length - VAR_4->partition_length;
 VAR_5->partition_memaddr = 0x00000000;
 VAR_5->partition_entryaddr = 0x00000000;
 FUNC_3(VAR_5->filename, VAR_1, sizeof(VAR_5->filename));

 FUNC_1("kernel: %d 0x%08x\n", VAR_4->partition_length, VAR_4->partition_baseaddr);
 FUNC_1("root: %d 0x%08x\n", VAR_5->partition_length, VAR_5->partition_baseaddr);
 VAR_3->part_count = 2;

 return 0;
}
