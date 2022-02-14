
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
typedef int sector_t ;


 int FUNC_0 (struct request_queue*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline unsigned int FUNC_2(struct request_queue *VAR_0,
          sector_t VAR_1)
{
 sector_t VAR_2 = FUNC_0(VAR_0);

 return (VAR_1 + VAR_2 - 1) >> FUNC_1(VAR_2);
}
