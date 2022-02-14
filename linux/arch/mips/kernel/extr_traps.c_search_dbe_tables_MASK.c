
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exception_table_entry {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct exception_table_entry* FUNC_0 (scalar_t__,scalar_t__,unsigned long) ;
 struct exception_table_entry* FUNC_1 (unsigned long) ;

__attribute__((used)) static const struct exception_table_entry *FUNC_2(unsigned long VAR_2)
{
 const struct exception_table_entry *VAR_3;

 VAR_3 = FUNC_0(VAR_0,
      VAR_1 - VAR_0, VAR_2);
 if (!VAR_3)
  VAR_3 = FUNC_1(VAR_2);
 return VAR_3;
}
