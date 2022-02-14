
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned int const*) ;

__attribute__((used)) static unsigned FUNC_1(unsigned VAR_0,
          unsigned VAR_1)
{
 static const unsigned int VAR_2[] = {
    0, 8, 16, 24,
   64, 80, 96, 112,
  512, 576, 640, 704,
  768, 832, 896, 960
  };
 unsigned VAR_3, VAR_4;






 VAR_3 = VAR_0 * VAR_1 / 1000;
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++)
  if (VAR_2[VAR_4] > VAR_3)
   break;

 return VAR_4;
}
