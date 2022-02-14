
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dib0090_state {int wbd_offset; } ;
typedef scalar_t__ s16 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,int) ;

__attribute__((used)) static s16 FUNC_2(struct dib0090_state *VAR_1, u16 VAR_2)
{
 VAR_2 &= 0x3ff;
 if (VAR_2 < VAR_1->wbd_offset)
  VAR_2 = 0;
 else
  VAR_2 -= VAR_1->wbd_offset;

 return -640 + (s16) FUNC_1(VAR_0, FUNC_0(VAR_0), VAR_2);
}
