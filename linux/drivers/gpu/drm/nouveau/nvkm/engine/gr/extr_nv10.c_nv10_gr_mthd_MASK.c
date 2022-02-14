
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nv10_gr_chan {int dummy; } ;


 int FUNC_0 (struct nv10_gr_chan*,int ,int ) ;

__attribute__((used)) static bool
FUNC_1(struct nv10_gr_chan *VAR_0, u8 VAR_1, u32 VAR_2, u32 VAR_3)
{
 bool (*VAR_4)(struct nv10_gr_chan *, u32, u32);
 switch (VAR_1) {
 case 0x99: VAR_4 = FUNC_0; break;
 default:
  return 0;
 }
 return VAR_4(VAR_0, VAR_2, VAR_3);
}
