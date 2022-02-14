
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_range_softc {int mr_ndesc; int mr_desc; scalar_t__ mr_cap; } ;
struct mem_range_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct mem_range_softc *VAR_3)
{
 VAR_3->mr_cap = 0;
 VAR_3->mr_ndesc = 8;
 VAR_3->mr_desc = FUNC_0(VAR_3->mr_ndesc * sizeof(struct mem_range_desc),
     VAR_0, VAR_1 | VAR_2);
}
