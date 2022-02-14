
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int st_size; } ;
struct TYPE_6__ {int partition_length; TYPE_1__ stats; int partition_name; } ;
typedef TYPE_2__ part_data_t ;
struct TYPE_7__ {int outputfile; int part_count; TYPE_2__* parts; int version; } ;
typedef TYPE_3__ image_info_t ;


 int FUNC_0 (char*,int ,int,int) ;

__attribute__((used)) static void FUNC_1(const image_info_t* VAR_0)
{
 int VAR_1 = 0;
 FUNC_0("Firmware version: '%s'\n"
      "Output file: '%s'\n"
      "Part count: %u\n",
      VAR_0->version, VAR_0->outputfile,
      VAR_0->part_count);

 for (VAR_1 = 0; VAR_1 < VAR_0->part_count; ++VAR_1)
 {
  const part_data_t* VAR_2 = &VAR_0->parts[VAR_1];
  FUNC_0(" %10s: %8ld bytes (free: %8ld)\n",
       VAR_2->partition_name,
       VAR_2->stats.st_size,
       VAR_2->partition_length - VAR_2->stats.st_size);
 }
}
