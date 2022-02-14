
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_pkt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char const VAR_3 ;
 char const VAR_4 ;
 char const VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int **,char const*,size_t) ;
 int FUNC_1 (int **,char const*,size_t) ;
 int FUNC_2 (int **,char const*,size_t) ;
 int FUNC_3 (int **,char const*,size_t) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (char const*,size_t,char*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int **) ;
 int FUNC_9 (int **,char const*,size_t) ;
 int FUNC_10 (int **,char const*,size_t) ;
 int FUNC_11 (size_t*,char const*,size_t) ;
 int FUNC_12 (int **,char const*,size_t) ;
 int FUNC_13 (int **,char const*,size_t) ;
 int FUNC_14 (int **,char const*,size_t) ;
 int FUNC_15 (int **,char const*,size_t) ;

int FUNC_16(
 git_pkt **VAR_7, const char **VAR_8, const char *VAR_9, size_t VAR_10)
{
 int VAR_11;
 size_t VAR_12;

 if ((VAR_11 = FUNC_11(&VAR_12, VAR_9, VAR_10)) < 0) {






  if (VAR_11 == VAR_0)
   ;
  else if (!FUNC_5(VAR_9, VAR_10, "PACK"))
   FUNC_6(VAR_2, "unexpected pack file");
  else
   FUNC_6(VAR_2, "bad packet length");
  return VAR_11;
 }





 if (VAR_10 < VAR_12)
  return VAR_0;






 if (VAR_12 != 0 && VAR_12 < VAR_6)
  return VAR_1;

 VAR_9 += VAR_6;





 if (VAR_12 == VAR_6) {
  FUNC_7(VAR_2, "Invalid empty packet");
  return VAR_1;
 }

 if (VAR_12 == 0) {
  *VAR_8 = VAR_9;
  return FUNC_4(VAR_7);
 }

 VAR_12 -= VAR_6;

 if (*VAR_9 == VAR_3)
  VAR_11 = FUNC_2(VAR_7, VAR_9, VAR_12);
 else if (*VAR_9 == VAR_5)
  VAR_11 = FUNC_14(VAR_7, VAR_9, VAR_12);
 else if (*VAR_9 == VAR_4)
  VAR_11 = FUNC_13(VAR_7, VAR_9, VAR_12);
 else if (!FUNC_5(VAR_9, VAR_12, "ACK"))
  VAR_11 = FUNC_0(VAR_7, VAR_9, VAR_12);
 else if (!FUNC_5(VAR_9, VAR_12, "NAK"))
  VAR_11 = FUNC_8(VAR_7);
 else if (!FUNC_5(VAR_9, VAR_12, "ERR"))
  VAR_11 = FUNC_3(VAR_7, VAR_9, VAR_12);
 else if (*VAR_9 == '#')
  VAR_11 = FUNC_1(VAR_7, VAR_9, VAR_12);
 else if (!FUNC_5(VAR_9, VAR_12, "ok"))
  VAR_11 = FUNC_10(VAR_7, VAR_9, VAR_12);
 else if (!FUNC_5(VAR_9, VAR_12, "ng"))
  VAR_11 = FUNC_9(VAR_7, VAR_9, VAR_12);
 else if (!FUNC_5(VAR_9, VAR_12, "unpack"))
  VAR_11 = FUNC_15(VAR_7, VAR_9, VAR_12);
 else
  VAR_11 = FUNC_12(VAR_7, VAR_9, VAR_12);

 *VAR_8 = VAR_9 + VAR_12;

 return VAR_11;
}
