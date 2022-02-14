
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sec; int nsec; } ;
struct TYPE_3__ {int sec; int nsec; } ;
struct stat_data {int sd_dev; int sd_ino; int sd_uid; int sd_gid; int sd_size; TYPE_2__ sd_mtime; TYPE_1__ sd_ctime; } ;
struct cache_entry {int ce_flags; struct stat_data ce_stat_data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int,int) ;

__attribute__((used)) static void FUNC_1(const struct cache_entry *VAR_1)
{
 if (VAR_0) {
  const struct stat_data *VAR_2 = &VAR_1->ce_stat_data;

  FUNC_0("  ctime: %u:%u\n", VAR_2->sd_ctime.sec, VAR_2->sd_ctime.nsec);
  FUNC_0("  mtime: %u:%u\n", VAR_2->sd_mtime.sec, VAR_2->sd_mtime.nsec);
  FUNC_0("  dev: %u\tino: %u\n", VAR_2->sd_dev, VAR_2->sd_ino);
  FUNC_0("  uid: %u\tgid: %u\n", VAR_2->sd_uid, VAR_2->sd_gid);
  FUNC_0("  size: %u\tflags: %x\n", VAR_2->sd_size, VAR_1->ce_flags);
 }
}
