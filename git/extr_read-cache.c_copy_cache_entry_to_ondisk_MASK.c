
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_10__ {void* nsec; void* sec; } ;
struct TYPE_8__ {void* nsec; void* sec; } ;
struct ondisk_cache_entry {scalar_t__ data; void* size; void* gid; void* uid; void* mode; void* ino; void* dev; TYPE_3__ mtime; TYPE_1__ ctime; } ;
struct TYPE_13__ {int hash; } ;
struct TYPE_11__ {int nsec; int sec; } ;
struct TYPE_9__ {int nsec; int sec; } ;
struct TYPE_12__ {int sd_size; int sd_gid; int sd_uid; int sd_ino; int sd_dev; TYPE_4__ sd_mtime; TYPE_2__ sd_ctime; } ;
struct cache_entry {short ce_flags; TYPE_6__ oid; TYPE_5__ ce_stat_data; int ce_mode; } ;
struct TYPE_14__ {unsigned int rawsz; } ;


 int VAR_0 ;
 int VAR_1 ;
 short VAR_2 ;
 short FUNC_0 (struct cache_entry*) ;
 int FUNC_1 (scalar_t__,int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 TYPE_7__* VAR_3 ;

__attribute__((used)) static void FUNC_4(struct ondisk_cache_entry *VAR_4,
           struct cache_entry *VAR_5)
{
 short VAR_6;
 const unsigned VAR_7 = VAR_3->rawsz;
 uint16_t *VAR_8 = (uint16_t *)(VAR_4->data + VAR_7);

 VAR_4->ctime.sec = FUNC_2(VAR_5->ce_stat_data.sd_ctime.sec);
 VAR_4->mtime.sec = FUNC_2(VAR_5->ce_stat_data.sd_mtime.sec);
 VAR_4->ctime.nsec = FUNC_2(VAR_5->ce_stat_data.sd_ctime.nsec);
 VAR_4->mtime.nsec = FUNC_2(VAR_5->ce_stat_data.sd_mtime.nsec);
 VAR_4->dev = FUNC_2(VAR_5->ce_stat_data.sd_dev);
 VAR_4->ino = FUNC_2(VAR_5->ce_stat_data.sd_ino);
 VAR_4->mode = FUNC_2(VAR_5->ce_mode);
 VAR_4->uid = FUNC_2(VAR_5->ce_stat_data.sd_uid);
 VAR_4->gid = FUNC_2(VAR_5->ce_stat_data.sd_gid);
 VAR_4->size = FUNC_2(VAR_5->ce_stat_data.sd_size);
 FUNC_1(VAR_4->data, VAR_5->oid.hash);

 VAR_6 = VAR_5->ce_flags & ~VAR_2;
 VAR_6 |= (FUNC_0(VAR_5) >= VAR_2 ? VAR_2 : FUNC_0(VAR_5));
 VAR_8[0] = FUNC_3(VAR_6);
 if (VAR_5->ce_flags & VAR_0) {
  VAR_8[1] = FUNC_3((VAR_5->ce_flags & VAR_1) >> 16);
 }
}
