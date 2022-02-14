
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int flags; } ;
struct mthca_dev {TYPE_1__ cmd; } ;


 int VAR_0 ;
 int FUNC_0 (struct mthca_dev*,int ,int *,int,int ,int ,int ,unsigned long) ;
 int FUNC_1 (struct mthca_dev*,int ,int *,int,int ,int ,int ,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct mthca_dev *VAR_1,
    u64 VAR_2,
    u64 *VAR_3,
    u32 VAR_4,
    u8 VAR_5,
    u16 VAR_6,
    unsigned long VAR_7)
{
 if (VAR_1->cmd.flags & VAR_0)
  return FUNC_1(VAR_1, VAR_2, VAR_3, 1,
          VAR_4, VAR_5, VAR_6,
          VAR_7);
 else
  return FUNC_0(VAR_1, VAR_2, VAR_3, 1,
          VAR_4, VAR_5, VAR_6,
          VAR_7);
}
