
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ max_write_same_sectors; } ;
struct request_queue {TYPE_1__ limits; } ;
struct bio_set {int dummy; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bio*) ;
 struct bio* FUNC_1 (struct bio*,scalar_t__,int ,struct bio_set*) ;

__attribute__((used)) static struct bio *FUNC_2(struct request_queue *VAR_1,
         struct bio *VAR_2,
         struct bio_set *VAR_3,
         unsigned *VAR_4)
{
 *VAR_4 = 1;

 if (!VAR_1->limits.max_write_same_sectors)
  return ((void*)0);

 if (FUNC_0(VAR_2) <= VAR_1->limits.max_write_same_sectors)
  return ((void*)0);

 return FUNC_1(VAR_2, VAR_1->limits.max_write_same_sectors, VAR_0, VAR_3);
}
