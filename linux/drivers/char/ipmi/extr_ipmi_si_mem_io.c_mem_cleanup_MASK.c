
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si_sm_io {int io_size; scalar_t__ addr; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct si_sm_io*,int ) ;

__attribute__((used)) static void FUNC_2(struct si_sm_io *VAR_0)
{
 if (VAR_0->addr) {
  FUNC_0(VAR_0->addr);
  FUNC_1(VAR_0, VAR_0->io_size);
 }
}
