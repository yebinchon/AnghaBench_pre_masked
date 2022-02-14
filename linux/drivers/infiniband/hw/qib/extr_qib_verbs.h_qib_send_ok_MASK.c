
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvt_qp {int s_flags; scalar_t__ s_hdrwords; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline int FUNC_0(struct rvt_qp *VAR_4)
{
 return !(VAR_4->s_flags & (VAR_2 | VAR_0)) &&
  (VAR_4->s_hdrwords || (VAR_4->s_flags & VAR_3) ||
   !(VAR_4->s_flags & VAR_1));
}
