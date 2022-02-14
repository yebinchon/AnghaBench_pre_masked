
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {scalar_t__ iov_len; int * iov_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct iovec*,int*,int,int *,int *) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ) ;

int
FUNC_3()
{
  struct iovec VAR_3[VAR_1];
  int VAR_4, VAR_5, VAR_6;

  VAR_3[0].iov_len = FUNC_2(VAR_2) + 1;
  VAR_3[0].iov_base = ((void*)0);
  VAR_4 = 1;
  if (FUNC_0(((void*)0), VAR_3, &VAR_4, VAR_1, ((void*)0), ((void*)0)) == -1) {
    FUNC_1(VAR_0, "Cannot determine space required for link\n");
    return 0;
  }

  for (VAR_6 = VAR_5 = 0; VAR_6 < VAR_4; VAR_6++)
    VAR_5 += VAR_3[VAR_6].iov_len;

  return VAR_5;
}
