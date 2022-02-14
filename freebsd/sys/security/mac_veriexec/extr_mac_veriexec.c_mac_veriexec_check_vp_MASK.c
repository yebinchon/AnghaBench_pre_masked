
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct vnode {int dummy; } ;
struct vattr {int va_gen; int va_fileid; int va_fsid; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
typedef int fingerprint_status_t ;
typedef int accmode_t ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int,char*,int,int ,int ,...) ;
 int VAR_2 ;
 int FUNC_1 (struct vnode*,struct vattr*,struct ucred*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct thread* VAR_5 ;
 int FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct vnode*,struct vattr*,struct thread*,int ) ;

__attribute__((used)) static int
FUNC_4(struct ucred *VAR_6, struct vnode *VAR_7, accmode_t VAR_8)
{
 struct vattr VAR_9;
 struct thread *VAR_10 = VAR_5;
 fingerprint_status_t VAR_11;
 int VAR_12;


 VAR_12 = FUNC_1(VAR_7, &VAR_9, VAR_6);
 if (VAR_12)
  return (VAR_12);


 VAR_12 = FUNC_3(VAR_7, &VAR_9, VAR_10,
     VAR_2);
 if (VAR_12 && VAR_12 != VAR_0)
  return (VAR_12);




 VAR_11 = FUNC_2(VAR_7);
 if (VAR_8 & VAR_4) {





  switch (VAR_11) {
  case 130:
  case 128:
  case 129:
   FUNC_0(2,
       "attempted write to fingerprinted file for dev "
       "%ju, file %ju.%ju\n", (uintmax_t)VAR_9.va_fsid,
       (uintmax_t)VAR_9.va_fileid, (uintmax_t)VAR_9.va_gen);
   return (VAR_1);
  default:
   break;
  }
 }
 if (VAR_8 & VAR_3) {
  switch (VAR_11) {
  case 130:
  case 128:
  case 129:
   if (VAR_12)
    return (VAR_12);
   break;
  default:




   FUNC_0(2, "fingerprint status is %d for dev "
       "%ju, file %ju.%ju\n", VAR_11,
       (uintmax_t)VAR_9.va_fsid, (uintmax_t)VAR_9.va_fileid,
       (uintmax_t)VAR_9.va_gen);
   return (VAR_0);
  }
 }
 return (0);
}
