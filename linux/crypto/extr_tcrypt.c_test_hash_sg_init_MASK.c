
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct scatterlist*,int) ;
 int FUNC_2 (struct scatterlist*,int ,int ) ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_3(struct scatterlist *VAR_3)
{
 int VAR_4;

 FUNC_1(VAR_3, VAR_1);
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  FUNC_2(VAR_3 + VAR_4, VAR_2[VAR_4], VAR_0);
  FUNC_0(VAR_2[VAR_4], 0xff, VAR_0);
 }
}
