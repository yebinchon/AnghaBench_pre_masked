
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ wchar_t ;
struct TYPE_4__ {char const* name; scalar_t__ wc; } ;
typedef TYPE_1__ charmap_t ;


 TYPE_1__* FUNC_0 (int ,int *,TYPE_1__*) ;
 int VAR_0 ;

int
FUNC_1(const char *VAR_1, wchar_t *VAR_2)
{
 charmap_t VAR_3;
 charmap_t *VAR_4;

 VAR_3.name = VAR_1;
 VAR_4 = FUNC_0(VAR_0, &VAR_0, &VAR_3);
 if (VAR_4 && VAR_4->wc != (wchar_t)-1) {
  if (VAR_2)
   *VAR_2 = VAR_4->wc;
  return (0);
 }
 return (-1);
}
