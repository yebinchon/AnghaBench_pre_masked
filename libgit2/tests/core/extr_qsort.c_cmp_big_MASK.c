
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct big_entries {scalar_t__* c; } ;


 int FUNC_0 (void*) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1, void *VAR_2)
{
 const struct big_entries *VAR_3 = (const struct big_entries *)VAR_0, *VAR_4 = (const struct big_entries *)VAR_1;
 FUNC_0(VAR_2);
 return (VAR_3->c[0] < VAR_4->c[0]) ? -1 : (VAR_3->c[0] > VAR_4->c[0]) ? +1 : 0;
}
