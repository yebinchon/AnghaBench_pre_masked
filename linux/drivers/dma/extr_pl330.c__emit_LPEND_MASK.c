
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct _arg_LPEND {int cond; int forever; unsigned int loop; int bjump; } ;
typedef enum pl330_cond { ____Placeholder_pl330_cond } pl330_cond ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*,char,char,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline u32 FUNC_1(unsigned VAR_4, u8 VAR_5[],
  const struct _arg_LPEND *VAR_6)
{
 enum pl330_cond VAR_7 = VAR_6->cond;
 bool VAR_8 = VAR_6->forever;
 unsigned VAR_9 = VAR_6->loop;
 u8 VAR_10 = VAR_6->bjump;

 if (VAR_4)
  return VAR_3;

 VAR_5[0] = VAR_1;

 if (VAR_9)
  VAR_5[0] |= (1 << 2);

 if (!VAR_8)
  VAR_5[0] |= (1 << 4);

 if (VAR_7 == VAR_2)
  VAR_5[0] |= (0 << 1) | (1 << 0);
 else if (VAR_7 == VAR_0)
  VAR_5[0] |= (1 << 1) | (1 << 0);

 VAR_5[1] = VAR_10;

 FUNC_0(VAR_3, "\tDMALP%s%c_%c bjmpto_%x\n",
   VAR_8 ? "FE" : "END",
   VAR_7 == VAR_2 ? 'S' : (VAR_7 == VAR_0 ? 'B' : 'A'),
   VAR_9 ? '1' : '0',
   VAR_10);

 return VAR_3;
}
