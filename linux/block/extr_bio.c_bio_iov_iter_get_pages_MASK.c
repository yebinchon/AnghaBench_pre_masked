
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iov_iter {int dummy; } ;
struct bio {scalar_t__ bi_vcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct bio*,struct iov_iter*) ;
 int FUNC_2 (struct bio*,struct iov_iter*) ;
 int FUNC_3 (struct bio*,int ) ;
 int FUNC_4 (struct bio*,int ) ;
 scalar_t__ FUNC_5 (struct iov_iter*) ;
 int FUNC_6 (struct iov_iter*) ;

int FUNC_7(struct bio *VAR_2, struct iov_iter *VAR_3)
{
 const bool VAR_4 = FUNC_6(VAR_3);
 int VAR_5;

 if (FUNC_0(VAR_2->bi_vcnt))
  return -VAR_1;

 do {
  if (VAR_4)
   VAR_5 = FUNC_1(VAR_2, VAR_3);
  else
   VAR_5 = FUNC_2(VAR_2, VAR_3);
 } while (!VAR_5 && FUNC_5(VAR_3) && !FUNC_3(VAR_2, 0));

 if (VAR_4)
  FUNC_4(VAR_2, VAR_0);
 return VAR_2->bi_vcnt ? 0 : VAR_5;
}
