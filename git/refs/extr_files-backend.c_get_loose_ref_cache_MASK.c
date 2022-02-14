
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ref_cache {TYPE_1__* root; } ;
struct files_ref_store {struct ref_cache* loose; int base; } ;
struct TYPE_2__ {int flag; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ref_cache*,char*,int,int) ;
 struct ref_cache* FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_1 ;

__attribute__((used)) static struct ref_cache *FUNC_4(struct files_ref_store *VAR_2)
{
 if (!VAR_2->loose) {





  VAR_2->loose = FUNC_2(&VAR_2->base, VAR_1);


  VAR_2->loose->root->flag &= ~VAR_0;





  FUNC_0(FUNC_3(VAR_2->loose->root),
     FUNC_1(VAR_2->loose, "refs/", 5, 1));
 }
 return VAR_2->loose;
}
