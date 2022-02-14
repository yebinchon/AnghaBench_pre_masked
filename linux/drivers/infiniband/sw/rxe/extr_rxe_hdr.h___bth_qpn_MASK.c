
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rxe_bth {int qpn; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline u32 FUNC_1(void *VAR_1)
{
 struct rxe_bth *VAR_2 = VAR_1;

 return VAR_0 & FUNC_0(VAR_2->qpn);
}
