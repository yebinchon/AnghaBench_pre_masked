
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aiocb {int aio_fildes; int aio_nbytes; char* aio_buf; int aio_offset; } ;
typedef int off_t ;
typedef scalar_t__ iot_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct aiocb*) ;
 int FUNC_1 (struct aiocb*) ;
 int FUNC_2 (struct aiocb*,int) ;
 int FUNC_3 (int,char*) ;

__attribute__((used)) static void
FUNC_4(struct aiocb *VAR_1, iot_t VAR_2, int VAR_3, off_t VAR_4, int VAR_5, char *VAR_6)
{
 int VAR_7;
 FUNC_2(VAR_1, sizeof(*VAR_1));
 VAR_1->aio_fildes = VAR_3;
 VAR_1->aio_nbytes = VAR_5;
 VAR_1->aio_offset = VAR_4;
 VAR_1->aio_buf = VAR_6;
 if (VAR_2 == VAR_0)
  VAR_7 = FUNC_0(VAR_1);
 else
  VAR_7 = FUNC_1(VAR_1);
 if (VAR_7 != 0)
  FUNC_3(1, "set_aio call failed");
}
