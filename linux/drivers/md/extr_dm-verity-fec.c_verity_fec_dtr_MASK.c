
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_verity_fec {scalar_t__ dev; scalar_t__ bufio; scalar_t__ data_bufio; int cache; int extra_pool; int prealloc_pool; int rs_pool; } ;
struct dm_verity {struct dm_verity_fec* fec; int ti; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct dm_verity_fec*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct dm_verity*) ;

void FUNC_6(struct dm_verity *VAR_0)
{
 struct dm_verity_fec *VAR_1 = VAR_0->fec;

 if (!FUNC_5(VAR_0))
  goto out;

 FUNC_4(&VAR_1->rs_pool);
 FUNC_4(&VAR_1->prealloc_pool);
 FUNC_4(&VAR_1->extra_pool);
 FUNC_3(VAR_1->cache);

 if (VAR_1->data_bufio)
  FUNC_0(VAR_1->data_bufio);
 if (VAR_1->bufio)
  FUNC_0(VAR_1->bufio);

 if (VAR_1->dev)
  FUNC_1(VAR_0->ti, VAR_1->dev);
out:
 FUNC_2(VAR_1);
 VAR_0->fec = ((void*)0);
}
