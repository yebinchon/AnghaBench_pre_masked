
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {scalar_t__ bi_status; void* bi_private; } ;


 int FUNC_0 (void*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct bio *VAR_0)
{
 void *VAR_1 = VAR_0->bi_private;

 FUNC_0(VAR_1, 0, VAR_0->bi_status ? 1 : 0);
}
