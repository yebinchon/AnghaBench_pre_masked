
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
signed short FUNC_0( int VAR_0 ) {
 if ( VAR_0 < -32768 ) {
  return -32768;
 }
 if ( VAR_0 > 0x7fff ) {
  return 0x7fff;
 }
 return VAR_0;
}
