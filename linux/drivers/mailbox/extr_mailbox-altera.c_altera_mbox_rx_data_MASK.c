
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mbox_chan {int dummy; } ;
struct altera_mbox {scalar_t__ mbox_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (struct altera_mbox*) ;
 int FUNC_1 (struct mbox_chan*,void*) ;
 struct altera_mbox* FUNC_2 (struct mbox_chan*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct mbox_chan *VAR_4)
{
 struct altera_mbox *VAR_5 = FUNC_2(VAR_4);
 u32 VAR_6[2];

 if (FUNC_0(VAR_5)) {
  VAR_6[VAR_3] =
   FUNC_3(VAR_5->mbox_base + VAR_1);
  VAR_6[VAR_2] =
   FUNC_3(VAR_5->mbox_base + VAR_0);
  FUNC_1(VAR_4, (void *)VAR_6);
 }
}
