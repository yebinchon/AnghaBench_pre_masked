
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 int FUNC_0 (unsigned char*,size_t) ;
 size_t FUNC_1 (size_t) ;
 int FUNC_2 (char*,size_t) ;
 int FUNC_3 (unsigned char*) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_4 (int,unsigned char*,size_t) ;
 unsigned char* FUNC_5 (size_t) ;

__attribute__((used)) static ssize_t FUNC_6(int VAR_1, unsigned char **VAR_2)
{
 size_t VAR_3 = 0, VAR_4 = 8192;
 unsigned char *VAR_5 = FUNC_5(VAR_4);

 if (VAR_0 < VAR_4)
  VAR_0 = VAR_4;

 while (1) {
  ssize_t VAR_6;

  VAR_6 = FUNC_4(VAR_1, VAR_5 + VAR_3, VAR_4 - VAR_3);
  if (VAR_6 < 0) {
   FUNC_3(VAR_5);
   return -1;
  }


  VAR_3 += VAR_6;
  if (VAR_3 < VAR_4) {
   *VAR_2 = VAR_5;
   return VAR_3;
  }


  if (VAR_4 == VAR_0)
   FUNC_2("request was larger than our maximum size (%lu);"
       " try setting GIT_HTTP_MAX_REQUEST_BUFFER",
       VAR_0);

  VAR_4 = FUNC_1(VAR_4);
  if (VAR_4 > VAR_0)
   VAR_4 = VAR_0;
  FUNC_0(VAR_5, VAR_4);
 }
}
