
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigevent {int dummy; } ;
struct aiocb {scalar_t__ aio_nbytes; struct sigevent aio_sigevent; scalar_t__ aio_offset; int aio_fildes; int aio_buf; } ;
struct aio_context {scalar_t__ ac_buflen; int ac_write_fd; int ac_buffer; } ;
typedef scalar_t__ ssize_t ;
typedef int intmax_t ;
typedef scalar_t__ (* completion ) (struct aiocb*) ;
typedef int aio ;


 scalar_t__ FUNC_0 (struct aiocb*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct aiocb*,int) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct aio_context *VAR_1, completion VAR_2, struct sigevent *VAR_3)
{
 struct aiocb VAR_4;
 ssize_t VAR_5;

 FUNC_2(&VAR_4, sizeof(VAR_4));
 VAR_4.aio_buf = VAR_1->ac_buffer;
 VAR_4.aio_nbytes = VAR_1->ac_buflen;
 VAR_4.aio_fildes = VAR_1->ac_write_fd;
 VAR_4.aio_offset = 0;
 if (VAR_3)
  VAR_4.aio_sigevent = *VAR_3;

 if (FUNC_0(&VAR_4) < 0)
  FUNC_1("aio_write failed: %s", FUNC_3(VAR_0));

 VAR_5 = VAR_2(&VAR_4);
 if (VAR_5 < 0)
  FUNC_1("aio failed: %s", FUNC_3(VAR_0));

 if (VAR_5 != VAR_1->ac_buflen)
  FUNC_1("aio short write (%jd)", (intmax_t)VAR_5);
}
