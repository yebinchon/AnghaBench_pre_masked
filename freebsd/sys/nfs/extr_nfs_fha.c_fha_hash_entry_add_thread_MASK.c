
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct fha_hash_entry {int num_threads; int threads; int mtx; } ;
struct TYPE_4__ {scalar_t__ st_p2; } ;
typedef TYPE_1__ SVCTHREAD ;


 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct fha_hash_entry *VAR_2, SVCTHREAD *VAR_3)
{

 FUNC_1(VAR_2->mtx, VAR_0);
 VAR_3->st_p2 = 0;
 FUNC_0(&VAR_2->threads, VAR_3, VAR_1);
 VAR_2->num_threads++;
}
