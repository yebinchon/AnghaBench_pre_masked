
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct request {struct bio* bio; } ;
struct bio_vec {int bv_offset; } ;
struct bio {int dummy; } ;


 int FUNC_0 (struct request_queue*,struct bio_vec*,int) ;
 int FUNC_1 (struct bio*,struct bio_vec*) ;
 int FUNC_2 (struct bio*,struct bio_vec*) ;
 int FUNC_3 (struct bio*) ;
 scalar_t__ FUNC_4 (struct request_queue*,struct bio_vec*,struct bio_vec*) ;
 int FUNC_5 (struct request_queue*) ;

__attribute__((used)) static inline bool FUNC_6(struct request_queue *VAR_0,
  struct request *VAR_1, struct bio *VAR_2, struct bio *VAR_3)
{
 struct bio_vec VAR_4, VAR_5;

 if (!FUNC_3(VAR_2) || !FUNC_5(VAR_0))
  return 0;






 if (VAR_1)
  FUNC_1(VAR_1->bio, &VAR_4);
 else
  FUNC_1(VAR_2, &VAR_4);
 if (VAR_4.bv_offset & FUNC_5(VAR_0))
  return 1;
 FUNC_2(VAR_2, &VAR_4);
 FUNC_1(VAR_3, &VAR_5);
 if (FUNC_4(VAR_0, &VAR_4, &VAR_5))
  return 0;
 return FUNC_0(VAR_0, &VAR_4, VAR_5.bv_offset);
}
