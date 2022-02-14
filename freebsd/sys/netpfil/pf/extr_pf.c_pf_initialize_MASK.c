
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct pf_state_key {int dummy; } ;
struct pf_state {int dummy; } ;
struct pf_srchash {int lock; } ;
struct pf_src_node {int dummy; } ;
struct pf_keyhash {int lock; } ;
struct pf_idhash {int lock; } ;
struct TYPE_2__ {void* zone; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 int * VAR_17 ;
 int VAR_18 ;
 struct pf_keyhash* VAR_19 ;
 struct pf_keyhash* VAR_20 ;
 TYPE_1__* VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 void* VAR_26 ;
 struct pf_srchash* VAR_27 ;
 void* VAR_28 ;
 void* VAR_29 ;
 int VAR_30 ;
 int FUNC_4 () ;
 int VAR_31 ;
 int FUNC_5 (struct pf_keyhash*,int ) ;
 void* FUNC_6 (scalar_t__,int,int ,int) ;
 int FUNC_7 (int *,char*,int *,int) ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 int VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 int * VAR_37 ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (char*,scalar_t__) ;
 void* FUNC_10 (char*,int,int *,int *,int *,int *,int ,int ) ;
 int FUNC_11 (void*,int ) ;
 int FUNC_12 (void*,char*) ;

void
FUNC_13()
{
 struct pf_keyhash *VAR_38;
 struct pf_idhash *VAR_39;
 struct pf_srchash *VAR_40;
 u_int VAR_41;

 if (VAR_33 == 0 || !FUNC_8(VAR_33))
  VAR_33 = VAR_8;
 if (VAR_36 == 0 || !FUNC_8(VAR_36))
  VAR_36 = VAR_11;

 VAR_18 = FUNC_4();


 VAR_29 = FUNC_10("pf states", sizeof(struct pf_state),
     ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_12, 0);
 VAR_21[VAR_10].zone = VAR_29;
 FUNC_11(VAR_29, VAR_7);
 FUNC_12(VAR_29, "PF states limit reached");

 VAR_28 = FUNC_10("pf state keys",
     sizeof(struct pf_state_key), VAR_37, ((void*)0), ((void*)0), ((void*)0),
     VAR_12, 0);

 VAR_20 = FUNC_6(VAR_33, sizeof(struct pf_keyhash),
     VAR_3, VAR_2 | VAR_5);
 VAR_19 = FUNC_6(VAR_33, sizeof(struct pf_idhash),
     VAR_3, VAR_2 | VAR_5);
 if (VAR_20 == ((void*)0) || VAR_19 == ((void*)0)) {
  FUNC_9("pf: Unable to allocate memory for "
      "state_hashsize %lu.\n", VAR_33);

  FUNC_5(VAR_20, VAR_3);
  FUNC_5(VAR_19, VAR_3);

  VAR_33 = VAR_8;
  VAR_20 = FUNC_6(VAR_33,
      sizeof(struct pf_keyhash), VAR_3, VAR_4 | VAR_5);
  VAR_19 = FUNC_6(VAR_33,
      sizeof(struct pf_idhash), VAR_3, VAR_4 | VAR_5);
 }

 VAR_32 = VAR_33 - 1;
 for (VAR_41 = 0, VAR_38 = VAR_20, VAR_39 = VAR_19; VAR_41 <= VAR_32;
     VAR_41++, VAR_38++, VAR_39++) {
  FUNC_7(&VAR_38->lock, "pf_keyhash", ((void*)0), VAR_0 | VAR_1);
  FUNC_7(&VAR_39->lock, "pf_idhash", ((void*)0), VAR_0);
 }


 VAR_26 = FUNC_10("pf source nodes",
     sizeof(struct pf_src_node), ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_12,
     0);
 VAR_21[VAR_9].zone = VAR_26;
 FUNC_11(VAR_26, VAR_6);
 FUNC_12(VAR_26, "PF source nodes limit reached");

 VAR_27 = FUNC_6(VAR_36,
     sizeof(struct pf_srchash), VAR_3, VAR_2 | VAR_5);
 if (VAR_27 == ((void*)0)) {
  FUNC_9("pf: Unable to allocate memory for "
      "source_hashsize %lu.\n", VAR_36);

  VAR_36 = VAR_11;
  VAR_27 = FUNC_6(VAR_36,
      sizeof(struct pf_srchash), VAR_3, VAR_4 | VAR_5);
 }

 VAR_35 = VAR_36 - 1;
 for (VAR_41 = 0, VAR_40 = VAR_27; VAR_41 <= VAR_35; VAR_41++, VAR_40++)
  FUNC_7(&VAR_40->lock, "pf_srchash", ((void*)0), VAR_0);


 FUNC_2(&VAR_15[0]);
 FUNC_2(&VAR_15[1]);
 FUNC_2(&VAR_15[2]);
 FUNC_2(&VAR_15[3]);
 FUNC_2(&VAR_24);
 VAR_16 = &VAR_15[0];
 VAR_13 = &VAR_15[1];
 VAR_17 = &VAR_15[2];
 VAR_14 = &VAR_15[3];


 FUNC_1(&VAR_25);
 FUNC_0(&VAR_22);
 FUNC_3(&VAR_23, 0, VAR_34, VAR_31);


 FUNC_2(&VAR_30);
}
