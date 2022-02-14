
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned long FUNC_2 (void*,int ) ;

__attribute__((used)) static int FUNC_3(void **VAR_5, void **VAR_6, size_t *VAR_7)
{
 unsigned long VAR_8;
 void *VAR_9;

 VAR_9 = (void *) FUNC_1(VAR_3);
 if (!VAR_9)
  return -VAR_2;
 VAR_8 = FUNC_2(VAR_9, VAR_0);
 if (VAR_8 != 1) {
  *VAR_5 = *VAR_6 = ((void*)0);
  *VAR_7 = 0;
  FUNC_0((unsigned long) VAR_9);
  return -VAR_1;
 }
 *VAR_5 = *VAR_6 = VAR_9;
 *VAR_7 = VAR_4;
 return 0;
}
