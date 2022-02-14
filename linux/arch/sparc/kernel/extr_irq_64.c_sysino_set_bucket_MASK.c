
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_handler_data {int dev_ino; int dev_handle; } ;
struct ino_bucket {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ino_bucket*) ;
 int FUNC_2 (int ,unsigned int) ;
 struct irq_handler_data* FUNC_3 (unsigned int) ;
 struct ino_bucket* VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(unsigned int VAR_2)
{
 struct irq_handler_data *VAR_3 = FUNC_3(VAR_2);
 struct ino_bucket *VAR_4;
 unsigned long VAR_5;

 VAR_5 = FUNC_4(VAR_3->dev_handle, VAR_3->dev_ino);
 FUNC_0(VAR_5 >= VAR_1);
 VAR_4 = &VAR_0[VAR_5];
 FUNC_2(FUNC_1(VAR_4), VAR_2);
}
