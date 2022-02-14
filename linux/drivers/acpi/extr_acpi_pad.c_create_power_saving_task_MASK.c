
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,void*,char*,size_t) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int ** VAR_2 ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_3;

 VAR_2[VAR_1] = FUNC_2(VAR_0,
  (void *)(unsigned long)VAR_1,
  "acpi_pad/%d", VAR_1);

 if (FUNC_0(VAR_2[VAR_1])) {
  VAR_3 = FUNC_1(VAR_2[VAR_1]);
  VAR_2[VAR_1] = ((void*)0);
 } else {
  VAR_3 = 0;
  VAR_1++;
 }

 return VAR_3;
}
