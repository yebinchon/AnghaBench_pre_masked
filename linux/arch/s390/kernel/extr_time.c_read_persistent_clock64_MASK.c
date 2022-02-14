
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {int dummy; } ;
typedef scalar_t__ __u64 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned char*,struct timespec64*) ;
 int FUNC_1 (unsigned char*) ;
 scalar_t__ VAR_2 ;

void FUNC_2(struct timespec64 *VAR_3)
{
 unsigned char VAR_4[VAR_0];
 __u64 VAR_5;

 VAR_5 = VAR_2 + VAR_1;
 FUNC_1(VAR_4);
 *(__u64 *) &VAR_4[1] -= VAR_5;
 if (*(__u64 *) &VAR_4[1] > VAR_5)
  VAR_4[0]--;
 FUNC_0(VAR_4, VAR_3);
}
