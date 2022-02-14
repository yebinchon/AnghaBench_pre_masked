
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fifolog_file {scalar_t__ logsize; int* recbuf; } ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (int*) ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (struct fifolog_file const*,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(const struct fifolog_file *VAR_1, off_t *VAR_2)
{
 int VAR_3;
 unsigned VAR_4, VAR_5;

 FUNC_0(*VAR_2 < VAR_1->logsize);
 VAR_3 = FUNC_3(VAR_1, *VAR_2);
 if (VAR_3)
  FUNC_2(1, "Read error (%d) while looking for SYNC", VAR_3);
 VAR_4 = FUNC_1(VAR_1->recbuf);
 if (*VAR_2 == 0 && VAR_4 == 0)
  return (0);

 if (VAR_1->recbuf[4] & VAR_0)
  return (1);
 while(1) {
  FUNC_0(*VAR_2 < VAR_1->logsize);
  (*VAR_2)++;
  VAR_4++;
  if (*VAR_2 == VAR_1->logsize)
   return (2);
  VAR_3 = FUNC_3(VAR_1, *VAR_2);
  if (VAR_3)
   FUNC_2(1, "Read error (%d) while looking for SYNC", VAR_3);
  VAR_5 = FUNC_1(VAR_1->recbuf);
  if (VAR_5 != VAR_4)
   return (3);
  if (VAR_1->recbuf[4] & VAR_0)
   return (1);
 }
}
