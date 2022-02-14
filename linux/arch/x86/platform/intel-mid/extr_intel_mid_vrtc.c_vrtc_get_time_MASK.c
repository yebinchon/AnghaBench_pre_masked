
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct timespec64 {scalar_t__ tv_nsec; int tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int,int,int,int,int) ;
 int FUNC_2 (char*,int,int,int,int,int,int) ;
 int VAR_8 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct timespec64 *VAR_9)
{
 u8 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 unsigned long VAR_15;
 u32 VAR_16;

 FUNC_3(&VAR_8, VAR_15);

 while ((FUNC_5(VAR_1) & VAR_6))
  FUNC_0();

 VAR_10 = FUNC_5(VAR_5);
 VAR_11 = FUNC_5(VAR_3);
 VAR_12 = FUNC_5(VAR_2);
 VAR_13 = FUNC_5(VAR_0);
 VAR_14 = FUNC_5(VAR_4);
 VAR_16 = FUNC_5(VAR_7);

 FUNC_4(&VAR_8, VAR_15);


 VAR_16 += 1972;

 FUNC_2("vRTC: sec: %d min: %d hour: %d day: %d "
  "mon: %d year: %d\n", VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_16);

 VAR_9->tv_sec = FUNC_1(VAR_16, VAR_14, VAR_13, VAR_12, VAR_11, VAR_10);
 VAR_9->tv_nsec = 0;
}
