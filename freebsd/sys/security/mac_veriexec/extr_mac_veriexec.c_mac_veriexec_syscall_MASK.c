
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vattr {int va_mode; } ;
struct thread {int td_ucred; int td_proc; } ;
struct nameidata {int ni_vp; } ;
struct image_params {int vp; struct vattr* attr; int proc; } ;
struct file {int f_vnode; int f_type; } ;
typedef int img ;
typedef int cap_rights_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;


 int FUNC_0 (int,char*,int,...) ;
 int FUNC_1 (struct nameidata*,int ) ;
 int VAR_11 ;
 int FUNC_2 (struct nameidata*,int ,int,int ,void*,struct thread*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (int ,struct vattr*,int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_16 ;
 int FUNC_5 (struct image_params*,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct file*,struct thread*) ;
 int FUNC_8 (struct thread*,uintptr_t,int ,struct file**) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (struct image_params*,int,struct thread*) ;
 int FUNC_11 (struct nameidata*) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int
FUNC_14(struct thread *VAR_17, int VAR_18, void *VAR_19)
{
 struct image_params VAR_20;
 struct nameidata VAR_21;
 cap_rights_t VAR_22;
 struct vattr VAR_23;
 struct file *VAR_24;
 int VAR_25;

 switch (VAR_18) {
 case 129:

  VAR_25 = FUNC_8(VAR_17, (uintptr_t) VAR_19, FUNC_6(&VAR_22,
      VAR_1), &VAR_24);
  if (VAR_25)
   return (VAR_25);
  if (VAR_24->f_type != VAR_2) {
   FUNC_0(3, "MAC_VERIEXEC_CHECK_SYSCALL: "
       "file is not vnode type (type=0x%x)",
       VAR_24->f_type);
   VAR_25 = VAR_3;
   goto cleanup_file;
  }





  FUNC_5(&VAR_20, sizeof(VAR_20));
  VAR_20.proc = VAR_17->td_proc;
  VAR_20.vp = VAR_24->f_vnode;
  VAR_20.attr = &VAR_23;





  FUNC_12(VAR_20.vp, VAR_6 | VAR_7);
  VAR_25 = FUNC_3(VAR_24->f_vnode, &VAR_23, VAR_17->td_ucred);
  if (VAR_25)
   goto check_done;

  FUNC_0(2, "mac_veriexec_fingerprint_check_image: "
      "va_mode=%o, check_files=%d\n", VAR_23.va_mode,
      ((VAR_23.va_mode & (VAR_14|VAR_12|VAR_13)) == 0));
  VAR_25 = FUNC_10(&VAR_20,
      ((VAR_23.va_mode & (VAR_14|VAR_12|VAR_13)) == 0), VAR_17);
check_done:

  FUNC_4(VAR_20.vp, 0);
cleanup_file:
  FUNC_7(VAR_24, VAR_17);
  break;
 case 128:

  FUNC_2(&VAR_21, VAR_10,
      VAR_5 | VAR_8 | VAR_9 | VAR_0,
      VAR_15, VAR_19, VAR_17);
  VAR_25 = FUNC_11(&VAR_21);
  if (VAR_25 != 0)
   break;
  FUNC_1(&VAR_21, VAR_11);


  VAR_25 = FUNC_9(VAR_17->td_ucred, VAR_21.ni_vp, VAR_16);
  FUNC_13(VAR_21.ni_vp);
  break;
 default:
  VAR_25 = VAR_4;
 }
 return (VAR_25);
}
