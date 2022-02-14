
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef unsigned long long u32 ;
struct img_hash_dev {int flags; int dev; scalar_t__ err; TYPE_1__* req; } ;
struct TYPE_2__ {scalar_t__ nbytes; } ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long long VAR_5 ;
 unsigned long long VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,unsigned long long) ;
 int FUNC_1 (struct img_hash_dev*,int ,unsigned long long) ;

__attribute__((used)) static int FUNC_2(struct img_hash_dev *VAR_8)
{
 unsigned long long VAR_9;
 u32 VAR_10, VAR_11;

 FUNC_1(VAR_8, VAR_4, VAR_5);
 FUNC_1(VAR_8, VAR_4, VAR_6);
 FUNC_1(VAR_8, VAR_0, VAR_1);

 VAR_9 = (u64)VAR_8->req->nbytes << 3;
 VAR_10 = VAR_9 >> 32;
 VAR_11 = VAR_9;
 FUNC_1(VAR_8, VAR_2, VAR_10);
 FUNC_1(VAR_8, VAR_3, VAR_11);

 if (!(VAR_7 & VAR_8->flags)) {
  VAR_8->flags |= VAR_7;
  VAR_8->err = 0;
 }
 FUNC_0(VAR_8->dev, "hw initialized, nbits: %llx\n", VAR_9);
 return 0;
}
