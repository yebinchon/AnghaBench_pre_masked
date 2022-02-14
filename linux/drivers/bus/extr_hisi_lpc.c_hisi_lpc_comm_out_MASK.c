
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lpc_cycle_para {size_t csize; int opflags; } ;
struct hisi_lpc_dev {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 unsigned long FUNC_1 (struct hisi_lpc_dev*,unsigned long) ;
 int FUNC_2 (struct hisi_lpc_dev*,struct lpc_cycle_para*,unsigned long,unsigned char const*,size_t) ;

__attribute__((used)) static void FUNC_3(void *VAR_2, unsigned long VAR_3,
         u32 VAR_4, size_t VAR_5)
{
 struct hisi_lpc_dev *VAR_6 = VAR_2;
 struct lpc_cycle_para VAR_7;
 const unsigned char *VAR_8;
 unsigned long VAR_9;

 if (!VAR_6 || !VAR_5 || VAR_5 > VAR_1)
  return;

 VAR_4 = FUNC_0(VAR_4);

 VAR_8 = (const unsigned char *)&VAR_4;
 VAR_9 = FUNC_1(VAR_6, VAR_3);

 VAR_7.opflags = VAR_0;
 VAR_7.csize = VAR_5;

 FUNC_2(VAR_6, &VAR_7, VAR_9, VAR_8, VAR_5);
}
