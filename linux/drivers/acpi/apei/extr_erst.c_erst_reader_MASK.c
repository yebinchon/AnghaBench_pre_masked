
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_6__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct pstore_record {int compressed; TYPE_2__ time; void* type; scalar_t__ ecc_notice_size; scalar_t__ id; int * buf; } ;
struct TYPE_7__ {int validation_bits; int timestamp; int creator_id; } ;
struct TYPE_5__ {int section_type; } ;
struct cper_pstore_record {TYPE_3__ hdr; TYPE_1__ sec_hdr; int data; } ;
typedef int ssize_t ;
struct TYPE_8__ {int bufsize; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (int *,scalar_t__*) ;
 TYPE_4__ VAR_16 ;
 int FUNC_1 (scalar_t__,TYPE_3__*,size_t) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (struct cper_pstore_record*) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int ,int) ;
 int VAR_17 ;

__attribute__((used)) static ssize_t FUNC_6(struct pstore_record *VAR_18)
{
 int VAR_19;
 ssize_t VAR_20 = 0;
 u64 VAR_21;
 struct cper_pstore_record *VAR_22;
 size_t VAR_23 = sizeof(*VAR_22) + VAR_16.bufsize;

 if (VAR_15)
  return -VAR_8;

 VAR_22 = FUNC_4(VAR_23, VAR_11);
 if (!VAR_22) {
  VAR_19 = -VAR_10;
  goto out;
 }
skip:
 VAR_19 = FUNC_0(&VAR_17, &VAR_21);
 if (VAR_19)
  goto out;


 if (VAR_21 == VAR_0) {
  VAR_19 = -VAR_6;
  goto out;
 }

 VAR_20 = FUNC_1(VAR_21, &VAR_22->hdr, VAR_23);

 if (VAR_20 == -VAR_9)
  goto skip;
 else if (VAR_20 < 0 || VAR_20 < sizeof(*VAR_22)) {
  VAR_19 = -VAR_7;
  goto out;
 }
 if (!FUNC_2(&VAR_22->hdr.creator_id, &VAR_1))
  goto skip;

 VAR_18->buf = FUNC_4(VAR_20, VAR_11);
 if (VAR_18->buf == ((void*)0)) {
  VAR_19 = -VAR_10;
  goto out;
 }
 FUNC_5(VAR_18->buf, VAR_22->data, VAR_20 - sizeof(*VAR_22));
 VAR_18->id = VAR_21;
 VAR_18->compressed = 0;
 VAR_18->ecc_notice_size = 0;
 if (FUNC_2(&VAR_22->sec_hdr.section_type, &VAR_3)) {
  VAR_18->type = VAR_12;
  VAR_18->compressed = 1;
 } else if (FUNC_2(&VAR_22->sec_hdr.section_type, &VAR_2))
  VAR_18->type = VAR_12;
 else if (FUNC_2(&VAR_22->sec_hdr.section_type, &VAR_4))
  VAR_18->type = VAR_14;
 else
  VAR_18->type = VAR_13;

 if (VAR_22->hdr.validation_bits & VAR_5)
  VAR_18->time.tv_sec = VAR_22->hdr.timestamp;
 else
  VAR_18->time.tv_sec = 0;
 VAR_18->time.tv_nsec = 0;

out:
 FUNC_3(VAR_22);
 return (VAR_19 < 0) ? VAR_19 : (VAR_20 - sizeof(*VAR_22));
}
