
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct si_sm_data {TYPE_1__* io; } ;
struct TYPE_2__ {int (* outputb ) (TYPE_1__*,int ,unsigned char) ;} ;


 int FUNC_0 (TYPE_1__*,int ,unsigned char) ;

__attribute__((used)) static inline void FUNC_1(struct si_sm_data *VAR_0, unsigned char VAR_1)
{
 VAR_0->io->outputb(VAR_0->io, 0, VAR_1);
}
