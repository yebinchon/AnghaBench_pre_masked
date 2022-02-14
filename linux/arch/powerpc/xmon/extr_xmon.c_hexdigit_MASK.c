
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static int FUNC_0(int VAR_1)
{
 if( '0' <= VAR_1 && VAR_1 <= '9' )
  return VAR_1 - '0';
 if( 'A' <= VAR_1 && VAR_1 <= 'F' )
  return VAR_1 - ('A' - 10);
 if( 'a' <= VAR_1 && VAR_1 <= 'f' )
  return VAR_1 - ('a' - 10);
 return VAR_0;
}
