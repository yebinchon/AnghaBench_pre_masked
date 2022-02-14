
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsldma_chan {int idle; int desc_lock; } ;


 int FUNC_0 (struct fsldma_chan*,char*) ;
 int FUNC_1 (struct fsldma_chan*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_0)
{
 struct fsldma_chan *VAR_1 = (struct fsldma_chan *)VAR_0;

 FUNC_0(VAR_1, "tasklet entry\n");

 FUNC_2(&VAR_1->desc_lock);


 VAR_1->idle = 1;


 FUNC_1(VAR_1);

 FUNC_3(&VAR_1->desc_lock);

 FUNC_0(VAR_1, "tasklet exit\n");
}
