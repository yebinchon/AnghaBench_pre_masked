
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa1111 {int dummy; } ;
struct irq_domain {struct sa1111* host_data; } ;
typedef scalar_t__ irq_hw_number_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (unsigned int,int *,int ) ;
 int FUNC_2 (unsigned int,struct sa1111*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_3(struct irq_domain *VAR_7, unsigned int VAR_8,
 irq_hw_number_t VAR_9)
{
 struct sa1111 *VAR_10 = VAR_7->host_data;


 if (VAR_9 > VAR_4 && VAR_9 < VAR_0)
  return -VAR_1;

 FUNC_2(VAR_8, VAR_10);
 FUNC_1(VAR_8, &VAR_6, VAR_5);
 FUNC_0(VAR_8, VAR_3 | VAR_2);

 return 0;
}
