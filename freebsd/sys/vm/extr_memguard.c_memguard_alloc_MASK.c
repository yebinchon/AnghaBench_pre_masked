
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef scalar_t__ u_long ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int,scalar_t__,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (unsigned long,int) ;
 int FUNC_3 (int) ;
 unsigned long* FUNC_4 (int ) ;
 scalar_t__* FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__,int,int*) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int,scalar_t__) ;

void *
FUNC_9(unsigned long VAR_14, int VAR_15)
{
 vm_offset_t VAR_16, VAR_17;
 u_long VAR_18, VAR_19;
 int VAR_20, VAR_21, VAR_22;

 VAR_18 = FUNC_1(VAR_14);
 if (VAR_18 == 0)
  return (((void*)0));






 VAR_19 = VAR_18;
 VAR_20 = (VAR_10 & VAR_1) != 0;
 if (VAR_20)
  VAR_19 += 2 * VAR_4;







 if (FUNC_7(VAR_7, VAR_5) >= VAR_11 &&
     VAR_14 < VAR_4) {
  VAR_16 = (vm_offset_t)((void*)0);
  VAR_9++;
  goto out;
 }





 VAR_21 = FUNC_6(VAR_7, VAR_19, VAR_2 | VAR_3,
     &VAR_17);
 if (VAR_21 != 0) {
  VAR_8++;
  VAR_16 = (vm_offset_t)((void*)0);
  goto out;
 }
 VAR_16 = VAR_17;
 if (VAR_20)
  VAR_16 += VAR_4;
 VAR_22 = FUNC_0(VAR_6, VAR_16, VAR_18, VAR_15);
 if (VAR_22 != VAR_0) {
  FUNC_8(VAR_7, VAR_17, VAR_19);
  VAR_9++;
  VAR_16 = (vm_offset_t)((void*)0);
  goto out;
 }
 *FUNC_4(FUNC_3(VAR_16)) = VAR_14;
 *FUNC_5(FUNC_3(VAR_16)) = VAR_19;
 VAR_12++;
 if (VAR_14 < VAR_4) {
  VAR_13 += (VAR_4 - VAR_14);
  if (VAR_20) {





   VAR_14 = FUNC_2(VAR_14, 16);
   VAR_16 += (VAR_4 - VAR_14);
  }
 }
out:
 return ((void *)VAR_16);
}
