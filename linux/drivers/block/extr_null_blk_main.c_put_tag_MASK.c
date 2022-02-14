
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nullb_queue {int wait; int tag_map; } ;


 int FUNC_0 (unsigned int,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct nullb_queue *VAR_0, unsigned int VAR_1)
{
 FUNC_0(VAR_1, VAR_0->tag_map);

 if (FUNC_1(&VAR_0->wait))
  FUNC_2(&VAR_0->wait);
}
