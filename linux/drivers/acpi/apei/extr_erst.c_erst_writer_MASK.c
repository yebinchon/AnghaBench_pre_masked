
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pstore_record {int type; int id; int compressed; scalar_t__ size; } ;
struct TYPE_5__ {int section_count; int record_id; int flags; int notification_type; int creator_id; scalar_t__ record_length; int timestamp; int validation_bits; void* error_severity; int signature_end; int revision; int signature; } ;
struct TYPE_4__ {int section_offset; void* section_severity; int section_type; int flags; scalar_t__ validation_bits; int revision; scalar_t__ section_length; } ;
struct cper_pstore_record {TYPE_2__ hdr; TYPE_1__ sec_hdr; } ;
struct TYPE_6__ {scalar_t__ buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;


 int FUNC_0 () ;
 TYPE_3__ VAR_15 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct cper_pstore_record*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct pstore_record *VAR_16)
{
 struct cper_pstore_record *VAR_17 = (struct cper_pstore_record *)
     (VAR_15.buf - sizeof(*VAR_17));
 int VAR_18;

 FUNC_4(VAR_17, 0, sizeof(*VAR_17));
 FUNC_3(VAR_17->hdr.signature, VAR_11, VAR_12);
 VAR_17->hdr.revision = VAR_3;
 VAR_17->hdr.signature_end = VAR_10;
 VAR_17->hdr.section_count = 1;
 VAR_17->hdr.error_severity = VAR_9;

 VAR_17->hdr.validation_bits = VAR_13;
 VAR_17->hdr.timestamp = FUNC_2();
 VAR_17->hdr.record_length = sizeof(*VAR_17) + VAR_16->size;
 VAR_17->hdr.creator_id = VAR_0;
 VAR_17->hdr.notification_type = VAR_2;
 VAR_17->hdr.record_id = FUNC_0();
 VAR_17->hdr.flags = VAR_1;

 VAR_17->sec_hdr.section_offset = sizeof(*VAR_17);
 VAR_17->sec_hdr.section_length = VAR_16->size;
 VAR_17->sec_hdr.revision = VAR_8;

 VAR_17->sec_hdr.validation_bits = 0;
 VAR_17->sec_hdr.flags = VAR_7;
 switch (VAR_16->type) {
 case 129:
  if (VAR_16->compressed)
   VAR_17->sec_hdr.section_type = VAR_5;
  else
   VAR_17->sec_hdr.section_type = VAR_4;
  break;
 case 128:
  VAR_17->sec_hdr.section_type = VAR_6;
  break;
 default:
  return -VAR_14;
 }
 VAR_17->sec_hdr.section_severity = VAR_9;

 VAR_18 = FUNC_1(&VAR_17->hdr);
 VAR_16->id = VAR_17->hdr.record_id;

 return VAR_18;
}
