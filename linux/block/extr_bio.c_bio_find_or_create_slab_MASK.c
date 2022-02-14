
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int dummy; } ;
struct bio_slab {unsigned int slab_size; int slab_ref; struct kmem_cache* slab; int name; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 struct bio_slab* VAR_6 ;
 struct kmem_cache* FUNC_0 (int ,unsigned int,int ,int ,int *) ;
 struct bio_slab* FUNC_1 (struct bio_slab*,unsigned int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int,char*,unsigned int) ;

__attribute__((used)) static struct kmem_cache *FUNC_5(unsigned int VAR_7)
{
 unsigned int VAR_8 = sizeof(struct bio) + VAR_7;
 struct kmem_cache *VAR_9 = ((void*)0);
 struct bio_slab *VAR_10, *VAR_11;
 unsigned int VAR_12;
 unsigned int VAR_13, VAR_14 = -1;

 FUNC_2(&VAR_3);

 VAR_13 = 0;
 while (VAR_13 < VAR_5) {
  VAR_10 = &VAR_6[VAR_13];

  if (!VAR_10->slab && VAR_14 == -1)
   VAR_14 = VAR_13;
  else if (VAR_10->slab_size == VAR_8) {
   VAR_9 = VAR_10->slab;
   VAR_10->slab_ref++;
   break;
  }
  VAR_13++;
 }

 if (VAR_9)
  goto out_unlock;

 if (VAR_5 == VAR_4 && VAR_14 == -1) {
  VAR_12 = VAR_4 << 1;
  VAR_11 = FUNC_1(VAR_6,
      VAR_12 * sizeof(struct bio_slab),
      VAR_1);
  if (!VAR_11)
   goto out_unlock;
  VAR_4 = VAR_12;
  VAR_6 = VAR_11;
 }
 if (VAR_14 == -1)
  VAR_14 = VAR_5++;

 VAR_10 = &VAR_6[VAR_14];

 FUNC_4(VAR_10->name, sizeof(VAR_10->name), "bio-%d", VAR_14);
 VAR_9 = FUNC_0(VAR_10->name, VAR_8, VAR_0,
     VAR_2, ((void*)0));
 if (!VAR_9)
  goto out_unlock;

 VAR_10->slab = VAR_9;
 VAR_10->slab_ref = 1;
 VAR_10->slab_size = VAR_8;
out_unlock:
 FUNC_3(&VAR_3);
 return VAR_9;
}
