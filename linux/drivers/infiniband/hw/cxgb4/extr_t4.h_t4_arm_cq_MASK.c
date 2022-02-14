
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct t4_cq {scalar_t__ cidx_inc; int flags; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct t4_cq*,int) ;

__attribute__((used)) static inline int FUNC_5(struct t4_cq *VAR_2, int VAR_3)
{
 u32 VAR_4;

 FUNC_3(VAR_1, &VAR_2->flags);
 while (VAR_2->cidx_inc > VAR_0) {
  VAR_4 = FUNC_1(0) | FUNC_0(VAR_0) | FUNC_2(7);
  FUNC_4(VAR_2, VAR_4);
  VAR_2->cidx_inc -= VAR_0;
 }
 VAR_4 = FUNC_1(VAR_3) | FUNC_0(VAR_2->cidx_inc) | FUNC_2(6);
 FUNC_4(VAR_2, VAR_4);
 VAR_2->cidx_inc = 0;
 return 0;
}
