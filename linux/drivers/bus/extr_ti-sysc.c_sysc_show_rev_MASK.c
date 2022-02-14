
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysc {scalar_t__* offsets; int revision; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*,char*,...) ;

__attribute__((used)) static int FUNC_1(char *VAR_1, struct sysc *VAR_2)
{
 int VAR_3;

 if (VAR_2->offsets[VAR_0] < 0)
  return FUNC_0(VAR_1, ":NA");

 VAR_3 = FUNC_0(VAR_1, ":%08x", VAR_2->revision);

 return VAR_3;
}
