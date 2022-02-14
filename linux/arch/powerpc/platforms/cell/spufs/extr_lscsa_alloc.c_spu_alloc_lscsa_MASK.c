
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_state {struct spu_lscsa* lscsa; } ;
struct spu_lscsa {unsigned char* ls; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned char*) ;
 struct spu_lscsa* FUNC_2 (int) ;

int FUNC_3(struct spu_state *VAR_3)
{
 struct spu_lscsa *VAR_4;
 unsigned char *VAR_5;

 VAR_4 = FUNC_2(sizeof(*VAR_4));
 if (!VAR_4)
  return -VAR_0;
 VAR_3->lscsa = VAR_4;


 for (VAR_5 = VAR_4->ls; VAR_5 < VAR_4->ls + VAR_1; VAR_5 += VAR_2)
  FUNC_0(FUNC_1(VAR_5));

 return 0;
}
