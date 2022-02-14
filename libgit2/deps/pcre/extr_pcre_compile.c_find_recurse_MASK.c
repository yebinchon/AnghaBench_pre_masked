
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pcre_uchar ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int const*,int) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int const) ;
 int VAR_0 ;


 int VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_3 (int ) ;

__attribute__((used)) static const pcre_uchar *
FUNC_4(const pcre_uchar *VAR_7, BOOL VAR_8)
{
for (;;)
  {
  register pcre_uchar VAR_9 = *VAR_7;
  if (VAR_9 == VAR_1) return ((void*)0);
  if (VAR_9 == VAR_4) return VAR_7;





  if (VAR_9 == VAR_5) VAR_7 += FUNC_0(VAR_7, 1);






  else
    {
    switch(VAR_9)
      {
      case 131:
      case 139:
      case 137:
      case 141:
      case 132:
      case 140:
      case 134:
      case 136:
      case 135:
      if (VAR_7[1] == VAR_3 || VAR_7[1] == VAR_2) VAR_7 += 2;
      break;

      case 133:
      case 130:
      case 138:
      case 142:
      if (VAR_7[1 + VAR_0] == VAR_3 || VAR_7[1 + VAR_0] == VAR_2)
        VAR_7 += 2;
      break;

      case 196:
      case 149:
      case 146:
      case 143:
      VAR_7 += VAR_7[1];
      break;
      }



    VAR_7 += FUNC_3(VAR_6)[VAR_9];
    (void)(VAR_8);

    }
  }
}
