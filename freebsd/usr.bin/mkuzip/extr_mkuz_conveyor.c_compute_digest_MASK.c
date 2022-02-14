
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int digest; int len; } ;
struct mkuz_blk {TYPE_1__ info; int data; } ;
typedef int MD5_CTX ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct mkuz_blk *VAR_0)
{
    MD5_CTX VAR_1;

    FUNC_1(&VAR_1);
    FUNC_2(&VAR_1, VAR_0->data, VAR_0->info.len);
    FUNC_0(VAR_0->info.digest, &VAR_1);
}
