
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timespec64 {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_3__ {scalar_t__ revision; } ;
struct TYPE_4__ {scalar_t__ century; TYPE_1__ header; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (int) ;
 TYPE_2__ VAR_13 ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_5 () ;
 int VAR_14 ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

void FUNC_8(struct timespec64 *VAR_15)
{
 unsigned int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23 = 0;
 unsigned long VAR_24;





 if (!FUNC_5()) {
  VAR_15->tv_sec = VAR_15->tv_nsec = 0;
  return;
 }

 FUNC_6(&VAR_14, VAR_24);







 while ((FUNC_0(VAR_6) & VAR_11))
  FUNC_3();

 VAR_22 = FUNC_0(VAR_10);
 VAR_21 = FUNC_0(VAR_8);
 VAR_20 = FUNC_0(VAR_7);
 VAR_19 = FUNC_0(VAR_4);
 VAR_18 = FUNC_0(VAR_9);
 VAR_17 = FUNC_0(VAR_12);







 VAR_16 = FUNC_0(VAR_3);
 FUNC_1(VAR_2 && (VAR_16 & VAR_5));

 FUNC_7(&VAR_14, VAR_24);

 if (VAR_2 || !(VAR_16 & VAR_5)) {
  VAR_22 = FUNC_2(VAR_22);
  VAR_21 = FUNC_2(VAR_21);
  VAR_20 = FUNC_2(VAR_20);
  VAR_19 = FUNC_2(VAR_19);
  VAR_18 = FUNC_2(VAR_18);
  VAR_17 = FUNC_2(VAR_17);
 }

 if (VAR_23) {
  VAR_23 = FUNC_2(VAR_23);
  VAR_17 += VAR_23 * 100;
 } else
  VAR_17 += VAR_0;

 VAR_15->tv_sec = FUNC_4(VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22);
 VAR_15->tv_nsec = 0;
}
