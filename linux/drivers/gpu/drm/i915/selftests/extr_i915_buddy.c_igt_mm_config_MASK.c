
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int random_seed; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_7(u64 *VAR_3, u64 *VAR_4)
{
 FUNC_1(VAR_2);
 u64 VAR_5, VAR_6;



 FUNC_5(&VAR_2, VAR_1.random_seed);

 VAR_5 = FUNC_2(&VAR_2) & (VAR_0 - 1);
 VAR_6 = FUNC_0(12 + (FUNC_6(&VAR_2) % FUNC_3(VAR_5 >> 12)));
 VAR_5 = FUNC_4(VAR_5 & -VAR_6, VAR_6);

 *VAR_4 = VAR_6;
 *VAR_3 = VAR_5;
}
