
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct era_metadata {int bm; } ;


 int VAR_0 ;
 int FUNC_0 (struct era_metadata*) ;
 int FUNC_1 (struct era_metadata*) ;
 int FUNC_2 (int ,int*) ;

__attribute__((used)) static int FUNC_3(struct era_metadata *VAR_1,
       bool VAR_2)
{
 int VAR_3;
 bool VAR_4 = 0;

 VAR_3 = FUNC_2(VAR_1->bm, &VAR_4);
 if (VAR_3)
  return VAR_3;

 if (VAR_4)
  return VAR_2 ? FUNC_0(VAR_1) : -VAR_0;

 return FUNC_1(VAR_1);
}
