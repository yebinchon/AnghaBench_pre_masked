
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct era_metadata {int tm; int sm; int era_array_root; int era_array_info; int writeset_tree_root; int writeset_tree_info; int bm; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int *,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct era_metadata*) ;

__attribute__((used)) static int FUNC_7(struct era_metadata *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_4(VAR_1->bm, VAR_0,
     &VAR_1->tm, &VAR_1->sm);
 if (VAR_2 < 0) {
  FUNC_0("dm_tm_create_with_sm failed");
  return VAR_2;
 }

 FUNC_6(VAR_1);

 VAR_2 = FUNC_2(&VAR_1->writeset_tree_info, &VAR_1->writeset_tree_root);
 if (VAR_2) {
  FUNC_0("couldn't create new writeset tree");
  goto bad;
 }

 VAR_2 = FUNC_1(&VAR_1->era_array_info, &VAR_1->era_array_root);
 if (VAR_2) {
  FUNC_0("couldn't create era array");
  goto bad;
 }

 return 0;

bad:
 FUNC_3(VAR_1->sm);
 FUNC_5(VAR_1->tm);

 return VAR_2;
}
