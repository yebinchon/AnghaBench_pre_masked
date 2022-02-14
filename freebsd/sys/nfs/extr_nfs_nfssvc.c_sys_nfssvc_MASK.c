
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct nfssvc_args {int flag; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
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
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct thread*,struct nfssvc_args*) ;
 int FUNC_4 (struct thread*,struct nfssvc_args*) ;
 int FUNC_5 (struct thread*,struct nfssvc_args*) ;
 int FUNC_6 (struct thread*,struct nfssvc_args*) ;
 int FUNC_7 (struct thread*,int ) ;
 int FUNC_8 (struct thread*,struct nfssvc_args*) ;
 int FUNC_9 (struct thread*,struct nfssvc_args*) ;
 int FUNC_10 (struct thread*,struct nfssvc_args*) ;
 int FUNC_11 (struct thread*,struct nfssvc_args*) ;

int
FUNC_12(struct thread *VAR_32, struct nfssvc_args *VAR_33)
{
 int VAR_34;

 FUNC_1(!FUNC_2(&VAR_3), ("nfssvc(): called with Giant"));

 FUNC_0(VAR_33->flag);


 if ((VAR_33->flag & ~VAR_12) != 0) {
  VAR_34 = FUNC_7(VAR_32, VAR_31);
  if (VAR_34 != 0)
   return (VAR_34);
 }
 VAR_34 = VAR_1;
 if ((VAR_33->flag & (VAR_4 | VAR_24 | VAR_18)) &&
     &FUNC_6 != ((void*)0))
  VAR_34 = FUNC_6)(VAR_32, VAR_33);
 else if ((VAR_33->flag & (VAR_7 | VAR_17 |
     VAR_10 | VAR_11)) && &FUNC_3 != ((void*)0))
  VAR_34 = FUNC_3)(VAR_32, VAR_33);
 else if ((VAR_33->flag & (VAR_16 | VAR_12 |
     VAR_14 | VAR_13 | VAR_15 |
     VAR_22 | VAR_21)) &&
     &FUNC_4 != ((void*)0))
  VAR_34 = FUNC_4)(VAR_32, VAR_33);
 else if ((VAR_33->flag & (VAR_20 | VAR_19 |
     VAR_26 | VAR_30 | VAR_23 |
     VAR_28 | VAR_5 |
     VAR_8 | VAR_9 | VAR_6 |
     VAR_29 | VAR_27 | VAR_25)) &&
     &FUNC_5 != ((void*)0))
  VAR_34 = FUNC_5)(VAR_32, VAR_33);
 if (VAR_34 == VAR_0 || VAR_34 == VAR_2)
  VAR_34 = 0;
 return (VAR_34);
}
