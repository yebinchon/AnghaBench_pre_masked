
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_domain {int iovad; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long long VAR_3 ;
 int FUNC_0 (struct dmar_domain*,unsigned long,int *,unsigned long,unsigned long,int) ;
 int FUNC_1 (struct dmar_domain*,unsigned long,unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (char*,unsigned long long,unsigned long long) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct dmar_domain *VAR_4,
         unsigned long long VAR_5,
         unsigned long long VAR_6)
{
 unsigned long VAR_7 = VAR_5 >> VAR_3;
 unsigned long VAR_8 = VAR_6 >> VAR_3;

 if (!FUNC_5(&VAR_4->iovad, FUNC_2(VAR_7),
     FUNC_2(VAR_8))) {
  FUNC_4("Reserving iova failed\n");
  return -VAR_2;
 }

 FUNC_3("Mapping reserved region %llx-%llx\n", VAR_5, VAR_6);




 FUNC_1(VAR_4, VAR_7, VAR_8);

 return FUNC_0(VAR_4, VAR_7, ((void*)0),
    VAR_7, VAR_8 - VAR_7 + 1,
    VAR_0|VAR_1);
}
