
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigevent {int dummy; } ;
struct aiocb {int aio_nbytes; struct sigevent aio_sigevent; scalar_t__ aio_offset; int aio_fildes; struct aiocb* aio_buf; } ;
struct aio_context {int ac_buflen; int ac_seed; struct aiocb* ac_buffer; int ac_read_fd; } ;
typedef scalar_t__ ssize_t ;
typedef int intmax_t ;
typedef scalar_t__ (* completion ) (struct aiocb*) ;
typedef int aio ;


 int FUNC_0 (scalar_t__,int,char*,int ) ;
 scalar_t__ FUNC_1 (struct aiocb*) ;
 scalar_t__ FUNC_2 (struct aiocb*,int,int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct aiocb*,int) ;
 int VAR_0 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct aio_context *VAR_1, completion VAR_2, struct sigevent *VAR_3)
{
 struct aiocb VAR_4;
 ssize_t VAR_5;

 FUNC_4(VAR_1->ac_buffer, VAR_1->ac_buflen);
 FUNC_4(&VAR_4, sizeof(VAR_4));
 VAR_4.aio_buf = VAR_1->ac_buffer;
 VAR_4.aio_nbytes = VAR_1->ac_buflen;
 VAR_4.aio_fildes = VAR_1->ac_read_fd;
 VAR_4.aio_offset = 0;
 if (VAR_3)
  VAR_4.aio_sigevent = *VAR_3;

 if (FUNC_1(&VAR_4) < 0)
  FUNC_3("aio_read failed: %s", FUNC_5(VAR_0));

 VAR_5 = VAR_2(&VAR_4);
 if (VAR_5 < 0)
  FUNC_3("aio failed: %s", FUNC_5(VAR_0));

 FUNC_0(VAR_5, VAR_1->ac_buflen,
     "aio short read (%jd)", (intmax_t)VAR_5);

 if (FUNC_2(VAR_1->ac_buffer, VAR_1->ac_buflen, VAR_1->ac_seed) == 0)
  FUNC_3("buffer mismatched");
}
