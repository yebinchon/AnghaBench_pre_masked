
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0( int VAR_0 ){
 return ( ( VAR_0 & 0xFF000000 ) >> 24 ) |
     ( ( VAR_0 & 0x00FF0000 ) >> 8 ) |
     ( ( VAR_0 & 0x0000FF00 ) << 8 ) |
     ( ( VAR_0 & 0x000000FF ) << 24 );
}
