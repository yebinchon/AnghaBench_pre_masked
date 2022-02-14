
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_master_hub {int upstream; } ;
struct fsi_master {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__,int *,int) ;
 int FUNC_2 (int ,scalar_t__,int *,int) ;
 int FUNC_3 (int ) ;
 struct fsi_master_hub* FUNC_4 (struct fsi_master*) ;

__attribute__((used)) static int FUNC_5(struct fsi_master *VAR_3, int VAR_4)
{
 struct fsi_master_hub *VAR_5 = FUNC_4(VAR_3);
 int VAR_6, VAR_7;
 __be32 VAR_8;
 int VAR_9;

 VAR_6 = VAR_4 / 32;
 VAR_7 = VAR_4 % 32;

 VAR_8 = FUNC_0(0x80000000 >> VAR_7);

 VAR_9 = FUNC_2(VAR_5->upstream, VAR_2 + (4 * VAR_6), &VAR_8, 4);

 FUNC_3(VAR_0);

 FUNC_1(VAR_5->upstream, VAR_1 + (4 * VAR_6), &VAR_8, 4);

 return VAR_9;
}
