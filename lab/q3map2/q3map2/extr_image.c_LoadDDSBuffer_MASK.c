
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ddsPF_t ;
typedef int ddsBuffer_t ;
typedef int byte ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int*,int*,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,...) ;
 int * FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4( byte *VAR_5, int VAR_6, byte **VAR_7, int *VAR_8, int *VAR_9 ){
 int VAR_10, VAR_11;
 ddsPF_t VAR_12;



 if ( VAR_5 == ((void*)0) || VAR_6 <= 0 || VAR_7 == ((void*)0) || VAR_8 == ((void*)0) || VAR_9 == ((void*)0) ) {
  return;
 }


 *VAR_7 = 0;
 *VAR_8 = 0;
 *VAR_9 = 0;


 if ( FUNC_1( (ddsBuffer_t*) VAR_5, &VAR_10, &VAR_11, &VAR_12 ) ) {
  FUNC_2( VAR_4, "WARNING: Invalid DDS texture\n" );
  return;
 }


 if ( VAR_12 != VAR_0 && VAR_12 != VAR_1 && VAR_12 != VAR_2 && VAR_12 != VAR_3 ) {
  FUNC_2( VAR_4, "WARNING: Only DDS texture formats ARGB8888, DXT1, DXT3, and DXT5 are supported (%d)\n", VAR_12 );
  return;
 }


 *VAR_8 = VAR_10;
 *VAR_9 = VAR_11;
 *VAR_7 = FUNC_3( VAR_10 * VAR_11 * 4 );


 FUNC_0( (ddsBuffer_t*) VAR_5, *VAR_7 );
}
