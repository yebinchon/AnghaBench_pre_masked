
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmi_header {int length; } ;



__attribute__((used)) static size_t FUNC_0(const struct dmi_header *VAR_0)
{
 const char *VAR_1 = (const char *)VAR_0;

 VAR_1 += VAR_0->length;

 while (VAR_1[0] || VAR_1[1])
  VAR_1++;

 return 2 + VAR_1 - (const char *)VAR_0;
}
