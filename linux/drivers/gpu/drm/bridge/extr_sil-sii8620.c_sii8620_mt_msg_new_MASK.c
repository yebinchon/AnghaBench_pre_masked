
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sii8620_mt_msg {int node; } ;
struct sii8620 {int mt_queue; int error; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sii8620_mt_msg* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static struct sii8620_mt_msg *FUNC_2(struct sii8620 *VAR_2)
{
 struct sii8620_mt_msg *VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_1);

 if (!VAR_3)
  VAR_2->error = -VAR_0;
 else
  FUNC_1(&VAR_3->node, &VAR_2->mt_queue);

 return VAR_3;
}
