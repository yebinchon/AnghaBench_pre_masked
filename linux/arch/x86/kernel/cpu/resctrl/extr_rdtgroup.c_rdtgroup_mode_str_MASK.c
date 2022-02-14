
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum rdtgrp_mode { ____Placeholder_rdtgrp_mode } rdtgrp_mode ;


 int VAR_0 ;
 int VAR_1 ;
 char const** VAR_2 ;

__attribute__((used)) static const char *FUNC_0(enum rdtgrp_mode VAR_3)
{
 if (VAR_3 < VAR_0 || VAR_3 >= VAR_1)
  return "unknown";

 return VAR_2[VAR_3];
}
