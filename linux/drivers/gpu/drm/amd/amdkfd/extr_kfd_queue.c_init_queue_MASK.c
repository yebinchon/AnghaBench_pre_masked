
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_properties {int dummy; } ;
struct queue {int properties; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct queue* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,struct queue_properties const*,int) ;

int FUNC_2(struct queue **VAR_2, const struct queue_properties *VAR_3)
{
 struct queue *VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_1(&VAR_4->properties, VAR_3, sizeof(*VAR_3));

 *VAR_2 = VAR_4;
 return 0;
}
