
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_function_block {char* tfb_tcp_block_name; } ;


 int FUNC_0 (struct tcp_function_block*,int,char const**,int*) ;

int
FUNC_1(struct tcp_function_block *VAR_0, const char *VAR_1,
    int VAR_2)
{
 const char *VAR_3[1];
 int VAR_4, VAR_5;

 VAR_4 = 1;
 if (VAR_1 != ((void*)0))
  VAR_3[0] = VAR_1;
 else
  VAR_3[0] = VAR_0->tfb_tcp_block_name;
 VAR_5 = FUNC_0(VAR_0, VAR_2, VAR_3, &VAR_4);
 return (VAR_5);
}
