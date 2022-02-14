
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int byte ;
struct TYPE_2__ {int (* Hunk_FreeTempMemory ) (int *) ;int * (* Hunk_AllocateTempMemory ) (int) ;} ;
typedef int GLuint ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ,int,int,int,int,int,int ,int,int *) ;
 TYPE_1__ VAR_2 ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(GLuint VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8, byte *VAR_9)
{
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 byte *VAR_15, *VAR_16;

 VAR_10 = (VAR_7 + 3) / 4;
 VAR_11 = (VAR_8 + 3) / 4;
 VAR_14 = VAR_10 * VAR_11 * 16;

 VAR_16 = VAR_15 = VAR_2.Hunk_AllocateTempMemory(VAR_14);
 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12 += 4)
 {
  int VAR_17 = FUNC_1(4, VAR_8 - VAR_12);

  for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13 += 4)
  {
   byte VAR_18[16];
   int VAR_19;

   int VAR_20 = FUNC_1(4, VAR_7 - VAR_13);

   for (VAR_19 = 0; VAR_19 < 2; VAR_19++)
   {
    int VAR_21, VAR_22;

    for (VAR_22 = 0; VAR_22 < VAR_17; VAR_22++)
     for (VAR_21 = 0; VAR_21 < VAR_20; VAR_21++)
      VAR_18[VAR_22 * 4 + VAR_21] = VAR_9[((VAR_12 + VAR_22) * VAR_7 + VAR_13 + VAR_21) * 4 + VAR_19];


    for (VAR_22 = 0; VAR_22 < 4; VAR_22++)
     for (VAR_21 = (VAR_22 < VAR_17) ? VAR_20 : 0; VAR_21 < 4; VAR_21++)
      VAR_18[VAR_22 * 4 + VAR_21] = VAR_18[(VAR_22 % VAR_17) * 4 + VAR_21 % VAR_20];

    FUNC_0(VAR_16, VAR_18);
    VAR_16 += 8;
   }
  }
 }


 FUNC_2(VAR_3, VAR_1, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_0, VAR_14, VAR_15);

 VAR_2.Hunk_FreeTempMemory(VAR_15);
}
