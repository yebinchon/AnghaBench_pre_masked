
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int const*) ;

__attribute__((used)) static u32 FUNC_1(u32 VAR_0, u32 VAR_1)
{




 static const int VAR_2[] = {
  0, 8, 16, 24,
  64, 80, 96, 112,
  512, 576, 640, 704,
  768, 832, 896, 960
  };
 int VAR_3, VAR_4 = FUNC_0(VAR_2);
 unsigned int VAR_5;

 VAR_5 = VAR_0 * VAR_1 / 1000;
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
  if (VAR_5 < VAR_2[VAR_3])
   break;

 VAR_5 = VAR_3;
 if (VAR_5 == VAR_4)

  VAR_5 = VAR_4 - 1;

 return VAR_5;
}
