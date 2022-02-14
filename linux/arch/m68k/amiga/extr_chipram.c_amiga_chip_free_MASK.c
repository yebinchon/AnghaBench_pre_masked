
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;


 unsigned long FUNC_0 (void*) ;
 int FUNC_1 (unsigned long,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct resource*) ;
 struct resource* FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (char*,unsigned long,void*) ;
 int FUNC_5 (char*,void*) ;
 int FUNC_6 (struct resource*) ;
 unsigned long FUNC_7 (struct resource*) ;

void FUNC_8(void *VAR_2)
{
 unsigned long VAR_3 = FUNC_0(VAR_2);
 struct resource *VAR_4;
 unsigned long VAR_5;

 VAR_4 = FUNC_3(&VAR_1, VAR_3);
 if (!VAR_4) {
  FUNC_5("amiga_chip_free: trying to free nonexistent region at "
         "%p\n", VAR_2);
  return;
 }

 VAR_5 = FUNC_7(VAR_4);
 FUNC_4("amiga_chip_free: free %lu bytes at %p\n", VAR_5, VAR_2);
 FUNC_1(VAR_5, &VAR_0);
 FUNC_6(VAR_4);
 FUNC_2(VAR_4);
}
