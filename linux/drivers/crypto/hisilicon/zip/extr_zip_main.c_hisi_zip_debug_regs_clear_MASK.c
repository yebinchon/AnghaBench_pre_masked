
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hisi_qm {scalar_t__ io_base; } ;
struct hisi_zip {struct hisi_qm qm; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct hisi_qm*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct hisi_zip *VAR_3)
{
 struct hisi_qm *VAR_4 = &VAR_3->qm;

 FUNC_1(0x0, VAR_4->io_base + VAR_2);
 FUNC_1(0x0, VAR_4->io_base + VAR_1);
 FUNC_1(0x0, VAR_4->io_base + VAR_0);

 FUNC_0(VAR_4);
}
