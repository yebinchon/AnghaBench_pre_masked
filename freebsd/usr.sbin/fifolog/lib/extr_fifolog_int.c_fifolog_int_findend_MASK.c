
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fifolog_file {int logsize; int recbuf; } ;
typedef unsigned int off_t ;


 int FUNC_0 (int) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (struct fifolog_file const*) ;
 int FUNC_3 (struct fifolog_file const*,unsigned int) ;

const char *
FUNC_4(const struct fifolog_file *VAR_0, off_t *VAR_1)
{
 off_t VAR_2, VAR_3;
 int VAR_4;
 unsigned VAR_5, VAR_6;

 FUNC_2(VAR_0);

 VAR_2 = 0;
 VAR_4 = FUNC_3(VAR_0, VAR_2);
 if (VAR_4)
  return("Read error, first record");

 VAR_5 = FUNC_1(VAR_0->recbuf);


 if (VAR_5 == 0) {
  *VAR_1 = VAR_2;
  return (((void*)0));
 }


 VAR_3 = VAR_0->logsize / 2;
 do {
  VAR_4 = FUNC_3(VAR_0, VAR_2 + VAR_3);
  if (VAR_4)
   return ("Read error while searching");
  VAR_6 = FUNC_1(VAR_0->recbuf);
  if (VAR_6 == VAR_5 + VAR_3) {
   VAR_2 += VAR_3;
   VAR_5 = VAR_6;
  }
  VAR_3 /= 2;
  FUNC_0(VAR_2 < VAR_0->logsize);
 } while (VAR_3 > 0);

 *VAR_1 = VAR_2;
 return (((void*)0));
}
