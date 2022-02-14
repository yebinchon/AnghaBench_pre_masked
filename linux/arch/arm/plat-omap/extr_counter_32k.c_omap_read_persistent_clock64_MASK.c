
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {int dummy; } ;
typedef scalar_t__ cycles_t ;


 unsigned long long FUNC_0 (scalar_t__,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct timespec64 VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct timespec64*,unsigned long long) ;

__attribute__((used)) static void FUNC_3(struct timespec64 *VAR_5)
{
 unsigned long long VAR_6;
 cycles_t VAR_7;

 VAR_7 = VAR_0;
 VAR_0 = VAR_4 ? FUNC_1(VAR_4) : 0;

 VAR_6 = FUNC_0(VAR_0 - VAR_7,
     VAR_1, VAR_2);

 FUNC_2(&VAR_3, VAR_6);

 *VAR_5 = VAR_3;
}
