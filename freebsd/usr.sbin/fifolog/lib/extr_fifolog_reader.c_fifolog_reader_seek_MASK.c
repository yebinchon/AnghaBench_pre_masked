
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* time_t ;
struct fifolog_reader {TYPE_1__* ff; } ;
typedef int off_t ;
struct TYPE_4__ {int* recbuf; int logsize; int recsize; } ;


 int FUNC_0 (struct fifolog_reader const*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int*) ;
 int FUNC_3 (int,char*,char const*) ;
 char* FUNC_4 (TYPE_1__*,int*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int*) ;
 int FUNC_7 (int ,char*,int) ;
 int VAR_2 ;

off_t
FUNC_8(const struct fifolog_reader *VAR_3, time_t VAR_4)
{
 off_t VAR_5, VAR_6, VAR_7;
 time_t VAR_8, VAR_9;
 unsigned VAR_10, VAR_11;
 const char *VAR_12;
 int VAR_13;

 FUNC_0(VAR_3, VAR_1);




 VAR_5 = 0;
 VAR_13 = FUNC_6(VAR_3->ff, &VAR_5);
 if (VAR_13 == 0)
  return (0);
 FUNC_1(VAR_13 == 1);

 FUNC_1(VAR_3->ff->recbuf[4] & VAR_0);
 VAR_10 = FUNC_2(VAR_3->ff->recbuf);
 VAR_8 = FUNC_2(VAR_3->ff->recbuf + 5);

 if (VAR_8 > VAR_4) {

  VAR_12 = FUNC_4(VAR_3->ff, &VAR_6);
  if (VAR_12 != ((void*)0))
   FUNC_3(1, "%s", VAR_12);
  VAR_6++;
  VAR_13 = FUNC_6(VAR_3->ff, &VAR_6);
  if (VAR_13 == 0)
   return (0);
  if (VAR_13 == 1) {
   VAR_5 = VAR_6;
   VAR_10 = FUNC_2(VAR_3->ff->recbuf);
   VAR_8 = FUNC_2(VAR_3->ff->recbuf + 5);
  }
 }


 VAR_6 = VAR_7 = (VAR_3->ff->logsize - VAR_5) / 2;
 while (VAR_6 > 1) {

  if (VAR_5 + VAR_7 > VAR_3->ff->logsize + 1) {
   VAR_6 = VAR_7 = VAR_6 / 2;
   continue;
  }
  VAR_13 = FUNC_5(VAR_3->ff, VAR_5 + VAR_7);
  if (VAR_13) {
   VAR_6 = VAR_7 = VAR_6 / 2;
   continue;
  }

  VAR_11 = FUNC_2(VAR_3->ff->recbuf);
  if (VAR_11 != VAR_10 + VAR_7) {
   VAR_6 = VAR_7 = VAR_6 / 2;
   continue;
  }

  if (!(VAR_3->ff->recbuf[4] & VAR_0)) {
   VAR_7++;
   continue;
  }

  VAR_9 = FUNC_2(VAR_3->ff->recbuf + 5);
  if (VAR_9 >= VAR_4) {
   VAR_6 = VAR_7 = VAR_6 / 2;
   continue;
  }
  VAR_5 += VAR_7;
  VAR_10 = VAR_11;
 }
 FUNC_7(VAR_2, "Read from %x\n", VAR_5 * VAR_3->ff->recsize);
 return (VAR_5);
}
