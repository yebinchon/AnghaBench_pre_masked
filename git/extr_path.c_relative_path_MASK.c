
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char const* buf; } ;


 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 scalar_t__ FUNC_2 (char const) ;
 int FUNC_3 (struct strbuf*,char const*) ;
 int FUNC_4 (struct strbuf*,int) ;
 int FUNC_5 (struct strbuf*) ;
 int FUNC_6 (char const*) ;

const char *FUNC_7(const char *VAR_0, const char *VAR_1,
     struct strbuf *VAR_2)
{
 int VAR_3 = VAR_0 ? FUNC_6(VAR_0) : 0;
 int VAR_4 = VAR_1 ? FUNC_6(VAR_1) : 0;
 int VAR_5 = 0;
 int VAR_6 = 0;
 int VAR_7 = 0, VAR_8 = 0;

 if (!VAR_3)
  return "./";
 else if (!VAR_4)
  return VAR_0;

 if (FUNC_1(VAR_0, VAR_1))

  VAR_7 = VAR_8 = FUNC_0(VAR_0);
 else {
  return VAR_0;
 }

 while (VAR_7 < VAR_4 && VAR_8 < VAR_3 && VAR_1[VAR_7] == VAR_0[VAR_8]) {
  if (FUNC_2(VAR_1[VAR_7])) {
   while (FUNC_2(VAR_1[VAR_7]))
    VAR_7++;
   while (FUNC_2(VAR_0[VAR_8]))
    VAR_8++;
   VAR_6 = VAR_7;
   VAR_5 = VAR_8;
  } else {
   VAR_7++;
   VAR_8++;
  }
 }

 if (

     VAR_7 >= VAR_4 &&




     VAR_6 < VAR_4) {
  if (VAR_8 >= VAR_3) {

   VAR_5 = VAR_3;
  } else if (FUNC_2(VAR_0[VAR_8])) {

   while (FUNC_2(VAR_0[VAR_8]))
    VAR_8++;
   VAR_5 = VAR_8;
  } else {

   VAR_7 = VAR_6;
  }
 } else if (

     VAR_8 >= VAR_3 &&

     VAR_5 < VAR_3) {
  if (FUNC_2(VAR_1[VAR_7])) {

   while (FUNC_2(VAR_1[VAR_7]))
    VAR_7++;
   VAR_5 = VAR_3;
  }
 }
 VAR_0 += VAR_5;
 VAR_3 -= VAR_5;

 if (VAR_7 >= VAR_4) {
  if (!VAR_3)
   return "./";
  else
   return VAR_0;
 }

 FUNC_5(VAR_2);
 FUNC_4(VAR_2, VAR_3);

 while (VAR_7 < VAR_4) {
  if (FUNC_2(VAR_1[VAR_7])) {
   FUNC_3(VAR_2, "../");
   while (FUNC_2(VAR_1[VAR_7]))
    VAR_7++;
   continue;
  }
  VAR_7++;
 }
 if (!FUNC_2(VAR_1[VAR_4 - 1]))
  FUNC_3(VAR_2, "../");

 FUNC_3(VAR_2, VAR_0);

 return VAR_2->buf;
}
