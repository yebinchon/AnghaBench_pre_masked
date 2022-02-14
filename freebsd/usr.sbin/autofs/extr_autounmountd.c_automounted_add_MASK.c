
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct automounted_fs {int af_mountpoint; int af_fsid; int af_mount_time; } ;
typedef int fsid_t ;


 int FUNC_0 (int *,struct automounted_fs*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct automounted_fs* FUNC_1 (int,int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ,char const*,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct automounted_fs *
FUNC_5(fsid_t VAR_2, const char *VAR_3)
{
 struct automounted_fs *VAR_4;

 VAR_4 = FUNC_1(1, sizeof(*VAR_4));
 if (VAR_4 == ((void*)0))
  FUNC_2(1, "calloc");
 VAR_4->af_mount_time = FUNC_4(((void*)0));
 VAR_4->af_fsid = VAR_2;
 FUNC_3(VAR_4->af_mountpoint, VAR_3, sizeof(VAR_4->af_mountpoint));

 FUNC_0(&VAR_1, VAR_4, VAR_0);

 return (VAR_4);
}
