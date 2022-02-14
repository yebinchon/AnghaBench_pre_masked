
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct qib_pportdata {int dd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct qib_pportdata *VAR_6)
{
 u64 VAR_7 = FUNC_1(VAR_6->dd, VAR_5);

 return (VAR_7 & FUNC_0(VAR_4, VAR_3)) ||
        (VAR_7 & FUNC_0(VAR_4, VAR_0)) ||
        (VAR_7 & FUNC_0(VAR_4, VAR_1)) ||
        !(VAR_7 & FUNC_0(VAR_4, VAR_2));
}
