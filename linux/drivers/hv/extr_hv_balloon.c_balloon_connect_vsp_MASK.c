
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct hv_device {int channel; } ;
struct TYPE_8__ {int balloon; int hot_add; int hot_add_alignment; } ;
struct TYPE_9__ {TYPE_3__ cap_bits; } ;
struct TYPE_7__ {int size; void* trans_id; int type; } ;
struct TYPE_6__ {int version; } ;
struct dm_version_request {int max_page_number; scalar_t__ min_page_cnt; TYPE_4__ caps; TYPE_2__ hdr; TYPE_1__ version; scalar_t__ is_last_attempt; } ;
struct dm_capabilities {int max_page_number; scalar_t__ min_page_cnt; TYPE_4__ caps; TYPE_2__ hdr; TYPE_1__ version; scalar_t__ is_last_attempt; } ;
struct TYPE_10__ {scalar_t__ state; int host_event; int version; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_2 (int *) ;
 int VAR_8 ;
 TYPE_5__ VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct dm_version_request*,int ,int) ;
 int FUNC_4 (char*,int ,int ) ;
 int VAR_11 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,int *,int ,int ,struct hv_device*) ;
 int FUNC_7 (int ,struct dm_version_request*,int,unsigned long,int ,int ) ;
 unsigned long FUNC_8 (int *,int) ;

__attribute__((used)) static int FUNC_9(struct hv_device *VAR_12)
{
 struct dm_version_request VAR_13;
 struct dm_capabilities VAR_14;
 unsigned long VAR_15;
 int VAR_16;

 VAR_16 = FUNC_6(VAR_12->channel, VAR_10, VAR_10, ((void*)0), 0,
    VAR_8, VAR_12);
 if (VAR_16)
  return VAR_16;







 FUNC_3(&VAR_13, 0, sizeof(struct dm_version_request));
 VAR_13.hdr.type = VAR_2;
 VAR_13.hdr.size = sizeof(struct dm_version_request);
 VAR_13.hdr.trans_id = FUNC_2(&VAR_11);
 VAR_13.version.version = VAR_3;
 VAR_13.is_last_attempt = 0;
 VAR_9.version = VAR_13.version.version;

 VAR_16 = FUNC_7(VAR_12->channel, &VAR_13,
          sizeof(struct dm_version_request),
          (unsigned long)((void*)0), VAR_7, 0);
 if (VAR_16)
  goto out;

 VAR_15 = FUNC_8(&VAR_9.host_event, 5*VAR_6);
 if (VAR_15 == 0) {
  VAR_16 = -VAR_5;
  goto out;
 }





 if (VAR_9.state == VAR_1) {
  VAR_16 = -VAR_4;
  goto out;
 }

 FUNC_4("Using Dynamic Memory protocol version %u.%u\n",
  FUNC_0(VAR_9.version),
  FUNC_1(VAR_9.version));




 FUNC_3(&VAR_14, 0, sizeof(struct dm_capabilities));
 VAR_14.hdr.type = VAR_0;
 VAR_14.hdr.size = sizeof(struct dm_capabilities);
 VAR_14.hdr.trans_id = FUNC_2(&VAR_11);

 VAR_14.caps.cap_bits.balloon = 1;
 VAR_14.caps.cap_bits.hot_add = 1;





 VAR_14.caps.cap_bits.hot_add_alignment = 7;






 VAR_14.min_page_cnt = 0;
 VAR_14.max_page_number = -1;

 VAR_16 = FUNC_7(VAR_12->channel, &VAR_14,
          sizeof(struct dm_capabilities),
          (unsigned long)((void*)0), VAR_7, 0);
 if (VAR_16)
  goto out;

 VAR_15 = FUNC_8(&VAR_9.host_event, 5*VAR_6);
 if (VAR_15 == 0) {
  VAR_16 = -VAR_5;
  goto out;
 }





 if (VAR_9.state == VAR_1) {
  VAR_16 = -VAR_4;
  goto out;
 }

 return 0;
out:
 FUNC_5(VAR_12->channel);
 return VAR_16;
}
