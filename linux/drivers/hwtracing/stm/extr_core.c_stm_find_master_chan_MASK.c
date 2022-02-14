
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stp_master {int chan_map; int nr_free; } ;
struct stm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int,unsigned int,unsigned int) ;
 struct stp_master* FUNC_1 (struct stm_device*,unsigned int) ;
 int FUNC_2 (struct stm_device*,unsigned int) ;

__attribute__((used)) static int
FUNC_3(struct stm_device *VAR_1, unsigned int VAR_2,
       unsigned int *VAR_3, unsigned int VAR_4,
       unsigned int *VAR_5, unsigned int VAR_6)
{
 struct stp_master *VAR_7;
 unsigned int VAR_8;
 int VAR_9, VAR_10;

 for (VAR_8 = *VAR_3; VAR_8 <= VAR_4; VAR_8++) {
  if (!FUNC_1(VAR_1, VAR_8)) {
   VAR_10 = FUNC_2(VAR_1, VAR_8);
   if (VAR_10)
    return VAR_10;
  }

  VAR_7 = FUNC_1(VAR_1, VAR_8);

  if (!VAR_7->nr_free)
   continue;

  VAR_9 = FUNC_0(VAR_7->chan_map, *VAR_5, VAR_6,
      VAR_2);
  if (VAR_9 < 0)
   continue;

  *VAR_3 = VAR_8;
  *VAR_5 = VAR_9;
  return 0;
 }

 return -VAR_0;
}
