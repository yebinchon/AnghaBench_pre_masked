
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ws_d ;
struct writeset_disk {int root; } ;
struct era_metadata {int tm; } ;
typedef int dm_block_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct writeset_disk*,void const*,int) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, const void *VAR_1)
{
 struct era_metadata *VAR_2 = VAR_0;
 struct writeset_disk VAR_3;
 dm_block_t VAR_4;

 FUNC_2(&VAR_3, VAR_1, sizeof(VAR_3));
 VAR_4 = FUNC_1(VAR_3.root);

 FUNC_0(VAR_2->tm, VAR_4);
}
