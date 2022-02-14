
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ wchar_t ;
struct TYPE_2__ {unsigned char* cstr; int wstr; } ;
struct bwstring {TYPE_1__ data; } ;


 int VAR_0 ;
 int FUNC_0 (size_t) ;
 struct bwstring* FUNC_1 (size_t) ;
 int FUNC_2 (int ,scalar_t__ const*,int ) ;

struct bwstring *
FUNC_3(const wchar_t *VAR_1, size_t VAR_2)
{

 if (VAR_1 == ((void*)0))
  return ((VAR_2 == 0) ? FUNC_1(0) : ((void*)0));
 else {
  struct bwstring *VAR_3;

  VAR_3 = FUNC_1(VAR_2);

  if (VAR_0 == 1)
   for (size_t VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4)
    VAR_3->data.cstr[VAR_4] = (unsigned char) VAR_1[VAR_4];
  else
   FUNC_2(VAR_3->data.wstr, VAR_1, FUNC_0(VAR_2));

  return (VAR_3);
 }
}
