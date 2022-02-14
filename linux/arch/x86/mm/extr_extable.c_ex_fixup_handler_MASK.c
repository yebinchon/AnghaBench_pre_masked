
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exception_table_entry {scalar_t__ handler; } ;
typedef int ex_handler_t ;



__attribute__((used)) static inline ex_handler_t
FUNC_0(const struct exception_table_entry *VAR_0)
{
 return (ex_handler_t)((unsigned long)&VAR_0->handler + VAR_0->handler);
}
