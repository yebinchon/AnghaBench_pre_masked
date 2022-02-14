
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_args {scalar_t__ origin_dev; int ti; scalar_t__ cache_dev; scalar_t__ metadata_dev; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct cache_args*) ;

__attribute__((used)) static void FUNC_2(struct cache_args *VAR_0)
{
 if (VAR_0->metadata_dev)
  FUNC_0(VAR_0->ti, VAR_0->metadata_dev);

 if (VAR_0->cache_dev)
  FUNC_0(VAR_0->ti, VAR_0->cache_dev);

 if (VAR_0->origin_dev)
  FUNC_0(VAR_0->ti, VAR_0->origin_dev);

 FUNC_1(VAR_0);
}
