
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_device {int bd_disk; int bd_part; } ;
typedef scalar_t__ sector_t ;


 int FUNC_0 (struct block_device*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct block_device*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static inline bool FUNC_5(struct block_device *VAR_0,
      sector_t VAR_1)
{
 if (!FUNC_1(FUNC_0(VAR_0)))
  return 0;

 if (VAR_1 != FUNC_4(VAR_0->bd_part))
  return 0;





 return FUNC_3(VAR_0) == 0 &&
        FUNC_4(VAR_0->bd_part) == FUNC_2(VAR_0->bd_disk);
}
