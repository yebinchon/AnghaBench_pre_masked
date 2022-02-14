
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (void*,char*,size_t) ;
 size_t FUNC_5 (int,void*,unsigned int) ;

__attribute__((used)) static int FUNC_6(int VAR_1, char **VAR_2, size_t *VAR_3,
      void *VAR_4, unsigned VAR_5, int VAR_6)
{
 ssize_t VAR_7;

 if (VAR_1 >= 0 && VAR_2 && *VAR_2)
  FUNC_0("multiple sources given to packet_read");


 if (VAR_2 && *VAR_2) {
  VAR_7 = VAR_5 < *VAR_3 ? VAR_5 : *VAR_3;
  FUNC_4(VAR_4, *VAR_2, VAR_7);
  *VAR_2 += VAR_7;
  *VAR_3 -= VAR_7;
 } else {
  VAR_7 = FUNC_5(VAR_1, VAR_4, VAR_5);
  if (VAR_7 < 0)
   FUNC_3(FUNC_1("read error"));
 }


 if (VAR_7 != VAR_5) {
  if (VAR_6 & VAR_0)
   return -1;

  FUNC_2(FUNC_1("the remote end hung up unexpectedly"));
 }

 return VAR_7;
}
