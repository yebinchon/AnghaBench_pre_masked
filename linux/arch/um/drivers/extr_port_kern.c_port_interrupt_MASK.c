
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_list {int has_connection; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_2, void *VAR_3)
{
 struct port_list *VAR_4 = VAR_3;

 VAR_4->has_connection = 1;
 FUNC_0(&VAR_1);
 return VAR_0;
}
