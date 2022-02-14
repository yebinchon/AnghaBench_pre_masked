
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fritzcard {int name; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct fritzcard*,int) ;

__attribute__((used)) static void
FUNC_2(struct fritzcard *VAR_0)
{
 u32 VAR_1;

 VAR_1 = FUNC_1(VAR_0, 1);
 FUNC_0("%s: HDLC 1 STA %x\n", VAR_0->name, VAR_1);
 VAR_1 = FUNC_1(VAR_0, 2);
 FUNC_0("%s: HDLC 2 STA %x\n", VAR_0->name, VAR_1);
}
