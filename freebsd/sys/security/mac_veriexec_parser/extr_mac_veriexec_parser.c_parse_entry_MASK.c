
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vattr {int va_mode; int va_gen; int va_fileid; int va_fsid; } ;
struct nameidata {int ni_vp; } ;
struct TYPE_3__ {int td_ucred; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nameidata*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,struct vattr*,int ) ;
 int FUNC_2 (int ,int ) ;
 TYPE_1__* VAR_5 ;
 int FUNC_3 (char*,char**,unsigned char**,int*) ;
 int FUNC_4 (unsigned char*) ;
 int FUNC_5 (int,int ,int ,int ,unsigned char*,int *,int ,int,char*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,struct nameidata*) ;
 int FUNC_9 (char*,int,char*,char*,char*) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,int) ;
 int VAR_6 ;
 int FUNC_12 (int ,int ,int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_13(char *VAR_7, char *VAR_8)
{
 struct nameidata VAR_9;
 struct vattr VAR_10;
 char VAR_11[VAR_2];
 char *VAR_12;
 unsigned char *VAR_13;
 int VAR_14, VAR_15, VAR_16;

 VAR_12 = ((void*)0);
 VAR_13 = ((void*)0);
 VAR_16 = 0;

 VAR_14 = FUNC_3(VAR_7, &VAR_12, &VAR_13, &VAR_16);
 if (VAR_14 != 0)
  return (VAR_14);

 VAR_14 = FUNC_4(VAR_13);
 if (VAR_14 != 0)
  return (VAR_14);

 if (FUNC_11(VAR_7, VAR_2) == VAR_2)
  return (VAR_0);


 if (VAR_8 != ((void*)0) && VAR_7[0] != '/') {
  VAR_14 = FUNC_9(VAR_11, VAR_2, "%s/%s",
       VAR_8, VAR_7);
  if (VAR_14 < 0)
   return (-VAR_14);
 } else {
  FUNC_10(VAR_11, VAR_7);
 }

 VAR_14 = FUNC_8(VAR_11, &VAR_9);
 FUNC_0(&VAR_9, VAR_3);
 if (VAR_14 != 0)
  return (VAR_14);

 VAR_14 = FUNC_1(VAR_9.ni_vp, &VAR_10, VAR_5->td_ucred);
 if (VAR_14 != 0)
  goto out;

 VAR_15 = (VAR_10.va_mode & VAR_4);

 FUNC_6(&VAR_6);
 VAR_14 = FUNC_5(
     VAR_15 == 0,
     VAR_10.va_fsid, VAR_10.va_fileid, VAR_10.va_gen,
     VAR_13,
     ((void*)0), 0,
     VAR_16, VAR_12, 1);
 FUNC_7(&VAR_6);

out:
 FUNC_2(VAR_9.ni_vp, 0);
 FUNC_12(VAR_9.ni_vp, VAR_1, VAR_5->td_ucred, VAR_5);
 return (VAR_14);
}
