
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orc_entry {int dummy; } ;


 int* VAR_0 ;
 struct orc_entry* VAR_1 ;

__attribute__((used)) static void FUNC_0(void *VAR_2, void *VAR_3, int VAR_4)
{
 struct orc_entry *VAR_5, *VAR_6;
 struct orc_entry VAR_7;
 int *VAR_8 = VAR_2, *VAR_9 = VAR_3, VAR_10;
 int VAR_11 = VAR_3 - VAR_2;


 VAR_10 = *VAR_8;
 *VAR_8 = *VAR_9 + VAR_11;
 *VAR_9 = VAR_10 - VAR_11;


 VAR_5 = VAR_1 + (VAR_8 - VAR_0);
 VAR_6 = VAR_1 + (VAR_9 - VAR_0);
 VAR_7 = *VAR_5;
 *VAR_5 = *VAR_6;
 *VAR_6 = VAR_7;
}
