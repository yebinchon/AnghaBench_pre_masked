
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g2d_data {int flags; scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct g2d_data *VAR_4)
{
 FUNC_1(VAR_1 | VAR_2, VAR_4->regs + VAR_3);
 FUNC_0(VAR_0, &VAR_4->flags);
}
