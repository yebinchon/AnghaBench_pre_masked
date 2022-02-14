
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct vnode {int dummy; } ;
struct vattr {int va_gen; int va_fileid; int va_fsid; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct label {int dummy; } ;
typedef int fingerprint_status_t ;


 int VAR_0 ;



 int FUNC_0 (int,char*,int,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct vnode*,struct vattr*,struct ucred*) ;
 struct thread* VAR_3 ;
 int FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct vnode*,struct vattr*,struct thread*,int ) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_4(struct ucred *VAR_5, struct vnode *VAR_6,
    struct label *VAR_7)
{
 struct vattr VAR_8;
 struct thread *VAR_9 = VAR_3;
 fingerprint_status_t VAR_10;
 int VAR_11;




 if ((VAR_4 & VAR_2) == 0)
  return (0);


 VAR_11 = FUNC_1(VAR_6, &VAR_8, VAR_5);
 if (VAR_11)
  return (VAR_11);





 VAR_11 = FUNC_3(VAR_6, &VAR_8, VAR_9,
     VAR_1);
 if (VAR_11 && VAR_11 != VAR_0)
  return (VAR_11);




 VAR_10 = FUNC_2(VAR_6);
 switch (VAR_10) {
 case 130:
 case 128:
 case 129:
  if (VAR_11)
   return (VAR_11);
  break;
 default:




  FUNC_0(2, "fingerprint status is %d for dev %ju, "
      "file %ju.%ju\n", VAR_10, (uintmax_t)VAR_8.va_fsid,
      (uintmax_t)VAR_8.va_fileid, (uintmax_t)VAR_8.va_gen);
  return (VAR_0);
 }


 return (0);
}
