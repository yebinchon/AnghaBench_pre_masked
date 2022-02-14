
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union dm_mem_page_range {int dummy; } dm_mem_page_range ;
struct hv_dynmem_device {unsigned int num_pages_ballooned; int state; } ;
struct TYPE_4__ {int size; int trans_id; int type; } ;
struct dm_unballoon_response {TYPE_1__ hdr; } ;
struct dm_unballoon_request {int range_count; int more_pages; union dm_mem_page_range* range_array; } ;
struct TYPE_6__ {TYPE_2__* dev; int config_event; } ;
struct TYPE_5__ {int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_3__ VAR_3 ;
 int FUNC_2 (struct hv_dynmem_device*,union dm_mem_page_range*) ;
 int FUNC_3 (struct dm_unballoon_response*,int ,int) ;
 int FUNC_4 (char*,unsigned int) ;
 int VAR_4 ;
 int FUNC_5 (int ,struct dm_unballoon_response*,int,unsigned long,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct hv_dynmem_device *VAR_5,
   struct dm_unballoon_request *VAR_6)
{
 union dm_mem_page_range *VAR_7 = VAR_6->range_array;
 int VAR_8 = VAR_6->range_count;
 struct dm_unballoon_response VAR_9;
 int VAR_10;
 unsigned int VAR_11 = VAR_5->num_pages_ballooned;

 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
  FUNC_2(VAR_5, &VAR_7[VAR_10]);
  FUNC_1(&VAR_3.config_event);
 }

 FUNC_4("Freed %u ballooned pages.\n",
  VAR_11 - VAR_5->num_pages_ballooned);

 if (VAR_6->more_pages == 1)
  return;

 FUNC_3(&VAR_9, 0, sizeof(struct dm_unballoon_response));
 VAR_9.hdr.type = VAR_1;
 VAR_9.hdr.trans_id = FUNC_0(&VAR_4);
 VAR_9.hdr.size = sizeof(struct dm_unballoon_response);

 FUNC_5(VAR_3.dev->channel, &VAR_9,
    sizeof(struct dm_unballoon_response),
    (unsigned long)((void*)0),
    VAR_2, 0);

 VAR_5->state = VAR_0;
}
