
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct executable {int x_len; int * x_buf; } ;
typedef int off_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,void*,size_t) ;
 int FUNC_2 (int *,int ,size_t) ;
 int * FUNC_3 (int *,int) ;

__attribute__((used)) static off_t
FUNC_4(struct executable *VAR_0, void *VAR_1, size_t VAR_2, size_t VAR_3)
{
 off_t VAR_4;

 VAR_4 = VAR_0->x_len;
 VAR_0->x_buf = FUNC_3(VAR_0->x_buf, VAR_0->x_len + VAR_2 + VAR_3);
 if (VAR_0->x_buf == ((void*)0))
  FUNC_0(1, "realloc");
 FUNC_1(VAR_0->x_buf + VAR_0->x_len, VAR_1, VAR_2);
 FUNC_2(VAR_0->x_buf + VAR_0->x_len + VAR_2, 0, VAR_3);
 VAR_0->x_len += VAR_2 + VAR_3;

 return (VAR_4);
}
