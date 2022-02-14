
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si_sm_io {scalar_t__ si_type; int (* outputb ) (struct si_sm_io*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct si_sm_io*,int ,int ) ;

void FUNC_1(struct si_sm_io *VAR_3)
{
 if (VAR_3->si_type == VAR_2)

  VAR_3->outputb(VAR_3, VAR_1,
       VAR_0);
}
