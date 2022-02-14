
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int cmd_flags; } ;
struct bfq_data {int bfq_back_max; scalar_t__ bfq_back_penalty; } ;
typedef scalar_t__ sector_t ;




 int VAR_0 ;
 scalar_t__ FUNC_0 (struct request*) ;
 scalar_t__ FUNC_1 (struct request*) ;

__attribute__((used)) static struct request *FUNC_2(struct bfq_data *VAR_1,
          struct request *VAR_2,
          struct request *VAR_3,
          sector_t VAR_4)
{
 sector_t VAR_5, VAR_6, VAR_7 = 0, VAR_8 = 0;
 unsigned long VAR_9;


 unsigned int VAR_10 = 0;

 if (!VAR_2 || VAR_2 == VAR_3)
  return VAR_3;
 if (!VAR_3)
  return VAR_2;

 if (FUNC_1(VAR_2) && !FUNC_1(VAR_3))
  return VAR_2;
 else if (FUNC_1(VAR_3) && !FUNC_1(VAR_2))
  return VAR_3;
 if ((VAR_2->cmd_flags & VAR_0) && !(VAR_3->cmd_flags & VAR_0))
  return VAR_2;
 else if ((VAR_3->cmd_flags & VAR_0) && !(VAR_2->cmd_flags & VAR_0))
  return VAR_3;

 VAR_5 = FUNC_0(VAR_2);
 VAR_6 = FUNC_0(VAR_3);




 VAR_9 = VAR_1->bfq_back_max * 2;






 if (VAR_5 >= VAR_4)
  VAR_7 = VAR_5 - VAR_4;
 else if (VAR_5 + VAR_9 >= VAR_4)
  VAR_7 = (VAR_4 - VAR_5) * VAR_1->bfq_back_penalty;
 else
  VAR_10 |= 0x01;

 if (VAR_6 >= VAR_4)
  VAR_8 = VAR_6 - VAR_4;
 else if (VAR_6 + VAR_9 >= VAR_4)
  VAR_8 = (VAR_4 - VAR_6) * VAR_1->bfq_back_penalty;
 else
  VAR_10 |= 0x02;







 switch (VAR_10) {
 case 0:
  if (VAR_7 < VAR_8)
   return VAR_2;
  else if (VAR_8 < VAR_7)
   return VAR_3;

  if (VAR_5 >= VAR_6)
   return VAR_2;
  else
   return VAR_3;

 case 0x02:
  return VAR_2;
 case 0x01:
  return VAR_3;
 case 0x01|0x02:
 default:






  if (VAR_5 <= VAR_6)
   return VAR_2;
  else
   return VAR_3;
 }
}
