
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coh901318_desc {int lli; int head_ctrl; int head_config; } ;
struct coh901318_chan {int busy; } ;


 int FUNC_0 (struct coh901318_desc*) ;
 int FUNC_1 (struct coh901318_chan*,struct coh901318_desc*) ;
 struct coh901318_desc* FUNC_2 (struct coh901318_chan*) ;
 int FUNC_3 (struct coh901318_chan*,int ) ;
 int FUNC_4 (struct coh901318_chan*,int ) ;
 int FUNC_5 (struct coh901318_chan*,int ) ;
 int FUNC_6 (struct coh901318_chan*) ;

__attribute__((used)) static struct coh901318_desc *FUNC_7(struct coh901318_chan *VAR_0)
{
 struct coh901318_desc *VAR_1;





 VAR_1 = FUNC_2(VAR_0);

 if (VAR_1 != ((void*)0)) {

  FUNC_0(VAR_1);

  VAR_0->busy = 1;

  FUNC_1(VAR_0, VAR_1);


  FUNC_4(VAR_0, VAR_1->head_config);
  FUNC_5(VAR_0, VAR_1->head_ctrl);
  FUNC_3(VAR_0, VAR_1->lli);


  FUNC_6(VAR_0);

 }

 return VAR_1;
}
