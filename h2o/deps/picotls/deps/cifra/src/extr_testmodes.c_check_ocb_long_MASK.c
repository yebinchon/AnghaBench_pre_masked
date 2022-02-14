
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int cf_aes_context ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,size_t*,size_t) ;
 int FUNC_2 (int *,int *,size_t*,size_t,size_t*,size_t,size_t*,int,size_t*,size_t*,size_t) ;
 scalar_t__ FUNC_3 (size_t*,void const*,size_t) ;
 int FUNC_4 (size_t*,int ,int) ;
 int FUNC_5 (int,size_t*) ;

__attribute__((used)) static void FUNC_6(size_t VAR_1, const void *VAR_2, size_t VAR_3)
{
  uint8_t VAR_4[22400];
  uint8_t VAR_5[32];
  uint8_t VAR_6[128] = { 0 };
  uint8_t VAR_7[12] = { 0 };
  size_t VAR_8 = 0;

  FUNC_4(VAR_5, 0, sizeof VAR_5);
  VAR_5[VAR_1 - 1] = VAR_3 * 8;

  cf_aes_context VAR_9;
  FUNC_1(&VAR_9, VAR_5, VAR_1);

  for (size_t VAR_10 = 0; VAR_10 < 128; VAR_10++)
  {

    FUNC_4(VAR_7, 0, sizeof VAR_7);
    FUNC_5(3 * VAR_10 + 1, VAR_7 + 8);



    FUNC_2(&VAR_0, &VAR_9,
                   VAR_6, VAR_10,
                   VAR_6, VAR_10,
                   VAR_7, sizeof VAR_7,
                   VAR_4 + VAR_8,
                   VAR_4 + VAR_8 + VAR_10,
                   VAR_3);
    VAR_8 += VAR_10 + VAR_3;


    FUNC_5(3 * VAR_10 + 2, VAR_7 + 8);


    FUNC_2(&VAR_0, &VAR_9,
                   VAR_6, VAR_10,
                   ((void*)0), 0,
                   VAR_7, sizeof VAR_7,
                   VAR_4 + VAR_8,
                   VAR_4 + VAR_8 + VAR_10,
                   VAR_3);
    VAR_8 += VAR_10 + VAR_3;


    FUNC_5(3 * VAR_10 + 3, VAR_7 + 8);


    FUNC_2(&VAR_0, &VAR_9,
                   ((void*)0), 0,
                   VAR_6, VAR_10,
                   VAR_7, sizeof VAR_7,
                   ((void*)0),
                   VAR_4 + VAR_8,
                   VAR_3);
    VAR_8 += VAR_3;
  }


  FUNC_5(385, VAR_7 + 8);


  uint8_t VAR_11[16];
  FUNC_2(&VAR_0, &VAR_9,
                 ((void*)0), 0,
                 VAR_4, VAR_8,
                 VAR_7, sizeof VAR_7,
                 ((void*)0),
                 VAR_11, VAR_3);

  FUNC_0(FUNC_3(VAR_11, VAR_2, VAR_3) == 0);
}
