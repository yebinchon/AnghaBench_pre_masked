
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int (* sha1_access_fn ) (size_t,void*) ;
struct TYPE_2__ {int rawsz; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,unsigned char const*) ;
 int FUNC_2 (size_t) ;
 size_t FUNC_3 (unsigned char const*) ;
 TYPE_1__* VAR_0 ;

int FUNC_4(const unsigned char *VAR_1, void *VAR_2, size_t VAR_3,
      sha1_access_fn VAR_4)
{
 size_t VAR_5 = VAR_3;
 size_t VAR_6 = 0;
 size_t VAR_7 = 0;

 if (!VAR_3)
  return -1;

 if (VAR_3 != 1) {
  size_t VAR_8, VAR_9, VAR_10, VAR_11;

  for (VAR_11 = 0; VAR_11 < VAR_0->rawsz - 2; VAR_11 += 2) {
   VAR_8 = FUNC_3(VAR_4(0, VAR_2) + VAR_11);
   VAR_9 = FUNC_3(VAR_4(VAR_3 - 1, VAR_2) + VAR_11);
   VAR_10 = FUNC_3(VAR_1 + VAR_11);
   if (VAR_10 < VAR_8)
    return -1;
   if (VAR_9 < VAR_10)
    return FUNC_2(VAR_3);
   if (VAR_8 != VAR_9) {






    VAR_7 = (VAR_3 - 1) * (VAR_10 - VAR_8) / (VAR_9 - VAR_8);
    if (VAR_6 <= VAR_7 && VAR_7 < VAR_5)
     break;
    FUNC_0("assertion failed in binary search");
   }
  }
 }

 do {
  int VAR_12;
  VAR_12 = FUNC_1(VAR_4(VAR_7, VAR_2), VAR_1);
  if (!VAR_12)
   return VAR_7;
  if (VAR_12 > 0)
   VAR_5 = VAR_7;
  else
   VAR_6 = VAR_7 + 1;
  VAR_7 = VAR_6 + (VAR_5 - VAR_6) / 2;
 } while (VAR_6 < VAR_5);
 return FUNC_2(VAR_6);
}
