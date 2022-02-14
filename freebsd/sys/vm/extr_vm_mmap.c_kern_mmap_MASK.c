
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t vm_size_t ;
typedef int vm_prot_t ;
typedef size_t vm_offset_t ;
struct vmspace {int vm_map; scalar_t__ vm_daddr; scalar_t__ vm_taddr; } ;
struct thread {scalar_t__* td_retval; struct proc* td_proc; } ;
struct proc {scalar_t__ p_osrel; struct vmspace* p_vmspace; } ;
struct file {int dummy; } ;
typedef scalar_t__ register_t ;
typedef size_t off_t ;
typedef int cap_rights_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 size_t VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_4 (int ) ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct file*,struct thread*) ;
 int FUNC_8 (struct thread*,int,int *,int*,struct file**) ;
 int FUNC_9 (struct file*,int *,size_t*,size_t,int,int,int,size_t,struct thread*) ;
 int FUNC_10 (struct proc*,int) ;
 int FUNC_11 (struct thread*,int ) ;
 size_t FUNC_12 (size_t) ;
 size_t FUNC_13 (int *) ;
 size_t FUNC_14 (int *) ;
 int FUNC_15 (int *,size_t*,size_t,int,int,int,int *,size_t,int ,struct thread*) ;

int
FUNC_16(struct thread *VAR_38, uintptr_t VAR_39, size_t VAR_40, int VAR_41, int VAR_42,
    int VAR_43, off_t VAR_44)
{
 struct vmspace *VAR_45;
 struct file *VAR_46;
 struct proc *VAR_47;
 vm_offset_t VAR_48;
 vm_size_t VAR_49, VAR_50;
 vm_prot_t VAR_51;
 int VAR_52, VAR_53, VAR_54;
 cap_rights_t VAR_55;

 if ((VAR_41 & ~(VAR_37 | FUNC_2(VAR_37))) != 0)
  return (VAR_4);
 VAR_54 = FUNC_3(VAR_41);
 VAR_41 = FUNC_1(VAR_41);
 if (VAR_54 != 0 && (VAR_54 & VAR_41) != VAR_41)
  return (VAR_4);

 VAR_47 = VAR_38->td_proc;





 if (VAR_54 == 0)
  VAR_54 = FUNC_10(VAR_47, VAR_41);

 VAR_45 = VAR_47->p_vmspace;
 VAR_46 = ((void*)0);
 FUNC_0(VAR_43);
 VAR_48 = VAR_39;




 VAR_42 &= ~(VAR_21 | VAR_22);
 if (!FUNC_4(VAR_35)) {
  if ((VAR_40 == 0 && VAR_47->p_osrel >= VAR_32) ||
      ((VAR_42 & VAR_12) != 0 && (VAR_43 != -1 || VAR_44 != 0)))
   return (VAR_4);
 } else {
  if ((VAR_42 & VAR_12) != 0)
   VAR_44 = 0;
 }

 if (VAR_42 & VAR_24) {
  if ((VAR_43 != -1) ||
      ((VAR_41 & (VAR_30 | VAR_31)) != (VAR_30 | VAR_31)))
   return (VAR_4);
  VAR_42 |= VAR_12;
  VAR_44 = 0;
 }
 if ((VAR_42 & ~(VAR_23 | VAR_20 | VAR_14 | VAR_16 |
     VAR_24 | VAR_18 | VAR_12 | VAR_13 | VAR_17 |
     VAR_19 | VAR_15 |



     VAR_10)) != 0)
  return (VAR_4);
 if ((VAR_42 & (VAR_13 | VAR_14)) == VAR_13)
  return (VAR_4);
 if ((VAR_42 & (VAR_23 | VAR_20)) == (VAR_23 | VAR_20))
  return (VAR_4);
 if (VAR_41 != VAR_29 &&
     (VAR_41 & ~(VAR_30 | VAR_31 | VAR_28)) != 0)
  return (VAR_4);
 if ((VAR_42 & VAR_15) != 0 && (VAR_41 != VAR_29 || VAR_43 != -1 ||
     VAR_44 != 0 || (VAR_42 & ~(VAR_14 | VAR_15 | VAR_13 |



     VAR_10)) != 0))
  return (VAR_4);





 VAR_49 = (VAR_44 & VAR_26);
 VAR_44 -= VAR_49;


 VAR_50 = VAR_40 + VAR_49;
 VAR_50 = FUNC_12(VAR_50);

 if (VAR_40 > VAR_50)
  return (VAR_5);


 VAR_52 = VAR_42 & VAR_10;
 if (VAR_52 != 0 && VAR_52 != VAR_9 &&
     (VAR_52 >> VAR_11 >= sizeof(void *) * VAR_25 ||
     VAR_52 >> VAR_11 < VAR_27))
  return (VAR_4);





 if (VAR_42 & VAR_14) {





  VAR_48 -= VAR_49;
  if (VAR_48 & VAR_26)
   return (VAR_4);


  if (VAR_48 < FUNC_14(&VAR_45->vm_map) ||
      VAR_48 + VAR_50 > FUNC_13(&VAR_45->vm_map))
   return (VAR_4);
  if (VAR_48 + VAR_50 < VAR_48)
   return (VAR_4);
 } else {
  if (VAR_48 == 0 ||
      (VAR_48 >= FUNC_12((vm_offset_t)VAR_45->vm_taddr) &&
      VAR_48 < FUNC_12((vm_offset_t)VAR_45->vm_daddr +
      FUNC_11(VAR_38, VAR_34))))
   VAR_48 = FUNC_12((vm_offset_t)VAR_45->vm_daddr +
       FUNC_11(VAR_38, VAR_34));
 }
 if (VAR_40 == 0) {






  VAR_53 = 0;
 } else if ((VAR_42 & VAR_15) != 0) {
  VAR_53 = FUNC_15(&VAR_45->vm_map, &VAR_48, VAR_50, VAR_36,
      VAR_36, VAR_42, ((void*)0), VAR_44, VAR_6, VAR_38);
 } else if ((VAR_42 & VAR_12) != 0) {





  VAR_53 = FUNC_15(&VAR_45->vm_map, &VAR_48, VAR_50, VAR_41,
      VAR_54, VAR_42, ((void*)0), VAR_44, VAR_6, VAR_38);
 } else {






  FUNC_5(&VAR_55, VAR_0);
  if (VAR_41 & VAR_30)
   FUNC_6(&VAR_55, VAR_1);
  if ((VAR_42 & VAR_23) != 0) {
   if (VAR_41 & VAR_31)
    FUNC_6(&VAR_55, VAR_2);
  }
  if (VAR_41 & VAR_28)
   FUNC_6(&VAR_55, VAR_3);
  VAR_53 = FUNC_8(VAR_38, VAR_43, &VAR_55, &VAR_51, &VAR_46);
  if (VAR_53 != 0)
   goto done;
  if ((VAR_42 & (VAR_23 | VAR_20)) == 0 &&
      VAR_47->p_osrel >= VAR_33) {
   VAR_53 = VAR_4;
   goto done;
  }


  VAR_53 = FUNC_9(VAR_46, &VAR_45->vm_map, &VAR_48, VAR_50, VAR_41,
      VAR_54 & VAR_51, VAR_42, VAR_44, VAR_38);
 }

 if (VAR_53 == 0)
  VAR_38->td_retval[0] = (register_t) (VAR_48 + VAR_49);
done:
 if (VAR_46)
  FUNC_7(VAR_46, VAR_38);

 return (VAR_53);
}
