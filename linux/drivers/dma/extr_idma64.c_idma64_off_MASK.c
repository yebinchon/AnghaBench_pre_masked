
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idma64 {int all_chan_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct idma64*,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct idma64*,int ) ;
 int FUNC_4 (struct idma64*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct idma64 *VAR_7)
{
 unsigned short VAR_8 = 100;

 FUNC_4(VAR_7, VAR_1, 0);

 FUNC_1(VAR_7, FUNC_0(VAR_6), VAR_7->all_chan_mask);
 FUNC_1(VAR_7, FUNC_0(VAR_0), VAR_7->all_chan_mask);
 FUNC_1(VAR_7, FUNC_0(VAR_5), VAR_7->all_chan_mask);
 FUNC_1(VAR_7, FUNC_0(VAR_2), VAR_7->all_chan_mask);
 FUNC_1(VAR_7, FUNC_0(VAR_3), VAR_7->all_chan_mask);

 do {
  FUNC_2();
 } while (FUNC_3(VAR_7, VAR_1) & VAR_4 && --VAR_8);
}
