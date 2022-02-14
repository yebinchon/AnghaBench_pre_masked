
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {struct armada_crtc* private; } ;
struct armada_crtc {scalar_t__ base; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct seq_file*,char*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct armada_crtc *VAR_2 = VAR_0->private;
 int VAR_3;

 for (VAR_3 = 0x84; VAR_3 <= 0x1c4; VAR_3 += 4) {
  u32 VAR_4 = FUNC_0(VAR_2->base + VAR_3);
  FUNC_1(VAR_0, "0x%04x: 0x%08x\n", VAR_3, VAR_4);
 }

 return 0;
}
