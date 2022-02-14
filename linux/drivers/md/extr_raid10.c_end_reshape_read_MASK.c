
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r10bio {int read_slot; } ;
struct bio {struct r10bio* bi_private; } ;


 int FUNC_0 (struct r10bio*,struct bio*,int ) ;

__attribute__((used)) static void FUNC_1(struct bio *VAR_0)
{

 struct r10bio *VAR_1 = VAR_0->bi_private;

 FUNC_0(VAR_1, VAR_0, VAR_1->read_slot);
}
