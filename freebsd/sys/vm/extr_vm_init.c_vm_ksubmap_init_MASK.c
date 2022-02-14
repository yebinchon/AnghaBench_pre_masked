
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long vm_size_t ;
typedef int vm_paddr_t ;
typedef char* vm_offset_t ;
struct kva_md_info {char* clean_sva; char* clean_eva; char* buffer_sva; char* buffer_eva; } ;
typedef scalar_t__ caddr_t ;


 scalar_t__ VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_1 (scalar_t__,long) ;
 int VAR_15 ;
 char* FUNC_2 (long,int,int,int,int ) ;
 char* FUNC_3 (long,int) ;
 void* FUNC_4 (int ,char**,char**,int,int ) ;
 char* FUNC_5 (long) ;
 long FUNC_6 (int ,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_7 (char*) ;
 int VAR_19 ;
 void* VAR_20 ;
 int FUNC_8 (scalar_t__) ;
 int VAR_21 ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,char*,long,int,long,int ) ;

void
FUNC_12(struct kva_md_info *VAR_22)
{
 vm_offset_t VAR_23;
 caddr_t VAR_24;
 vm_size_t VAR_25 = 0;
 long VAR_26;
 vm_offset_t VAR_27;
 vm_offset_t VAR_28;
 VAR_23 = 0;
again:
 VAR_24 = (caddr_t)VAR_23;





 VAR_26 = FUNC_6(VAR_19, FUNC_0(FUNC_9(VAR_15) -
     FUNC_10(VAR_15)));

 VAR_24 = FUNC_1(VAR_24, VAR_26);




 if (VAR_23 == 0) {
  VAR_25 = (vm_size_t)VAR_24;
   VAR_23 = FUNC_3(VAR_25, VAR_6 | VAR_5);
  if (VAR_23 == 0)
   FUNC_7("startup: no room for tables");
  goto again;
 }




 if ((vm_size_t)((char *)VAR_24 - VAR_23) != VAR_25)
  FUNC_7("startup: table size inconsistency");




 VAR_25 = (long)VAR_18 * VAR_1 + (long)VAR_10 * VAR_3;
 VAR_22->clean_sva = VAR_23 = FUNC_5(VAR_25);
 VAR_22->clean_eva = VAR_23 + VAR_25;







 VAR_25 = (long)VAR_18 * VAR_1;
 VAR_22->buffer_sva = VAR_23;
 VAR_22->buffer_eva = VAR_22->buffer_sva + VAR_25;
 FUNC_11(VAR_11, "buffer arena", VAR_22->buffer_sva, VAR_25,
     VAR_7, (VAR_17 > 4) ? VAR_1 * 8 : 0, 0);
 VAR_23 += VAR_25;




 if (VAR_10 != 0) {
  VAR_25 = (long)VAR_10 * VAR_3;
  FUNC_11(VAR_21, "transient arena",
      VAR_23, VAR_25, VAR_7, 0, 0);
  VAR_23 += VAR_25;
 }
 if (VAR_23 != VAR_22->clean_eva)
  FUNC_7("Clean map calculation incorrect");
 VAR_13 = 8 * VAR_17;



 VAR_14 = FUNC_8(VAR_8 + VAR_0);
 VAR_12 = FUNC_4(VAR_15, &VAR_27, &VAR_28,
     VAR_13 * VAR_14 + 64 * VAR_7, VAR_2);
 VAR_20 = FUNC_4(VAR_15, &VAR_27, &VAR_28, VAR_16,
     VAR_2);
}
