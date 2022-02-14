
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s_inverse_encoding ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned char*,int,int) ;
 size_t* VAR_0 ;

__attribute__((used)) static int FUNC_2( unsigned char* VAR_1, const char* VAR_2,
 int VAR_3 )
{
 static unsigned char VAR_4[256];
 static char VAR_5 = 0;

 unsigned char VAR_6[3];
 unsigned char VAR_7[4];
 int VAR_8 = 0;
 int VAR_9;
 int VAR_10;
 int VAR_11;

 FUNC_0( VAR_1 != ((void*)0) );
 FUNC_0( VAR_2 != ((void*)0) );

 if( !VAR_5 )
 {

  FUNC_1( VAR_4, 255, sizeof(VAR_4) );
  for( VAR_9 = 0; VAR_9 < 64; VAR_9++ )
  {
   VAR_4[VAR_0[VAR_9]] = VAR_9;
  }
  VAR_5 = 1;
 }

 for( VAR_9 = 0; VAR_9 < VAR_3; VAR_9 += 4 )
 {

  for( VAR_10 = 0; VAR_10 < 4; VAR_10++ )
  {
   VAR_7[VAR_10] = (VAR_9 + VAR_10 < VAR_3) ? VAR_4[VAR_2[VAR_9 + VAR_10]] : 0;
   if (VAR_7[VAR_10] == 255)
   {
    return 0;
   }
  }


  VAR_6[0] = (VAR_7[0] << 2) | (VAR_7[1] >> 4);
  VAR_6[1] = (VAR_7[1] << 4) | (VAR_7[2] >> 2);
  VAR_6[2] = (VAR_7[2] << 6) | VAR_7[3];


  VAR_11 = (VAR_9 + 3 < VAR_3) ? 3 : ((VAR_3 - VAR_9) * 3) / 4;
  for( VAR_10 = 0; VAR_10 < VAR_11; VAR_10++ )
  {
   VAR_1[VAR_8++] = VAR_6[VAR_10];
  }
 }

 return VAR_8;
}
