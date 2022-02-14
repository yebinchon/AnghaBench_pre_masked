
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u16 ;
struct hisi_qm {int io_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(struct hisi_qm *VAR_8, u16 VAR_9, u8 VAR_10, u16 VAR_11, u8 VAR_12)
{
 u64 VAR_13;
 u64 VAR_14;
 u16 VAR_15 = 0;

 if (VAR_10 == VAR_5 || VAR_10 == VAR_4)
  VAR_14 = VAR_7;
 else
  VAR_14 = VAR_6;

 VAR_13 = VAR_9 | ((u64)VAR_10 << VAR_0) |
     ((u64)VAR_15 << VAR_3) |
     ((u64)VAR_11 << VAR_1) |
     ((u64)VAR_12 << VAR_2);

 FUNC_0(VAR_13, VAR_8->io_base + VAR_14);
}
