
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(unsigned int VAR_1)
{
 VAR_1 = VAR_1 & 7 ? (VAR_1 / 8) + 1 : VAR_1 / 8;
 return VAR_1 < VAR_0 ? VAR_1 : VAR_0 - 1;
}
