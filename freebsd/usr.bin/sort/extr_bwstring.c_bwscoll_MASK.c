
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ wchar_t ;
struct TYPE_2__ {unsigned char* cstr; scalar_t__* wstr; } ;
struct bwstring {size_t len; TYPE_1__ data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (unsigned char const*,unsigned char const*,size_t) ;
 int FUNC_2 (char const*,char const*) ;
 int FUNC_3 (scalar_t__ const*,scalar_t__ const*) ;

int
FUNC_4(const struct bwstring *VAR_2, const struct bwstring *VAR_3, size_t VAR_4)
{
 size_t VAR_5, VAR_6;

 VAR_5 = VAR_2->len;
 VAR_6 = VAR_3->len;

 if (VAR_5 <= VAR_4)
  return ((VAR_6 <= VAR_4) ? 0 : -1);
 else {
  if (VAR_6 <= VAR_4)
   return (+1);
  else {
   VAR_5 -= VAR_4;
   VAR_6 -= VAR_4;

   if (VAR_0 == 1) {
    const unsigned char *VAR_7, *VAR_8;

    VAR_7 = VAR_2->data.cstr + VAR_4;
    VAR_8 = VAR_3->data.cstr + VAR_4;

    if (VAR_1) {
     int VAR_9 = 0;

     if (VAR_5 > VAR_6) {
      VAR_9 = FUNC_1(VAR_7, VAR_8, VAR_6);
      if (!VAR_9)
       VAR_9 = +1;
     } else if (VAR_5 < VAR_6) {
      VAR_9 = FUNC_1(VAR_7, VAR_8, VAR_5);
      if (!VAR_9)
       VAR_9 = -1;
     } else
      VAR_9 = FUNC_1(VAR_7, VAR_8, VAR_5);

     return (VAR_9);

    } else {
     int VAR_10 = 0;
     size_t VAR_11, VAR_12;

     VAR_11 = 0;
     VAR_12 = VAR_5;

     if (VAR_12 > VAR_6)
      VAR_12 = VAR_6;

     while (VAR_11 < VAR_12) {

      while ((VAR_11 < VAR_12) &&
          !VAR_7[VAR_11] && !VAR_8[VAR_11])
       ++VAR_11;

      if (VAR_11 >= VAR_12)
       break;

      if (VAR_7[VAR_11] == 0) {
       if (VAR_8[VAR_11] == 0)

        FUNC_0(2, "bwscoll error 01");
       else
        return (-1);
      } else if (VAR_8[VAR_11] == 0)
       return (+1);

      VAR_10 = FUNC_2((const char*)(VAR_7 + VAR_11), (const char*)(VAR_8 + VAR_11));
      if (VAR_10)
       return (VAR_10);

      while ((VAR_11 < VAR_12) &&
          VAR_7[VAR_11] && VAR_8[VAR_11])
       ++VAR_11;

      if (VAR_11 >= VAR_12)
       break;

      if (VAR_7[VAR_11] == 0) {
       if (VAR_8[VAR_11] == 0) {
        ++VAR_11;
        continue;
       } else
        return (-1);
      } else if (VAR_8[VAR_11] == 0)
       return (+1);
      else

       FUNC_0(2, "bwscoll error 02");
     }

     if (VAR_5 < VAR_6)
      return (-1);
     else if (VAR_5 > VAR_6)
      return (+1);

     return (0);
    }
   } else {
    const wchar_t *VAR_13, *VAR_14;
    size_t VAR_15, VAR_16;
    int VAR_17 = 0;

    VAR_13 = VAR_2->data.wstr + VAR_4;
    VAR_14 = VAR_3->data.wstr + VAR_4;

    VAR_15 = 0;
    VAR_16 = VAR_5;

    if (VAR_16 > VAR_6)
     VAR_16 = VAR_6;

    while (VAR_15 < VAR_16) {


     while ((VAR_15 < VAR_16) &&
         !VAR_13[VAR_15] && !VAR_14[VAR_15])
      ++VAR_15;

     if (VAR_15 >= VAR_16)
      break;

     if (VAR_13[VAR_15] == 0) {
      if (VAR_14[VAR_15] == 0)

       FUNC_0(2, "bwscoll error 1");
      else
       return (-1);
     } else if (VAR_14[VAR_15] == 0)
      return (+1);

     VAR_17 = FUNC_3(VAR_13 + VAR_15, VAR_14 + VAR_15);
     if (VAR_17)
      return (VAR_17);

     while ((VAR_15 < VAR_16) && VAR_13[VAR_15] && VAR_14[VAR_15])
      ++VAR_15;

     if (VAR_15 >= VAR_16)
      break;

     if (VAR_13[VAR_15] == 0) {
      if (VAR_14[VAR_15] == 0) {
       ++VAR_15;
       continue;
      } else
       return (-1);
     } else if (VAR_14[VAR_15] == 0)
      return (+1);
     else

      FUNC_0(2, "bwscoll error 2");
    }

    if (VAR_5 < VAR_6)
     return (-1);
    else if (VAR_5 > VAR_6)
     return (+1);

    return (0);
   }
  }
 }
}
