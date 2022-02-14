
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct era {scalar_t__ metadata_dev; int ti; scalar_t__ origin_dev; scalar_t__ wq; scalar_t__ md; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct era*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct era *VAR_0)
{
 if (VAR_0->md)
  FUNC_3(VAR_0->md);

 if (VAR_0->wq)
  FUNC_0(VAR_0->wq);

 if (VAR_0->origin_dev)
  FUNC_1(VAR_0->ti, VAR_0->origin_dev);

 if (VAR_0->metadata_dev)
  FUNC_1(VAR_0->ti, VAR_0->metadata_dev);

 FUNC_2(VAR_0);
}
