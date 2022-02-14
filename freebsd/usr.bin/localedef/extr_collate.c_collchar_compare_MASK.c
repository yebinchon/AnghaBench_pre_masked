
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ wchar_t ;
struct TYPE_2__ {scalar_t__ wc; } ;
typedef TYPE_1__ collchar_t ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 wchar_t VAR_2 = ((const collchar_t *)VAR_0)->wc;
 wchar_t VAR_3 = ((const collchar_t *)VAR_1)->wc;

 return (VAR_2 < VAR_3 ? -1 : VAR_2 > VAR_3 ? 1 : 0);
}
