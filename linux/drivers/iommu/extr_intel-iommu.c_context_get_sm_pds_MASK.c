
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pasid_table {int max_pasid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long*,int ) ;

__attribute__((used)) static inline unsigned long FUNC_1(struct pasid_table *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_4 = VAR_2->max_pasid >> VAR_1;
 VAR_3 = FUNC_0((unsigned long *)&VAR_4, VAR_0);
 if (VAR_3 < 7)
  return 0;

 return VAR_3 - 7;
}
