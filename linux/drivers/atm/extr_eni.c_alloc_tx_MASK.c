
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eni_tx {int send; } ;
struct eni_dev {struct eni_tx* tx; } ;


 int VAR_0 ;

__attribute__((used)) static struct eni_tx *FUNC_0(struct eni_dev *VAR_1,int VAR_2)
{
 int VAR_3;

 for (VAR_3 = !VAR_2; VAR_3 < VAR_0; VAR_3++)
  if (!VAR_1->tx[VAR_3].send) return VAR_1->tx+VAR_3;
 return ((void*)0);
}
