
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct log_entry {int operation; int* args; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct log_entry* VAR_3 ;

void
FUNC_0(int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 struct log_entry *VAR_8;

 VAR_8 = &VAR_3[VAR_2];
 VAR_8->operation = VAR_4;
 VAR_8->args[0] = VAR_5;
 VAR_8->args[1] = VAR_6;
 VAR_8->args[2] = VAR_7;
 VAR_2++;
 VAR_1++;
 if (VAR_2 >= VAR_0)
  VAR_2 = 0;
}
