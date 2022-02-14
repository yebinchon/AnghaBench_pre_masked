
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* time_t ;
struct fifolog_writer {unsigned int writerate; unsigned int syncrate; unsigned int compression; scalar_t__ seq; int obufsize; int ibufsize; void* lastwrite; void* lastsync; void* starttime; TYPE_1__* ff; scalar_t__ obuf; int flag; scalar_t__ ibufptr; scalar_t__ ibuf; scalar_t__ recno; int cnt; } ;
typedef scalar_t__ off_t ;
struct TYPE_6__ {int avail_out; scalar_t__ next_out; } ;
struct TYPE_5__ {int recsize; TYPE_4__* zs; int recbuf; } ;


 int FUNC_0 (scalar_t__*,int) ;
 int FUNC_1 (struct fifolog_writer*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*,int) ;
 char* FUNC_5 (TYPE_1__*,scalar_t__*) ;
 char* FUNC_6 (TYPE_1__**,char const*,int) ;
 int FUNC_7 (TYPE_1__*,scalar_t__) ;
 int FUNC_8 (struct fifolog_writer*) ;
 int FUNC_9 (int ,int ,int) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (void**) ;

const char *
FUNC_12(struct fifolog_writer *VAR_5, const char *VAR_6,
    unsigned VAR_7, unsigned VAR_8, unsigned VAR_9)
{
 const char *VAR_10;
 int VAR_11;
 time_t VAR_12;
 off_t VAR_13;

 FUNC_1(VAR_5, VAR_2);


 if (VAR_9 > VAR_3)
  return ("Illegal compression value");

 VAR_5->writerate = VAR_7;
 VAR_5->syncrate = VAR_8;
 VAR_5->compression = VAR_9;


 FUNC_9(VAR_5->cnt, 0, sizeof VAR_5->cnt);

 VAR_10 = FUNC_6(&VAR_5->ff, VAR_6, 1);
 if (VAR_10 != ((void*)0))
  return (VAR_10);
 VAR_10 = FUNC_5(VAR_5->ff, &VAR_13);
 if (VAR_10 != ((void*)0))
  return (VAR_10);
 VAR_11 = FUNC_7(VAR_5->ff, VAR_13);
 if (VAR_11)
  return ("Read error, looking for seq");
 VAR_5->seq = FUNC_3(VAR_5->ff->recbuf);
 if (VAR_5->seq == 0) {

  VAR_5->seq = FUNC_10();
 } else {
  VAR_5->recno = VAR_13 + 1;
  VAR_5->seq++;
 }

 VAR_5->obufsize = VAR_5->ff->recsize;
 FUNC_0(&VAR_5->obuf, VAR_5->obufsize);

 VAR_5->ibufsize = VAR_5->obufsize * 10;
 FUNC_0(&VAR_5->ibuf, VAR_5->ibufsize);
 VAR_5->ibufptr = 0;

 VAR_11 = FUNC_4(VAR_5->ff->zs, (int)VAR_5->compression);
 FUNC_2(VAR_11 == VAR_4);

 VAR_5->flag |= VAR_0;
 VAR_5->flag |= VAR_1;
 VAR_5->ff->zs->next_out = VAR_5->obuf + 9;
 VAR_5->ff->zs->avail_out = VAR_5->obufsize - 9;

 FUNC_11(&VAR_12);
 VAR_5->starttime = VAR_12;
 VAR_5->lastsync = VAR_12;
 VAR_5->lastwrite = VAR_12;

 FUNC_8(VAR_5);
 return (((void*)0));
}
