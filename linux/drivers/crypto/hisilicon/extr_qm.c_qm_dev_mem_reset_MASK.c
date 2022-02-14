
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_qm {scalar_t__ io_base; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__,int,int,int,int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct hisi_qm *VAR_2)
{
 u32 VAR_3;

 FUNC_2(0x1, VAR_2->io_base + VAR_1);
 return FUNC_1(VAR_2->io_base + VAR_0, VAR_3,
       VAR_3 & FUNC_0(0), 10, 1000);
}
