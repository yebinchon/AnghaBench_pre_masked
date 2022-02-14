
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ddsPF_t ;
typedef int ddsBuffer_t ;


 int FUNC_0 (int *,int,int,unsigned char*) ;
 int FUNC_1 (int *,int,int,unsigned char*) ;
 int FUNC_2 (int *,int,int,unsigned char*) ;
 int FUNC_3 (int *,int,int,unsigned char*) ;
 int FUNC_4 (int *,int,int,unsigned char*) ;
 int FUNC_5 (int *,int,int,unsigned char*) ;
 int FUNC_6 (int *,int*,int*,int*) ;







 int FUNC_7 (unsigned char*,int,int) ;

int FUNC_8( ddsBuffer_t *VAR_0, unsigned char *VAR_1 ){
 int VAR_2, VAR_3, VAR_4;
 ddsPF_t VAR_5;



 VAR_4 = FUNC_6( VAR_0, &VAR_2, &VAR_3, &VAR_5 );
 if ( VAR_4 ) {
  return VAR_4;
 }


 switch ( VAR_5 )
 {
 case 134:

  VAR_4 = FUNC_0( VAR_0, VAR_2, VAR_3, VAR_1 );
  break;

 case 133:
  VAR_4 = FUNC_1( VAR_0, VAR_2, VAR_3, VAR_1 );
  break;

 case 132:
  VAR_4 = FUNC_2( VAR_0, VAR_2, VAR_3, VAR_1 );
  break;

 case 131:
  VAR_4 = FUNC_3( VAR_0, VAR_2, VAR_3, VAR_1 );
  break;

 case 130:
  VAR_4 = FUNC_4( VAR_0, VAR_2, VAR_3, VAR_1 );
  break;

 case 129:
  VAR_4 = FUNC_5( VAR_0, VAR_2, VAR_3, VAR_1 );
  break;

 default:
 case 128:
  FUNC_7( VAR_1, 0xFF, VAR_2 * VAR_3 * 4 );
  VAR_4 = -1;
  break;
 }


 return VAR_4;
}
