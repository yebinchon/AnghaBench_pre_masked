
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data_buf {int cur_len; scalar_t__ cur; } ;


 int FUNC_0 (void*,scalar_t__,int) ;
 int FUNC_1 (struct data_buf*,int) ;

__attribute__((used)) static int
FUNC_2(struct data_buf *VAR_0, void *VAR_1, int VAR_2)
{
 int VAR_3 = VAR_0->cur_len;

 if (!VAR_0->cur)
  return 1;

 if (VAR_3 >= VAR_2)
  VAR_3 = VAR_2;

 FUNC_0(VAR_1 + (VAR_2 - VAR_3), VAR_0->cur + VAR_0->cur_len - VAR_3, VAR_3);
 FUNC_1(VAR_0, VAR_3);

 VAR_3 = VAR_2 - VAR_3;
 if (VAR_3 && !VAR_0->cur)
  return 1;

 FUNC_0(VAR_1, VAR_0->cur + VAR_0->cur_len - VAR_3, VAR_3);
 FUNC_1(VAR_0, VAR_3);

 return 0;
}
