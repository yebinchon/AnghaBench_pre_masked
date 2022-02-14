
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u16 ;
struct hisi_qm {scalar_t__ io_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct hisi_qm *VAR_4, u16 VAR_5, u8 VAR_6, u16 VAR_7, u8 VAR_8)
{
 u64 VAR_9;

 VAR_9 = VAR_5 | ((u64)VAR_6 << VAR_0) |
     ((u64)VAR_7 << VAR_1) |
     ((u64)VAR_8 << VAR_2);

 FUNC_0(VAR_9, VAR_4->io_base + VAR_3);
}
