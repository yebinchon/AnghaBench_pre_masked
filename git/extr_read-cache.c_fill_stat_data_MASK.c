
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int sec; int nsec; } ;
struct TYPE_3__ {unsigned int sec; int nsec; } ;
struct stat_data {int sd_size; int sd_gid; int sd_uid; int sd_ino; int sd_dev; TYPE_2__ sd_mtime; TYPE_1__ sd_ctime; } ;
struct stat {int st_size; int st_gid; int st_uid; int st_ino; int st_dev; scalar_t__ st_mtime; scalar_t__ st_ctime; } ;


 int FUNC_0 (struct stat) ;
 int FUNC_1 (struct stat) ;

void FUNC_2(struct stat_data *VAR_0, struct stat *VAR_1)
{
 VAR_0->sd_ctime.sec = (unsigned int)VAR_1->st_ctime;
 VAR_0->sd_mtime.sec = (unsigned int)VAR_1->st_mtime;
 VAR_0->sd_ctime.nsec = FUNC_0(*VAR_1);
 VAR_0->sd_mtime.nsec = FUNC_1(*VAR_1);
 VAR_0->sd_dev = VAR_1->st_dev;
 VAR_0->sd_ino = VAR_1->st_ino;
 VAR_0->sd_uid = VAR_1->st_uid;
 VAR_0->sd_gid = VAR_1->st_gid;
 VAR_0->sd_size = VAR_1->st_size;
}
