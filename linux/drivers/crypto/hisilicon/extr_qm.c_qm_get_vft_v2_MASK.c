
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct hisi_qm {scalar_t__ io_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct hisi_qm*,int ,int ,int ,int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct hisi_qm *VAR_7, u32 *VAR_8, u32 *VAR_9)
{
 u64 VAR_10;
 int VAR_11;

 VAR_11 = FUNC_0(VAR_7, VAR_2, 0, 0, 1);
 if (VAR_11)
  return VAR_11;

 VAR_10 = FUNC_1(VAR_7->io_base + VAR_1) |
    ((u64)FUNC_1(VAR_7->io_base + VAR_0) << 32);
 *VAR_8 = VAR_3 & (VAR_10 >> VAR_4);
 *VAR_9 = (VAR_5 &
     (VAR_10 >> VAR_6)) + 1;

 return 0;
}
