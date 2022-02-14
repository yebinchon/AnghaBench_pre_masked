
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msi_intsrc {int msi_vector; int msi_cpu; } ;
struct intsrc {int dummy; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct intsrc *VAR_0)
{
 struct msi_intsrc *VAR_1 = (struct msi_intsrc *)VAR_0;

 FUNC_0(VAR_1->msi_cpu, VAR_1->msi_vector);
}
