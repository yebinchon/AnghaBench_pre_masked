
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpc_cycle_para {size_t csize; int opflags; } ;
struct hisi_lpc_dev {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 unsigned long FUNC_0 (struct hisi_lpc_dev*,unsigned long) ;
 scalar_t__ FUNC_1 (struct hisi_lpc_dev*,struct lpc_cycle_para*,unsigned long,unsigned char const*,size_t) ;

__attribute__((used)) static void FUNC_2(void *VAR_2, unsigned long VAR_3,
          const void *VAR_4, size_t VAR_5,
          unsigned int VAR_6)
{
 struct hisi_lpc_dev *VAR_7 = VAR_2;
 struct lpc_cycle_para VAR_8;
 const unsigned char *VAR_9 = VAR_4;
 unsigned long VAR_10;

 if (!VAR_7 || !VAR_9 || !VAR_6 || !VAR_5 || VAR_5 > VAR_1)
  return;

 VAR_8.opflags = 0;
 if (VAR_5 > 1)
  VAR_8.opflags |= VAR_0;
 VAR_8.csize = VAR_5;

 VAR_10 = FUNC_0(VAR_7, VAR_3);
 do {
  if (FUNC_1(VAR_7, &VAR_8, VAR_10, VAR_9, VAR_5))
   break;
  VAR_9 += VAR_5;
 } while (--VAR_6);
}
