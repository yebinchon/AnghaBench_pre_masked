
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct s390_idle_data {int dummy; } ;
struct TYPE_2__ {scalar_t__ clock_comparator; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 (unsigned long,int ,int ) ;
 int FUNC_1 (unsigned long,int ,int ) ;
 unsigned long FUNC_2 () ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (struct s390_idle_data*,unsigned long) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(unsigned long long VAR_5)
{
 unsigned long VAR_6, VAR_7, VAR_8;
 struct s390_idle_data VAR_9;
 u64 VAR_10;

 VAR_10 = FUNC_4() + (VAR_5 << 12);
 FUNC_1(VAR_6, 0, 0);
 VAR_7 = VAR_6 & ~VAR_1;
 VAR_7 |= (1UL << (63 - 52));
 FUNC_0(VAR_7, 0, 0);
 VAR_8 = FUNC_2() | VAR_2 | VAR_3;
 FUNC_6(VAR_10);
 FUNC_7(VAR_0);
 FUNC_5(&VAR_9, VAR_8);
 FUNC_3(VAR_0);
 FUNC_6(VAR_4.clock_comparator);
 FUNC_0(VAR_6, 0, 0);
}
