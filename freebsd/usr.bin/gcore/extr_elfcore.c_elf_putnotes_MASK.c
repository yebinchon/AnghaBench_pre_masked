
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
typedef int ssize_t ;
typedef int pid_t ;
typedef int lwpid_t ;


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
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_0 (int ,int ,int *,struct sbuf*) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_38 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (size_t) ;
 size_t FUNC_5 (int ,int ,void*,size_t) ;
 int FUNC_6 (struct sbuf*,size_t,int,int ) ;
 int FUNC_7 (struct sbuf*,size_t*) ;

__attribute__((used)) static void
FUNC_8(pid_t VAR_39, struct sbuf *VAR_40, size_t *VAR_41)
{
 lwpid_t *VAR_42;
 size_t VAR_43, VAR_44;
 ssize_t VAR_45;
 int VAR_46;

 VAR_38 = 0;
 VAR_43 = FUNC_5(VAR_19, VAR_39, ((void*)0), 0);
 if (VAR_38)
  FUNC_1(1, "PT_GETNUMLWPS");
 VAR_42 = FUNC_4(VAR_43 * sizeof(*VAR_42));
 if (VAR_42 == ((void*)0))
  FUNC_2(1, "out of memory");
 VAR_38 = 0;
 FUNC_5(VAR_18, VAR_39, (void *)VAR_42, VAR_43);
 if (VAR_38)
  FUNC_1(1, "PT_GETLWPLIST");

 FUNC_7(VAR_40, &VAR_44);
 FUNC_0(VAR_13, VAR_33, &VAR_39, VAR_40);

 for (VAR_46 = 0; VAR_46 < VAR_43; ++VAR_46) {
  FUNC_0(VAR_14, VAR_34, VAR_42 + VAR_46, VAR_40);
  FUNC_0(VAR_1, VAR_21, VAR_42 + VAR_46, VAR_40);
  FUNC_0(VAR_16, VAR_36, VAR_42 + VAR_46, VAR_40);
  FUNC_0(VAR_15, VAR_35, VAR_42 + VAR_46, VAR_40);




  FUNC_0(VAR_17, VAR_37, VAR_42 + VAR_46, VAR_40);







 }


 FUNC_0(VAR_8, VAR_28, &VAR_39, VAR_40);
 FUNC_0(VAR_5, VAR_25, &VAR_39, VAR_40);
 FUNC_0(VAR_12, VAR_32, &VAR_39, VAR_40);
 FUNC_0(VAR_6, VAR_26, &VAR_39, VAR_40);
 FUNC_0(VAR_11, VAR_31, &VAR_39, VAR_40);
 FUNC_0(VAR_10, VAR_30, &VAR_39, VAR_40);
 FUNC_0(VAR_7, VAR_27, &VAR_39, VAR_40);
 FUNC_0(VAR_9, VAR_29, &VAR_39,
     VAR_40);
 FUNC_0(VAR_4, VAR_24, &VAR_39, VAR_40);


 VAR_45 = FUNC_6(VAR_40, VAR_44, 1, 0);
 if (VAR_45 == -1)
  FUNC_1(1, "sbuf_end_section");
 FUNC_3(VAR_42);
 *VAR_41 = VAR_45;
}
