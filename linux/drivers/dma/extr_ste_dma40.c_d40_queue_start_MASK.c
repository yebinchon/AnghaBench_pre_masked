
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct d40_desc {int dummy; } ;
struct d40_chan {int busy; TYPE_1__* base; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct d40_chan*,struct d40_desc*) ;
 int FUNC_1 (struct d40_desc*) ;
 int FUNC_2 (struct d40_chan*,struct d40_desc*) ;
 struct d40_desc* FUNC_3 (struct d40_chan*) ;
 int FUNC_4 (struct d40_chan*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static struct d40_desc *FUNC_6(struct d40_chan *VAR_0)
{
 struct d40_desc *VAR_1;
 int VAR_2;


 VAR_1 = FUNC_3(VAR_0);

 if (VAR_1 != ((void*)0)) {
  if (!VAR_0->busy) {
   VAR_0->busy = 1;
   FUNC_5(VAR_0->base->dev);
  }


  FUNC_1(VAR_1);


  FUNC_2(VAR_0, VAR_1);


  FUNC_0(VAR_0, VAR_1);


  VAR_2 = FUNC_4(VAR_0);

  if (VAR_2)
   return ((void*)0);
 }

 return VAR_1;
}
