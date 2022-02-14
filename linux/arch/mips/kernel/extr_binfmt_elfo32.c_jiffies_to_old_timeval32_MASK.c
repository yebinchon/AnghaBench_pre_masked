
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct old_timeval32 {int tv_usec; int tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int*) ;

__attribute__((used)) static inline void
FUNC_1(unsigned long VAR_3, struct old_timeval32 *VAR_4)
{




 u64 VAR_5 = (u64)VAR_3 * VAR_2;
 u32 VAR_6;
 VAR_4->tv_sec = FUNC_0(VAR_5, VAR_0, &VAR_6);
 VAR_4->tv_usec = VAR_6 / VAR_1;
}
