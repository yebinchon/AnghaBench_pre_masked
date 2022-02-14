
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_set {int dummy; } ;
struct bkey {int dummy; } ;


 unsigned int FUNC_0 (struct bkey*) ;
 int FUNC_1 (struct cache_set*,struct bkey*,unsigned int) ;
 int FUNC_2 (struct cache_set*,struct bkey*,unsigned int) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(struct cache_set *VAR_0, struct bkey *VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++)
  FUNC_3(FUNC_2(VAR_0, VAR_1, VAR_2),
      FUNC_1(VAR_0, VAR_1, VAR_2));
}
