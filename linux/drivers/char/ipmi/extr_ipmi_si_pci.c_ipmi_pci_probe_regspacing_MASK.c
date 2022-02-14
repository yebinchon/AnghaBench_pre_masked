
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si_sm_io {scalar_t__ si_type; int regspacing; unsigned char (* inputb ) (struct si_sm_io*,int) ;int (* io_cleanup ) (struct si_sm_io*) ;int (* outputb ) (struct si_sm_io*,int,int) ;int dev; scalar_t__ (* io_setup ) (struct si_sm_io*) ;scalar_t__ regshift; int regsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct si_sm_io*) ;
 int FUNC_2 (struct si_sm_io*,int,int) ;
 unsigned char FUNC_3 (struct si_sm_io*,int) ;
 int FUNC_4 (struct si_sm_io*) ;

__attribute__((used)) static int FUNC_5(struct si_sm_io *VAR_3)
{
 if (VAR_3->si_type == VAR_2) {
  unsigned char VAR_4;
  int VAR_5;

  VAR_3->regsize = VAR_0;
  VAR_3->regshift = 0;


  for (VAR_5 = VAR_1; VAR_5 <= 16;) {
   VAR_3->regspacing = VAR_5;
   if (VAR_3->io_setup(VAR_3)) {
    FUNC_0(VAR_3->dev, "Could not setup I/O space\n");
    return VAR_1;
   }

   VAR_3->outputb(VAR_3, 1, 0x10);

   VAR_4 = VAR_3->inputb(VAR_3, 1);
   VAR_3->io_cleanup(VAR_3);
   if (VAR_4)
    return VAR_5;
   VAR_5 *= 4;
  }
 }
 return VAR_1;
}
