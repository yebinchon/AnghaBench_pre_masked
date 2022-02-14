
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flusher_data {unsigned long addr1; unsigned long addr2; } ;


 int FUNC_0 (void*,unsigned long) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct flusher_data *VAR_1 = VAR_0;
 unsigned long VAR_2, VAR_3;

 VAR_2 = VAR_1->addr1;
 VAR_3 = VAR_1->addr2;

 FUNC_0((void *)VAR_2, VAR_3 - VAR_2);
}
