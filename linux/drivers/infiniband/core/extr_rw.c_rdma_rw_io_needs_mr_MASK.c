
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ib_device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ib_device*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline bool FUNC_2(struct ib_device *VAR_2, u8 VAR_3,
  enum dma_data_direction VAR_4, int VAR_5)
{
 if (FUNC_0(VAR_2, VAR_3) && VAR_4 == VAR_0)
  return 1;
 if (FUNC_1(VAR_1))
  return 1;
 return 0;
}
