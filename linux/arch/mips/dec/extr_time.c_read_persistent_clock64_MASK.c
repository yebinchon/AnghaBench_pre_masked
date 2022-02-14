
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {scalar_t__ tv_nsec; int tv_sec; } ;


 unsigned int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int VAR_10 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct timespec64 *VAR_11)
{
 unsigned int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 unsigned long VAR_19;

 FUNC_3(&VAR_10, VAR_19);

 do {
  VAR_17 = FUNC_0(VAR_8);
  VAR_16 = FUNC_0(VAR_6);
  VAR_15 = FUNC_0(VAR_5);
  VAR_14 = FUNC_0(VAR_2);
  VAR_13 = FUNC_0(VAR_7);
  VAR_12 = FUNC_0(VAR_9);





  VAR_18 = FUNC_0(VAR_3);
 } while (VAR_17 != FUNC_0(VAR_8));

 FUNC_4(&VAR_10, VAR_19);

 if (!(FUNC_0(VAR_1) & VAR_4) || VAR_0) {
  VAR_17 = FUNC_1(VAR_17);
  VAR_16 = FUNC_1(VAR_16);
  VAR_15 = FUNC_1(VAR_15);
  VAR_14 = FUNC_1(VAR_14);
  VAR_13 = FUNC_1(VAR_13);
  VAR_12 = FUNC_1(VAR_12);
 }

 VAR_12 += VAR_18 - 72 + 2000;

 VAR_11->tv_sec = FUNC_2(VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17);
 VAR_11->tv_nsec = 0;
}
