
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_qm {scalar_t__ io_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,int,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct hisi_qm *VAR_2)
{
 u32 VAR_3;

 return FUNC_0(VAR_2->io_base + VAR_1,
       VAR_3, !((VAR_3 >> VAR_0) &
       0x1), 10, 1000);
}
