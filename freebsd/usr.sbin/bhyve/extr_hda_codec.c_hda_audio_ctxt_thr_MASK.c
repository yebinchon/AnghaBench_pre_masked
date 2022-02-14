
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_audio_ctxt {int mtx; int priv; int (* do_transfer ) (int ) ;int cond; int run; int name; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void *
FUNC_6(void *VAR_0)
{
 struct hda_audio_ctxt *VAR_1 = VAR_0;

 FUNC_0("Start Thread: %s\n", VAR_1->name);

 FUNC_3(&VAR_1->mtx);
 while (1) {
  while (!VAR_1->run)
   FUNC_1(&VAR_1->cond, &VAR_1->mtx);

  VAR_1->do_transfer(VAR_1->priv);
 }
 FUNC_4(&VAR_1->mtx);

 FUNC_2(((void*)0));
 return (((void*)0));
}
