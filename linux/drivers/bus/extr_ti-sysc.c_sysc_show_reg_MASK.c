
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysc {scalar_t__* offsets; } ;
typedef enum sysc_registers { ____Placeholder_sysc_registers } sysc_registers ;


 int FUNC_0 (char*,char*,...) ;

__attribute__((used)) static int FUNC_1(struct sysc *VAR_0,
    char *VAR_1, enum sysc_registers VAR_2)
{
 if (VAR_0->offsets[VAR_2] < 0)
  return FUNC_0(VAR_1, ":NA");

 return FUNC_0(VAR_1, ":%x", VAR_0->offsets[VAR_2]);
}
