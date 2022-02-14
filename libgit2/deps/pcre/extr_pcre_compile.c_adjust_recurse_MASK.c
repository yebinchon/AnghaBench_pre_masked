
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pcre_uchar ;
struct TYPE_3__ {int * hwm; scalar_t__ start_workspace; int * start_code; } ;
typedef TYPE_1__ compile_data ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int *,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int,int) ;
 scalar_t__ FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(pcre_uchar *VAR_1, int VAR_2, BOOL VAR_3, compile_data *VAR_4,
  size_t VAR_5)
{
int VAR_6;
pcre_uchar *VAR_7;
pcre_uchar *VAR_8 = VAR_1;

while ((VAR_8 = (pcre_uchar *)FUNC_2(VAR_8, VAR_3)) != ((void*)0))
  {
  for (VAR_7 = (pcre_uchar *)VAR_4->start_workspace + VAR_5; VAR_7 < VAR_4->hwm;
       VAR_7 += VAR_0)
    {
    VAR_6 = (int)FUNC_0(VAR_7, 0);
    if (VAR_4->start_code + VAR_6 == VAR_8 + 1) break;
    }




  if (VAR_7 >= VAR_4->hwm)
    {
    VAR_6 = (int)FUNC_0(VAR_8, 1);
    if (VAR_4->start_code + VAR_6 >= VAR_1) FUNC_1(VAR_8, 1, VAR_6 + VAR_2);
    }

  VAR_8 += 1 + VAR_0;
  }



for (VAR_7 = (pcre_uchar *)VAR_4->start_workspace + VAR_5; VAR_7 < VAR_4->hwm;
     VAR_7 += VAR_0)
  {
  VAR_6 = (int)FUNC_0(VAR_7, 0);
  FUNC_1(VAR_7, 0, VAR_6 + VAR_2);
  }
}
