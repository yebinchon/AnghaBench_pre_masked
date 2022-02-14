
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct range {int start; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct range *VAR_2 = VAR_0;
 const struct range *VAR_3 = VAR_1;
 int VAR_4, VAR_5;

 VAR_4 = VAR_2->start >> 32;
 VAR_5 = VAR_3->start >> 32;

 return VAR_4 - VAR_5;
}
