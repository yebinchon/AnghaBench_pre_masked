
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ddsPF_t ;
struct TYPE_4__ {unsigned int fourCC; } ;
struct TYPE_5__ {TYPE_1__ pixelFormat; } ;
typedef TYPE_2__ ddsBuffer_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_0( ddsBuffer_t *VAR_7, ddsPF_t *VAR_8 ){
 unsigned int VAR_9;



 if ( VAR_7 == ((void*)0) || VAR_8 == ((void*)0) ) {
  return;
 }


 VAR_9 = VAR_7->pixelFormat.fourCC;


 if ( VAR_9 == 0 ) {
  *VAR_8 = VAR_0;
 }
 else if ( VAR_9 == *( (unsigned int*) "DXT1" ) ) {
  *VAR_8 = VAR_1;
 }
 else if ( VAR_9 == *( (unsigned int*) "DXT2" ) ) {
  *VAR_8 = VAR_2;
 }
 else if ( VAR_9 == *( (unsigned int*) "DXT3" ) ) {
  *VAR_8 = VAR_3;
 }
 else if ( VAR_9 == *( (unsigned int*) "DXT4" ) ) {
  *VAR_8 = VAR_4;
 }
 else if ( VAR_9 == *( (unsigned int*) "DXT5" ) ) {
  *VAR_8 = VAR_5;
 }
 else{
  *VAR_8 = VAR_6;
 }
}
