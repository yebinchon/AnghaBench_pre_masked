
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char* wstr; int cstr; } ;
struct bwstring {size_t len; TYPE_1__ data; } ;
typedef int mbstate_t ;
typedef int mbs ;


 int VAR_0 ;
 struct bwstring* FUNC_0 (size_t) ;
 int FUNC_1 (int,char*) ;
 size_t FUNC_2 (char const*,size_t,int *) ;
 size_t FUNC_3 (unsigned char*,char const*,size_t,int *) ;
 int FUNC_4 (int ,unsigned char const*,size_t) ;
 int FUNC_5 (int *,int ,int) ;

struct bwstring *
FUNC_6(const unsigned char *VAR_1, size_t VAR_2)
{
 struct bwstring *VAR_3;

 VAR_3 = FUNC_0(VAR_2);

 if (VAR_1) {
  if (VAR_0 == 1)
   FUNC_4(VAR_3->data.cstr, VAR_1, VAR_2);
  else {
   mbstate_t VAR_4;
   const char *VAR_5;
   size_t VAR_6, VAR_7, VAR_8;

   VAR_7 = 0;
   VAR_8 = 0;
   VAR_5 = (const char *) VAR_1;

   FUNC_5(&VAR_4, 0, sizeof(VAR_4));

   while (VAR_8 < VAR_2) {
    size_t VAR_9 = VAR_0;

    if (VAR_9 > VAR_2 - VAR_8)
     VAR_9 = VAR_2 - VAR_8;
    VAR_6 = FUNC_2(VAR_5 + VAR_8, VAR_9, &VAR_4);
    switch (VAR_6) {
    case 0:

    case (size_t) -1:

    case (size_t) -2:
     VAR_3->data.wstr[VAR_7++] =
         (unsigned char) VAR_5[VAR_8];
     ++VAR_8;
     break;
    default:
     VAR_9 = FUNC_3(VAR_3->data.wstr + (VAR_7++),
         VAR_5 + VAR_8, VAR_6, &VAR_4);
     if ((VAR_9 == (size_t)-1) || (VAR_9 == (size_t)-2))

      FUNC_1(2, "mbrtowc error");
     VAR_8 += VAR_6;
    }
   }

   VAR_3->len = VAR_7;
   VAR_3->data.wstr[VAR_3->len] = L'\0';
  }
 }
 return (VAR_3);
}
