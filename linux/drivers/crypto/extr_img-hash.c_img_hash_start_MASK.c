
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct img_hash_request_ctx {int flags; } ;
struct img_hash_dev {int dev; int req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct img_hash_request_ctx* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct img_hash_dev*,int ) ;
 int FUNC_3 (struct img_hash_dev*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct img_hash_dev *VAR_11, bool VAR_12)
{
 struct img_hash_request_ctx *VAR_13 = FUNC_0(VAR_11->req);
 u32 VAR_14 = VAR_10 << VAR_5;

 if (VAR_13->flags & VAR_6)
  VAR_14 |= VAR_1;
 else if (VAR_13->flags & VAR_7)
  VAR_14 |= VAR_2;
 else if (VAR_13->flags & VAR_8)
  VAR_14 |= VAR_3;
 else if (VAR_13->flags & VAR_9)
  VAR_14 |= VAR_4;
 FUNC_1(VAR_11->dev, "Starting hash process\n");
 FUNC_3(VAR_11, VAR_0, VAR_14);







 if (!VAR_12)
  FUNC_2(VAR_11, VAR_0);
}
