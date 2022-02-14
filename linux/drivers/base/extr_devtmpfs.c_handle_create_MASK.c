
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int umode_t ;
struct path {struct dentry* dentry; } ;
struct iattr {int ia_valid; int ia_gid; int ia_uid; int ia_mode; } ;
struct device {int devt; } ;
struct dentry {int dummy; } ;
typedef int kuid_t ;
typedef int kgid_t ;
struct TYPE_5__ {int * i_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct dentry* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (char const*) ;
 TYPE_1__* FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct path*,struct dentry*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 struct dentry* FUNC_8 (int ,char const*,struct path*,int ) ;
 int FUNC_9 (struct dentry*,struct iattr*,int *) ;
 int VAR_5 ;
 int FUNC_10 (TYPE_1__*,struct dentry*,int ,int ) ;

__attribute__((used)) static int FUNC_11(const char *VAR_6, umode_t VAR_7, kuid_t VAR_8,
    kgid_t VAR_9, struct device *VAR_10)
{
 struct dentry *VAR_11;
 struct path VAR_12;
 int VAR_13;

 VAR_11 = FUNC_8(VAR_3, VAR_6, &VAR_12, 0);
 if (VAR_11 == FUNC_0(-VAR_4)) {
  FUNC_3(VAR_6);
  VAR_11 = FUNC_8(VAR_3, VAR_6, &VAR_12, 0);
 }
 if (FUNC_1(VAR_11))
  return FUNC_2(VAR_11);

 VAR_13 = FUNC_10(FUNC_4(VAR_12.dentry), VAR_11, VAR_7, VAR_10->devt);
 if (!VAR_13) {
  struct iattr VAR_14;

  VAR_14.ia_mode = VAR_7;
  VAR_14.ia_uid = VAR_8;
  VAR_14.ia_gid = VAR_9;
  VAR_14.ia_valid = VAR_1|VAR_2|VAR_0;
  FUNC_6(FUNC_4(VAR_11));
  FUNC_9(VAR_11, &VAR_14, ((void*)0));
  FUNC_7(FUNC_4(VAR_11));


  FUNC_4(VAR_11)->i_private = &VAR_5;
 }
 FUNC_5(&VAR_12, VAR_11);
 return VAR_13;
}
