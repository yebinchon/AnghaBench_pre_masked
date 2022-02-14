
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int flags; int hcr_mutex; } ;
struct mthca_dev {TYPE_1__ cmd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mthca_dev*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct mthca_dev*,int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct mthca_dev *VAR_2,
     u64 VAR_3,
     u64 VAR_4,
     u32 VAR_5,
     u8 VAR_6,
     u16 VAR_7,
     u16 VAR_8,
     int VAR_9)
{
 int VAR_10 = 0;

 FUNC_2(&VAR_2->cmd.hcr_mutex);

 if (VAR_9 && VAR_2->cmd.flags & VAR_0 && VAR_1)
  FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5,
        VAR_6, VAR_7, VAR_8);
 else
  VAR_10 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5,
      VAR_6, VAR_7, VAR_8, VAR_9);

 FUNC_3(&VAR_2->cmd.hcr_mutex);
 return VAR_10;
}
