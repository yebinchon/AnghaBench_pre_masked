
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5conf {scalar_t__ log; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,struct bio*) ;
 int FUNC_1 (scalar_t__,struct bio*) ;
 scalar_t__ FUNC_2 (struct r5conf*) ;

__attribute__((used)) static inline int FUNC_3(struct r5conf *VAR_1, struct bio *VAR_2)
{
 int VAR_3 = -VAR_0;

 if (VAR_1->log)
  VAR_3 = FUNC_1(VAR_1->log, VAR_2);
 else if (FUNC_2(VAR_1))
  VAR_3 = FUNC_0(VAR_1->log, VAR_2);

 return VAR_3;
}
