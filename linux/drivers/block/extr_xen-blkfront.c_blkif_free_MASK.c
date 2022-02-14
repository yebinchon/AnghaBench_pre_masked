
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blkfront_info {unsigned int nr_rings; int * rinfo; scalar_t__ rq; int connected; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct blkfront_info *VAR_2, int VAR_3)
{
 unsigned int VAR_4;


 VAR_2->connected = VAR_3 ?
  VAR_1 : VAR_0;

 if (VAR_2->rq)
  FUNC_0(VAR_2->rq);

 for (VAR_4 = 0; VAR_4 < VAR_2->nr_rings; VAR_4++)
  FUNC_1(&VAR_2->rinfo[VAR_4]);

 FUNC_2(VAR_2->rinfo);
 VAR_2->rinfo = ((void*)0);
 VAR_2->nr_rings = 0;
}
