
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLFWwindow ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 double VAR_3 ;
 double VAR_4 ;
 double VAR_5 ;

void FUNC_1( GLFWwindow* VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10 )
{
  if( VAR_9 != VAR_1 ) return;

  switch (VAR_7) {
  case 128:
    if( VAR_10 & VAR_0 )
      VAR_5 -= 5.0;
    else
      VAR_5 += 5.0;
    break;
  case 132:
    FUNC_0(VAR_6, VAR_2);
    break;
  case 129:
    VAR_3 += 5.0;
    break;
  case 133:
    VAR_3 -= 5.0;
    break;
  case 131:
    VAR_4 += 5.0;
    break;
  case 130:
    VAR_4 -= 5.0;
    break;
  default:
    return;
  }
}
