
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pstore {scalar_t__ valid; } ;
struct dm_exception_store {int dummy; } ;


 int FUNC_0 (char*) ;
 struct pstore* FUNC_1 (struct dm_exception_store*) ;
 scalar_t__ FUNC_2 (struct pstore*) ;

__attribute__((used)) static void FUNC_3(struct dm_exception_store *VAR_0)
{
 struct pstore *VAR_1 = FUNC_1(VAR_0);

 VAR_1->valid = 0;
 if (FUNC_2(VAR_1))
  FUNC_0("write header failed");
}
