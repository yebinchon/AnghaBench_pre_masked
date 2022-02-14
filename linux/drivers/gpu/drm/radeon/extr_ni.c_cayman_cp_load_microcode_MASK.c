
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_device {TYPE_2__* me_fw; TYPE_1__* pfp_fw; } ;
typedef int __be32 ;
struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_3__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct radeon_device*,int) ;

__attribute__((used)) static int FUNC_3(struct radeon_device *VAR_8)
{
 const __be32 *VAR_9;
 int VAR_10;

 if (!VAR_8->me_fw || !VAR_8->pfp_fw)
  return -VAR_7;

 FUNC_2(VAR_8, 0);

 VAR_9 = (const __be32 *)VAR_8->pfp_fw->data;
 FUNC_0(VAR_5, 0);
 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
  FUNC_0(VAR_6, FUNC_1(VAR_9++));
 FUNC_0(VAR_5, 0);

 VAR_9 = (const __be32 *)VAR_8->me_fw->data;
 FUNC_0(VAR_4, 0);
 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++)
  FUNC_0(VAR_2, FUNC_1(VAR_9++));

 FUNC_0(VAR_5, 0);
 FUNC_0(VAR_4, 0);
 FUNC_0(VAR_3, 0);
 return 0;
}
