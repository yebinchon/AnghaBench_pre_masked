
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct keylist {int * top_p; int * keys_p; int * inline_keys; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_0 (struct keylist*) ;
 int * FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,int *,int) ;
 size_t FUNC_3 (size_t) ;

int FUNC_4(struct keylist *VAR_3, unsigned int VAR_4)
{
 size_t VAR_5 = FUNC_0(VAR_3);
 size_t VAR_6 = VAR_5 + VAR_4;
 uint64_t *VAR_7 = VAR_3->keys_p == VAR_3->inline_keys ? ((void*)0) : VAR_3->keys_p;
 uint64_t *VAR_8;

 VAR_6 = FUNC_3(VAR_6);

 if (VAR_6 <= VAR_2 ||
     FUNC_3(VAR_5) == VAR_6)
  return 0;

 VAR_8 = FUNC_1(VAR_7, sizeof(uint64_t) * VAR_6, VAR_1);

 if (!VAR_8)
  return -VAR_0;

 if (!VAR_7)
  FUNC_2(VAR_8, VAR_3->inline_keys, sizeof(uint64_t) * VAR_5);

 VAR_3->keys_p = VAR_8;
 VAR_3->top_p = VAR_8 + VAR_5;

 return 0;
}
