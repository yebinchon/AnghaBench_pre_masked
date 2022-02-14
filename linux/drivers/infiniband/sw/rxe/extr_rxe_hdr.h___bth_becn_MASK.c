
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxe_bth {int qpn; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(void *VAR_1)
{
 struct rxe_bth *VAR_2 = VAR_1;

 return 0 != (FUNC_0(VAR_0) & VAR_2->qpn);
}
