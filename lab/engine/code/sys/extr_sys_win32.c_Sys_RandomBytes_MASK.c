
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;
typedef int byte ;
typedef int HCRYPTPROV ;
typedef int BYTE ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *,int ,int ) ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

qboolean FUNC_3( byte *VAR_4, int VAR_5 )
{
 HCRYPTPROV VAR_6;

 if( !FUNC_0( &VAR_6, ((void*)0), ((void*)0),
  VAR_1, VAR_0 ) ) {

  return VAR_2;
 }

 if( !FUNC_1( VAR_6, VAR_5, (BYTE *)VAR_4 ) ) {
  FUNC_2( VAR_6, 0 );
  return VAR_2;
 }
 FUNC_2( VAR_6, 0 );
 return VAR_3;
}
