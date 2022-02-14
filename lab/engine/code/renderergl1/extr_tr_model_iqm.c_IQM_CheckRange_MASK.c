
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_3__ {int filesize; } ;
typedef TYPE_1__ iqmHeader_t ;



__attribute__((used)) static qboolean FUNC_0( iqmHeader_t *VAR_0, int VAR_1,
    int VAR_2, int VAR_3 ) {


 return ( VAR_2 <= 0 ||
   VAR_1 <= 0 ||
   VAR_1 > VAR_0->filesize ||
   VAR_1 + VAR_2 * VAR_3 < 0 ||
   VAR_1 + VAR_2 * VAR_3 > VAR_0->filesize );
}
