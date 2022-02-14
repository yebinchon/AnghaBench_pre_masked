
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t pcre_uchar ;
typedef int BOOL ;


 int FUNC_0 (size_t const*,int) ;
 size_t const VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int ) ;

__attribute__((used)) static const pcre_uchar*
FUNC_2(const pcre_uchar *VAR_2, BOOL VAR_3)
{
for (;;)
  {
  switch ((int)*VAR_2)
    {
    case 136:
    case 138:
    case 137:
    if (!VAR_3) return VAR_2;
    do VAR_2 += FUNC_0(VAR_2, 1); while (*VAR_2 == VAR_0);
    VAR_2 += FUNC_1(VAR_1)[*VAR_2];
    break;

    case 128:
    case 130:
    if (!VAR_3) return VAR_2;


    case 135:
    case 134:
    case 132:
    case 129:
    case 131:
    case 133:
    VAR_2 += FUNC_1(VAR_1)[*VAR_2];
    break;

    default:
    return VAR_2;
    }
  }

}
