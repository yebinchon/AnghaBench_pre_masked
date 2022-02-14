
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* data; } ;
typedef TYPE_1__ ddsBuffer_t ;



__attribute__((used)) static int FUNC_0( ddsBuffer_t *VAR_0, int VAR_1, int VAR_2, unsigned char *VAR_3 ){
 int VAR_4, VAR_5;
 unsigned char *VAR_6, *VAR_7;



 VAR_6 = VAR_0->data;
 VAR_7 = VAR_3;


 for ( VAR_5 = 0; VAR_5 < VAR_2; VAR_5++ )
 {

  for ( VAR_4 = 0; VAR_4 < VAR_1; VAR_4++ )
  {
   *VAR_7++ = *VAR_6++;
   *VAR_7++ = *VAR_6++;
   *VAR_7++ = *VAR_6++;
   *VAR_7++ = *VAR_6++;
  }
 }


 return 0;
}
