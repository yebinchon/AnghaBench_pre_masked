
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ u_int64_t ;
struct TYPE_4__ {scalar_t__ shared_info; int magic; } ;
typedef TYPE_1__ start_info_t ;
typedef int shared_info_t ;


 int * VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (char*,int) ;
 int VAR_13 ;
 TYPE_1__* VAR_14 ;
 int FUNC_4 (scalar_t__) ;
 int VAR_15 ;
 int FUNC_5 (char*,...) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

uint64_t
FUNC_6(start_info_t *VAR_19, uint64_t VAR_20)
{
 uint64_t VAR_21;
 uint64_t *VAR_22 = (u_int64_t *)VAR_20;
 uint64_t *VAR_23 = (u_int64_t *)(VAR_20 + VAR_2);
 uint64_t *VAR_24 = (u_int64_t *)(VAR_20 + 2 * VAR_2);
 int VAR_25;
 char *VAR_26;

 VAR_17 = VAR_9;
 VAR_15 = VAR_8;

 if ((VAR_19 == ((void*)0)) || (VAR_20 == 0)) {
  FUNC_5("ERROR: invalid start_info or xen stack, halting\n");
  FUNC_0(VAR_7);
 }

 FUNC_5("FreeBSD PVH running on %s\n", VAR_19->magic);


 VAR_21 = VAR_20 + 3 * VAR_2 - VAR_1;


 VAR_14 = VAR_19;
 VAR_0 =
     (shared_info_t *)(VAR_19->shared_info + VAR_1);






 for (VAR_25 = 0; VAR_25 < (VAR_2 / sizeof(uint64_t)); VAR_25++) {




  VAR_22[VAR_25] = ((uint64_t)&VAR_23[0]) - VAR_1;
  VAR_22[VAR_25] |= VAR_6 | VAR_4 | VAR_5;





  VAR_23[VAR_25] = ((uint64_t)&VAR_24[0]) - VAR_1;
  VAR_23[VAR_25] |= VAR_6 | VAR_4 | VAR_5;





  VAR_24[VAR_25] = VAR_25 * (2 * 1024 * 1024);
  VAR_24[VAR_25] |= VAR_6 | VAR_4 | VAR_3 | VAR_5;
 }
 FUNC_4(((uint64_t)&VAR_22[0]) - VAR_1);





 VAR_26 = (void *)(VAR_21 + VAR_1);
 VAR_21 += VAR_2;
 FUNC_1(VAR_26, VAR_2);
 FUNC_3(VAR_26, VAR_2);


 VAR_12 = VAR_18;
 VAR_10 = VAR_16;
 VAR_11 = VAR_13;


 return (FUNC_2(0, VAR_21));
}
