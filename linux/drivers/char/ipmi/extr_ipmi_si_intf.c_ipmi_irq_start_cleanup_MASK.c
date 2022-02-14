
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si_sm_io {scalar_t__ si_type; int (* outputb ) (struct si_sm_io*,int ,int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct si_sm_io*,int ,int ) ;

void FUNC_1(struct si_sm_io *VAR_2)
{
 if (VAR_2->si_type == VAR_1)

  VAR_2->outputb(VAR_2, VAR_0, 0);
}
