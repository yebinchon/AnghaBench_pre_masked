
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;


 unsigned long FUNC_0 (void*) ;
 int FUNC_1 (struct resource*) ;
 struct resource* FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (char*,unsigned long,void*) ;
 int FUNC_4 (char*,void*) ;
 int FUNC_5 (struct resource*) ;
 unsigned long FUNC_6 (struct resource*) ;
 int VAR_0 ;

void FUNC_7(void *VAR_1)
{
 unsigned long VAR_2 = FUNC_0(VAR_1);
 struct resource *VAR_3;
 unsigned long VAR_4;

 VAR_3 = FUNC_2(&VAR_0, VAR_2);
 if (!VAR_3) {
  FUNC_4("atari_stram_free: trying to free nonexistent region "
         "at %p\n", VAR_1);
  return;
 }

 VAR_4 = FUNC_6(VAR_3);
 FUNC_3("atari_stram_free: free %lu bytes at %p\n", VAR_4, VAR_1);
 FUNC_5(VAR_3);
 FUNC_1(VAR_3);
}
