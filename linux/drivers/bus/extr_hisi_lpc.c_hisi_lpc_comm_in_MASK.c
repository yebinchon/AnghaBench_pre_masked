
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct lpc_cycle_para {size_t csize; int opflags; } ;
struct hisi_lpc_dev {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 unsigned long FUNC_0 (struct hisi_lpc_dev*,unsigned long) ;
 int FUNC_1 (struct hisi_lpc_dev*,struct lpc_cycle_para*,unsigned long,unsigned char*,size_t) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_3(void *VAR_2, unsigned long VAR_3, size_t VAR_4)
{
 struct hisi_lpc_dev *VAR_5 = VAR_2;
 struct lpc_cycle_para VAR_6;
 unsigned long VAR_7;
 u32 VAR_8 = 0;
 int VAR_9;

 if (!VAR_5 || !VAR_4 || VAR_4 > VAR_1)
  return ~0;

 VAR_7 = FUNC_0(VAR_5, VAR_3);

 VAR_6.opflags = VAR_0;
 VAR_6.csize = VAR_4;

 VAR_9 = FUNC_1(VAR_5, &VAR_6, VAR_7,
     (unsigned char *)&VAR_8, VAR_4);
 if (VAR_9)
  return ~0;

 return FUNC_2(VAR_8);
}
