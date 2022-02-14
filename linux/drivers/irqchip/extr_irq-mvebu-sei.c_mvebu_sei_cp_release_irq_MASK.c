
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvebu_sei {int cp_msi_lock; int cp_msi_bitmap; } ;


 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct mvebu_sei *VAR_0, unsigned long VAR_1)
{
 FUNC_1(&VAR_0->cp_msi_lock);
 FUNC_0(VAR_1, VAR_0->cp_msi_bitmap);
 FUNC_2(&VAR_0->cp_msi_lock);
}
