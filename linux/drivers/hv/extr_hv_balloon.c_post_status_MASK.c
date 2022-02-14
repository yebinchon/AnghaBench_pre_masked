
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hv_dynmem_device {scalar_t__ num_pages_added; scalar_t__ num_pages_onlined; TYPE_2__* dev; scalar_t__ num_pages_ballooned; } ;
struct TYPE_3__ {int size; scalar_t__ trans_id; int type; } ;
struct dm_status {TYPE_1__ hdr; scalar_t__ num_committed; int num_avail; } ;
struct TYPE_4__ {int channel; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_3 (struct dm_status*,int ,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 (unsigned long,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_6 ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int ,struct dm_status*,int,unsigned long,int ,int ) ;

__attribute__((used)) static void FUNC_9(struct hv_dynmem_device *VAR_7)
{
 struct dm_status VAR_8;
 unsigned long VAR_9 = VAR_3;
 unsigned long VAR_10 = VAR_4;

 if (VAR_5 > 0) {
  --VAR_5;
  return;
 }

 if (!FUNC_5(VAR_9, (VAR_4 + VAR_1)))
  return;

 FUNC_3(&VAR_8, 0, sizeof(struct dm_status));
 VAR_8.hdr.type = VAR_0;
 VAR_8.hdr.size = sizeof(struct dm_status);
 VAR_8.hdr.trans_id = FUNC_0(&VAR_6);
 VAR_8.num_avail = FUNC_4();
 VAR_8.num_committed = FUNC_7() +
  VAR_7->num_pages_ballooned +
  (VAR_7->num_pages_added > VAR_7->num_pages_onlined ?
   VAR_7->num_pages_added - VAR_7->num_pages_onlined : 0) +
  FUNC_2();

 FUNC_6(VAR_8.num_avail, VAR_8.num_committed,
        FUNC_7(), VAR_7->num_pages_ballooned,
        VAR_7->num_pages_added, VAR_7->num_pages_onlined);





 if (VAR_8.hdr.trans_id != FUNC_1(&VAR_6))
  return;





 if (VAR_10 != VAR_4)
  return;

 VAR_4 = VAR_3;
 FUNC_8(VAR_7->dev->channel, &VAR_8,
    sizeof(struct dm_status),
    (unsigned long)((void*)0),
    VAR_2, 0);

}
