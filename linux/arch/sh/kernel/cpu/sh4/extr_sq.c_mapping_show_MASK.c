
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sq_mapping {int name; int addr; scalar_t__ size; scalar_t__ sq_addr; struct sq_mapping* next; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,scalar_t__,scalar_t__,int ,int ) ;
 struct sq_mapping* VAR_0 ;

__attribute__((used)) static ssize_t FUNC_1(char *VAR_1)
{
 struct sq_mapping **VAR_2, *VAR_3;
 char *VAR_4 = VAR_1;

 for (VAR_2 = &VAR_0; (VAR_3 = *VAR_2); VAR_2 = &VAR_3->next)
  VAR_4 += FUNC_0(VAR_4, "%08lx-%08lx [%08lx]: %s\n",
        VAR_3->sq_addr, VAR_3->sq_addr + VAR_3->size,
        VAR_3->addr, VAR_3->name);

 return VAR_4 - VAR_1;
}
