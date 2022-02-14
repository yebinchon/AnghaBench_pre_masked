
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_image_convert_chan {int out_eof_irq; int rot_out_eof_irq; int * rotation_out_chan; int * rotation_in_chan; int * out_chan; int * in_chan; int * ic; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,struct ipu_image_convert_chan*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ipu_image_convert_chan *VAR_0)
{
 if (VAR_0->out_eof_irq >= 0)
  FUNC_1(VAR_0->out_eof_irq, VAR_0);
 if (VAR_0->rot_out_eof_irq >= 0)
  FUNC_1(VAR_0->rot_out_eof_irq, VAR_0);

 if (!FUNC_0(VAR_0->in_chan))
  FUNC_3(VAR_0->in_chan);
 if (!FUNC_0(VAR_0->out_chan))
  FUNC_3(VAR_0->out_chan);
 if (!FUNC_0(VAR_0->rotation_in_chan))
  FUNC_3(VAR_0->rotation_in_chan);
 if (!FUNC_0(VAR_0->rotation_out_chan))
  FUNC_3(VAR_0->rotation_out_chan);
 if (!FUNC_0(VAR_0->ic))
  FUNC_2(VAR_0->ic);

 VAR_0->in_chan = VAR_0->out_chan = VAR_0->rotation_in_chan =
  VAR_0->rotation_out_chan = ((void*)0);
 VAR_0->out_eof_irq = VAR_0->rot_out_eof_irq = -1;
}
