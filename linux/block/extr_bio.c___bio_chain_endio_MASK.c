
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {scalar_t__ bi_status; struct bio* bi_private; } ;


 int FUNC_0 (struct bio*) ;

__attribute__((used)) static struct bio *FUNC_1(struct bio *VAR_0)
{
 struct bio *VAR_1 = VAR_0->bi_private;

 if (!VAR_1->bi_status)
  VAR_1->bi_status = VAR_0->bi_status;
 FUNC_0(VAR_0);
 return VAR_1;
}
