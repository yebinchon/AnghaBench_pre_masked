
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct idma64_chan {int mask; } ;
struct idma64 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (struct idma64*,int ,int ) ;
 int FUNC_4 (struct idma64_chan*,int ,int) ;
 int FUNC_5 (struct idma64*) ;

__attribute__((used)) static void FUNC_6(struct idma64 *VAR_6, struct idma64_chan *VAR_7)
{
 u32 VAR_8 = FUNC_1(1) | FUNC_0(0);
 u32 VAR_9 = 0;


 VAR_9 |= VAR_3 | VAR_4;

 FUNC_4(VAR_7, VAR_1, VAR_9);
 FUNC_4(VAR_7, VAR_0, VAR_8);


 FUNC_3(VAR_6, FUNC_2(VAR_5), VAR_7->mask);
 FUNC_3(VAR_6, FUNC_2(VAR_2), VAR_7->mask);
 FUNC_5(VAR_6);
}
