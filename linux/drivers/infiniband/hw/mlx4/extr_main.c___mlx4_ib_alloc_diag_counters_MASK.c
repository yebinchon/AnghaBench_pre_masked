
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mlx4_ib_dev {TYPE_2__* dev; } ;
struct TYPE_3__ {int flags2; } ;
struct TYPE_4__ {TYPE_1__ caps; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (scalar_t__,int,int ) ;
 int FUNC_2 (char const**) ;

__attribute__((used)) static int FUNC_3(struct mlx4_ib_dev *VAR_6,
      const char ***VAR_7,
      u32 **VAR_8,
      u32 *VAR_9,
      bool VAR_10)
{
 u32 VAR_11;

 VAR_11 = FUNC_0(VAR_3);

 if (VAR_6->dev->caps.flags2 & VAR_2)
  VAR_11 += FUNC_0(VAR_5);

 if (!VAR_10)
  VAR_11 += FUNC_0(VAR_4);

 *VAR_7 = FUNC_1(VAR_11, sizeof(**VAR_7), VAR_1);
 if (!*VAR_7)
  return -VAR_0;

 *VAR_8 = FUNC_1(VAR_11, sizeof(**VAR_8), VAR_1);
 if (!*VAR_8)
  goto err_name;

 *VAR_9 = VAR_11;

 return 0;

err_name:
 FUNC_2(*VAR_7);
 return -VAR_0;
}
