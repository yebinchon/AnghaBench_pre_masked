
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa1111_dev {int * hwirq; } ;
struct sa1111 {int dummy; } ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 struct sa1111* FUNC_1 (struct sa1111_dev*) ;
 int FUNC_2 (struct sa1111*,int ) ;

int FUNC_3(struct sa1111_dev *VAR_1, unsigned VAR_2)
{
 struct sa1111 *VAR_3 = FUNC_1(VAR_1);
 if (VAR_2 >= FUNC_0(VAR_1->hwirq))
  return -VAR_0;
 return FUNC_2(VAR_3, VAR_1->hwirq[VAR_2]);
}
