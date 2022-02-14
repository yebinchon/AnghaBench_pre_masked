
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apei_resources {int iomem; } ;
typedef int __u64 ;


 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_1(__u64 VAR_0, __u64 VAR_1, void *VAR_2)
{
 struct apei_resources *VAR_3 = VAR_2;
 return FUNC_0(&VAR_3->iomem, VAR_0, VAR_1);
}
