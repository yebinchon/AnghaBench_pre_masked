
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dib8000_state {int revision; } ;


 int FUNC_0 (struct dib8000_state*,int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct dib8000_state *VAR_0)
{
 u8 VAR_1 = 3;

 if (VAR_0->revision == 0x8090) {
  FUNC_0(VAR_0, 922, (VAR_1 << 2));
  FUNC_0(VAR_0, 923, 2048);

  FUNC_0(VAR_0, 922, (VAR_1 << 2) | 0x1);
  FUNC_0(VAR_0, 922, (VAR_1 << 2));
 } else {

  FUNC_0(VAR_0, 923, (0 << 1) | (0 << 0));
  FUNC_0(VAR_0, 924, 776);


  FUNC_0(VAR_0, 923, (1 << 0));
  FUNC_0(VAR_0, 923, (0 << 0));
 }

 FUNC_1(1);
 return 0;
}
