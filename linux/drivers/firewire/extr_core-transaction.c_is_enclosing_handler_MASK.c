
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_address_handler {unsigned long long offset; unsigned long long length; } ;



__attribute__((used)) static bool FUNC_0(struct fw_address_handler *VAR_0,
     unsigned long long VAR_1, size_t VAR_2)
{
 return VAR_0->offset <= VAR_1 &&
  VAR_1 + VAR_2 <= VAR_0->offset + VAR_0->length;
}
