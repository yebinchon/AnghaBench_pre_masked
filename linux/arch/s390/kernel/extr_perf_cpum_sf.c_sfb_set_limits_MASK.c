
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hws_qsi_info_block {int bsdes; int dsdes; } ;
typedef int si ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct hws_qsi_info_block*,int ,int) ;
 int FUNC_2 (struct hws_qsi_info_block*) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_3, unsigned long VAR_4)
{
 struct hws_qsi_info_block VAR_5;

 VAR_1 = VAR_3;
 VAR_0 = VAR_4;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 if (!FUNC_2(&VAR_5))
  VAR_2 = FUNC_0(VAR_5.dsdes, VAR_5.bsdes);
}
