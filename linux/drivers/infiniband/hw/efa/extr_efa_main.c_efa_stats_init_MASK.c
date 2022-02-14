
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efa_dev {int stats; } ;
typedef int atomic64_t ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct efa_dev *VAR_0)
{
 atomic64_t *VAR_1 = (atomic64_t *)&VAR_0->stats;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < sizeof(VAR_0->stats) / sizeof(*VAR_1); VAR_2++, VAR_1++)
  FUNC_0(VAR_1, 0);
}
