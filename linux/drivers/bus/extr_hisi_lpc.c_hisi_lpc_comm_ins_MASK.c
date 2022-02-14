
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lpc_cycle_para {size_t csize; int opflags; } ;
struct hisi_lpc_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 unsigned long FUNC_0 (struct hisi_lpc_dev*,unsigned long) ;
 int FUNC_1 (struct hisi_lpc_dev*,struct lpc_cycle_para*,unsigned long,unsigned char*,size_t) ;

__attribute__((used)) static u32 FUNC_2(void *VAR_3, unsigned long VAR_4, void *VAR_5,
        size_t VAR_6, unsigned int VAR_7)
{
 struct hisi_lpc_dev *VAR_8 = VAR_3;
 unsigned char *VAR_9 = VAR_5;
 struct lpc_cycle_para VAR_10;
 unsigned long VAR_11;

 if (!VAR_8 || !VAR_9 || !VAR_7 || !VAR_6 || VAR_6 > VAR_2)
  return -VAR_0;

 VAR_10.opflags = 0;
 if (VAR_6 > 1)
  VAR_10.opflags |= VAR_1;
 VAR_10.csize = VAR_6;

 VAR_11 = FUNC_0(VAR_8, VAR_4);

 do {
  int VAR_12;

  VAR_12 = FUNC_1(VAR_8, &VAR_10, VAR_11, VAR_9, VAR_6);
  if (VAR_12)
   return VAR_12;
  VAR_9 += VAR_6;
 } while (--VAR_7);

 return 0;
}
