
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aiocb {int aio_fildes; size_t aio_offset; size_t aio_nbytes; int * aio_buf; } ;
typedef size_t off_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct aiocb**,int *) ;
 int FUNC_1 (struct aiocb*) ;
 int * VAR_3 ;
 int FUNC_2 (struct aiocb*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int,int *,size_t,size_t) ;

__attribute__((used)) static void
FUNC_5(int VAR_4, size_t VAR_5, off_t VAR_6)
{
 struct aiocb VAR_7[VAR_2];
 off_t VAR_8;
 int VAR_9, VAR_10;
 struct aiocb *VAR_11;


 for (VAR_9 = 0, VAR_8 = 0; VAR_5 > VAR_1; VAR_9++, VAR_5 -= VAR_1, VAR_8 += VAR_1) {
  VAR_11 = &VAR_7[VAR_9];
  FUNC_2(VAR_11, sizeof(*VAR_11));
  VAR_11->aio_buf = &VAR_3[VAR_8];
  VAR_11->aio_fildes = VAR_4;
  VAR_11->aio_offset = VAR_6 + VAR_8;
  VAR_11->aio_nbytes = VAR_1;
  VAR_10 = FUNC_1(VAR_11);
  if (VAR_10 != 0)
   FUNC_3(VAR_0, "AIO write submit error");
 }

 VAR_10 = FUNC_4(VAR_4, &VAR_3[VAR_8], VAR_5, VAR_6 + VAR_8);
 if (VAR_10 < 0)
  FUNC_3(VAR_0, "Sync write error");
 for (; VAR_9 > 0; VAR_9--) {
  VAR_10 = FUNC_0(&VAR_11, ((void*)0));
  if (VAR_10 < 0)
   FUNC_3(VAR_0, "AIO write wait error");
 }
}
