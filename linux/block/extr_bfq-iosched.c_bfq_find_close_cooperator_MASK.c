
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfq_queue {int dummy; } ;
struct bfq_data {int dummy; } ;
typedef int sector_t ;


 struct bfq_queue* FUNC_0 (struct bfq_data*,struct bfq_queue*,int ) ;

__attribute__((used)) static struct bfq_queue *FUNC_1(struct bfq_data *VAR_0,
         struct bfq_queue *VAR_1,
         sector_t VAR_2)
{
 struct bfq_queue *VAR_3;
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (!VAR_3 || VAR_3 == VAR_1)
  return ((void*)0);

 return VAR_3;
}
