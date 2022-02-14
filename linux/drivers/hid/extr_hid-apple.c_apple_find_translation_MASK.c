
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct apple_key_translation {scalar_t__ from; } ;



__attribute__((used)) static const struct apple_key_translation *FUNC_0(
  const struct apple_key_translation *VAR_0, u16 VAR_1)
{
 const struct apple_key_translation *VAR_2;


 for (VAR_2 = VAR_0; VAR_2->from; VAR_2++)
  if (VAR_2->from == VAR_1)
   return VAR_2;

 return ((void*)0);
}
