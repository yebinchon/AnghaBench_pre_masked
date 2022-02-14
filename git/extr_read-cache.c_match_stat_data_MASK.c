
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int sec; scalar_t__ nsec; } ;
struct TYPE_3__ {unsigned int sec; scalar_t__ nsec; } ;
struct stat_data {unsigned int sd_uid; unsigned int sd_gid; unsigned int sd_ino; unsigned int sd_dev; unsigned int sd_size; TYPE_2__ sd_ctime; TYPE_1__ sd_mtime; } ;
struct stat {scalar_t__ st_size; scalar_t__ st_dev; scalar_t__ st_ino; scalar_t__ st_gid; scalar_t__ st_uid; scalar_t__ st_ctime; scalar_t__ st_mtime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct stat) ;
 scalar_t__ FUNC_1 (struct stat) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

int FUNC_2(const struct stat_data *VAR_7, struct stat *VAR_8)
{
 int VAR_9 = 0;

 if (VAR_7->sd_mtime.sec != (unsigned int)VAR_8->st_mtime)
  VAR_9 |= VAR_3;
 if (VAR_6 && VAR_5 &&
     VAR_7->sd_ctime.sec != (unsigned int)VAR_8->st_ctime)
  VAR_9 |= VAR_0;
 if (VAR_5) {
  if (VAR_7->sd_uid != (unsigned int) VAR_8->st_uid ||
   VAR_7->sd_gid != (unsigned int) VAR_8->st_gid)
   VAR_9 |= VAR_4;
  if (VAR_7->sd_ino != (unsigned int) VAR_8->st_ino)
   VAR_9 |= VAR_2;
 }
 if (VAR_7->sd_size != (unsigned int) VAR_8->st_size)
  VAR_9 |= VAR_1;

 return VAR_9;
}
