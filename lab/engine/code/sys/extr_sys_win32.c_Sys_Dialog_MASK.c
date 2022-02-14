
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dialogType_t ;
typedef int dialogResult_t ;
typedef int UINT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,char const*,char const*,int) ;

dialogResult_t FUNC_1( dialogType_t VAR_11, const char *VAR_12, const char *VAR_13 )
{
 UINT VAR_14;

 switch( VAR_11 )
 {
  default:
  case 135: VAR_14 = VAR_5|VAR_8; break;
  case 133: VAR_14 = VAR_7|VAR_8; break;
  case 136: VAR_14 = VAR_4|VAR_8; break;
  case 132: VAR_14 = VAR_6|VAR_10; break;
  case 134: VAR_14 = VAR_7|VAR_9; break;
 }

 switch( FUNC_0( ((void*)0), VAR_12, VAR_13, VAR_14 ) )
 {
  default:
  case 129: return VAR_2;
  case 131: return VAR_0;
  case 128: return VAR_3;
  case 130: return VAR_1;
 }
}
