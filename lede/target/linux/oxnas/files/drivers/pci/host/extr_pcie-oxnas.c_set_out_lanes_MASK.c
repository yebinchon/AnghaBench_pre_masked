
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oxnas_pcie {scalar_t__ outbound_offset; int sys_ctrl; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int FUNC_1 (int ,scalar_t__,int ,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static inline void FUNC_3(struct oxnas_pcie *VAR_2, unsigned VAR_3)
{
 FUNC_1(VAR_2->sys_ctrl, VAR_2->outbound_offset + VAR_0,
      VAR_1, FUNC_0(VAR_3));
 FUNC_2();
}
