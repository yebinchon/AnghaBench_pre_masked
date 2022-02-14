
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {struct dentry* dentry; int mnt; } ;
struct kstat {int mode; } ;
struct iattr {int ia_mode; int ia_valid; int ia_gid; int ia_uid; } ;
struct device {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct dentry*) ;
 scalar_t__ FUNC_3 (struct dentry*) ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (struct device*,int ,struct kstat*) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct dentry* FUNC_9 (char const*,struct path*) ;
 int FUNC_10 (struct dentry*,struct iattr*,int *) ;
 int FUNC_11 (struct path*) ;
 scalar_t__ FUNC_12 (char const*,char) ;
 int FUNC_13 (struct path*,struct kstat*,int,int ) ;
 int FUNC_14 (int ,struct dentry*,int *) ;

__attribute__((used)) static int FUNC_15(const char *VAR_9, struct device *VAR_10)
{
 struct path VAR_11;
 struct dentry *VAR_12;
 int VAR_13 = 0;
 int VAR_14;

 VAR_12 = FUNC_9(VAR_9, &VAR_11);
 if (FUNC_0(VAR_12))
  return FUNC_1(VAR_12);

 if (FUNC_3(VAR_12)) {
  struct kstat VAR_15;
  struct path VAR_16 = {.mnt = VAR_11.mnt, .dentry = VAR_12};
  VAR_14 = FUNC_13(&VAR_16, &VAR_15, VAR_8 | VAR_7,
      VAR_3);
  if (!VAR_14 && FUNC_5(VAR_10, FUNC_2(VAR_12), &VAR_15)) {
   struct iattr VAR_17;




   VAR_17.ia_uid = VAR_6;
   VAR_17.ia_gid = VAR_5;
   VAR_17.ia_mode = VAR_15.mode & ~0777;
   VAR_17.ia_valid =
    VAR_2|VAR_0|VAR_1;
   FUNC_7(FUNC_2(VAR_12));
   FUNC_10(VAR_12, &VAR_17, ((void*)0));
   FUNC_8(FUNC_2(VAR_12));
   VAR_14 = FUNC_14(FUNC_2(VAR_11.dentry), VAR_12, ((void*)0));
   if (!VAR_14 || VAR_14 == -VAR_4)
    VAR_13 = 1;
  }
 } else {
  VAR_14 = -VAR_4;
 }
 FUNC_6(VAR_12);
 FUNC_8(FUNC_2(VAR_11.dentry));

 FUNC_11(&VAR_11);
 if (VAR_13 && FUNC_12(VAR_9, '/'))
  FUNC_4(VAR_9);
 return VAR_14;
}
