
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_descriptor {size_t length; scalar_t__ immediate; } ;



__attribute__((used)) static size_t FUNC_0(struct fw_descriptor *VAR_0)
{

 return VAR_0->length + 1 + (VAR_0->immediate > 0 ? 1 : 0);
}
