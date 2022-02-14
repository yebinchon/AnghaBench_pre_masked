
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct files_ref_store {int store_flags; } ;


 int FUNC_0 (char*,char const*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct files_ref_store *VAR_1,
      const char *VAR_2)
{
 if (VAR_1->store_flags & VAR_0)
  return;

 FUNC_0("operation %s only allowed for main ref store", VAR_2);
}
