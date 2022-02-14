
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {struct aspeed_vic* host_data; } ;
struct aspeed_vic {unsigned int* edge_sources; } ;
typedef int irq_hw_number_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int,int *,int ) ;
 int FUNC_1 (unsigned int,struct aspeed_vic*) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static int FUNC_3(struct irq_domain *VAR_4, unsigned int VAR_5,
      irq_hw_number_t VAR_6)
{
 struct aspeed_vic *VAR_7 = VAR_4->host_data;
 unsigned int VAR_8 = VAR_6 >> 5;
 unsigned int VAR_9 = 1u << (VAR_6 & 0x1f);


 if (VAR_8 > 1)
  return -VAR_0;

 if (VAR_7->edge_sources[VAR_8] & VAR_9)
  FUNC_0(VAR_5, &VAR_1, VAR_2);
 else
  FUNC_0(VAR_5, &VAR_1, VAR_3);
 FUNC_1(VAR_5, VAR_7);
 FUNC_2(VAR_5);
 return 0;
}
