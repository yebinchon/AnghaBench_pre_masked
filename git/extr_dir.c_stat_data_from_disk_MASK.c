
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* nsec; void* sec; } ;
struct TYPE_3__ {void* nsec; void* sec; } ;
struct stat_data {void* sd_size; void* sd_gid; void* sd_uid; void* sd_ino; void* sd_dev; TYPE_2__ sd_mtime; TYPE_1__ sd_ctime; } ;


 int FUNC_0 (struct stat_data*,unsigned char const*,int) ;
 void* FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(struct stat_data *VAR_0, const unsigned char *VAR_1)
{
 FUNC_0(VAR_0, VAR_1, sizeof(*VAR_0));
 VAR_0->sd_ctime.sec = FUNC_1(VAR_0->sd_ctime.sec);
 VAR_0->sd_ctime.nsec = FUNC_1(VAR_0->sd_ctime.nsec);
 VAR_0->sd_mtime.sec = FUNC_1(VAR_0->sd_mtime.sec);
 VAR_0->sd_mtime.nsec = FUNC_1(VAR_0->sd_mtime.nsec);
 VAR_0->sd_dev = FUNC_1(VAR_0->sd_dev);
 VAR_0->sd_ino = FUNC_1(VAR_0->sd_ino);
 VAR_0->sd_uid = FUNC_1(VAR_0->sd_uid);
 VAR_0->sd_gid = FUNC_1(VAR_0->sd_gid);
 VAR_0->sd_size = FUNC_1(VAR_0->sd_size);
}
