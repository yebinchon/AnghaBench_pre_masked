
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_audio_ctxt {int run; int (* do_setup ) (int ) ;int mtx; int cond; int priv; struct hda_audio_ctxt* started; } ;


 int FUNC_0 (struct hda_audio_ctxt*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct hda_audio_ctxt *VAR_0)
{
 int VAR_1 = 0;

 FUNC_0(VAR_0);
 FUNC_0(VAR_0->started);


 if (VAR_0->run)
  return (-1);

 FUNC_2(&VAR_0->mtx);
 VAR_1 = (* VAR_0->do_setup)(VAR_0->priv);
 if (!VAR_1) {
  VAR_0->run = 1;
  FUNC_1(&VAR_0->cond);
 }
 FUNC_3(&VAR_0->mtx);

 return (VAR_1);
}
