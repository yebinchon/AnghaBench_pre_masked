
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hgsmi_buffer_header {int dummy; } ;
struct gen_pool {int dummy; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct gen_pool*,unsigned long) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(struct gen_pool *VAR_1, void *VAR_2)
{
 phys_addr_t VAR_3;

 VAR_3 = FUNC_0(VAR_1, (unsigned long)VAR_2 -
           sizeof(struct hgsmi_buffer_header));
 FUNC_2(VAR_3, VAR_0);

 FUNC_1();

 return 0;
}
